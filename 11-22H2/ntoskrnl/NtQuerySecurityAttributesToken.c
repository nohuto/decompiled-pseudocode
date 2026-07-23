/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140726550
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022C948 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     SepReferenceTokenByHandle @ 0x1402B0290 (SepReferenceTokenByHandle.c)
 *     SepCaptureUnicodeStringArray @ 0x1406D4D00 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  char v9; // r14
  unsigned __int8 PreviousMode; // bl
  ULONG v11; // r15d
  NTSTATUS SecurityAttributesToken; // esi
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v15; // rdi
  __int64 v16; // rdx
  int v18; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = Length;
  if ( Length )
  {
    if ( Buffer )
      goto LABEL_3;
LABEL_17:
    SecurityAttributesToken = -1073741811;
    v18 = -1073741811;
LABEL_18:
    v15 = (PERESOURCE *)Object;
    goto LABEL_8;
  }
  if ( Buffer )
    goto LABEL_17;
LABEL_3:
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, Length, 4u);
    ProbeForWrite(ReturnLength, 4uLL, 4u);
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray((__int64)Attributes, NumberOfAttributes, PreviousMode, &P);
  v18 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_18;
  SecurityAttributesToken = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v13, &Object, &Length, &v21);
  v18 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  LOBYTE(Length) = 1;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v15,
                              v16,
                              (__int64)P,
                              NumberOfAttributes,
                              0,
                              (__int64)Buffer,
                              v11,
                              (__int64)ReturnLength);
  v18 = SecurityAttributesToken;
LABEL_8:
  if ( PreviousMode == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v15[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v18;
    v15 = (PERESOURCE *)Object;
  }
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x74726853u);
  return SecurityAttributesToken;
}

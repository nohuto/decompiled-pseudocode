/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x1406A09D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140300534 @ 0x140300534 (sub_140300534.c)
 *     sub_1406A0BF0 @ 0x1406A0BF0 (sub_1406A0BF0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  char v9; // r15
  unsigned __int8 v10; // bl
  ULONG v11; // r14d
  PULONG v12; // r13
  NTSTATUS v13; // esi
  int v14; // r9d
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v16; // rdi
  __int64 v17; // rdx
  int v19; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  Object = 0LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  v11 = Length;
  if ( Length )
  {
    if ( Buffer )
      goto LABEL_3;
LABEL_20:
    v13 = -1073741811;
    v19 = -1073741811;
LABEL_19:
    v16 = (PERESOURCE *)Object;
    goto LABEL_8;
  }
  if ( Buffer )
    goto LABEL_20;
LABEL_3:
  if ( v10 )
  {
    ProbeForWrite(Buffer, Length, 4u);
    v12 = ReturnLength;
    ProbeForWrite(ReturnLength, 4uLL, 4u);
  }
  else
  {
    v12 = ReturnLength;
  }
  v13 = sub_1406A0BF0(Attributes, NumberOfAttributes, v10, &P);
  v19 = v13;
  if ( v13 < 0 )
    goto LABEL_19;
  v13 = sub_1402F8F70(TokenHandle, 8u, v10, v14, &Object, &Length, &v22);
  v19 = v13;
  if ( v13 < 0 )
    goto LABEL_19;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v16 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  LOBYTE(Length) = 1;
  v13 = sub_140300534((__int64)v16, v17, (__int64)P, NumberOfAttributes, 0, (__int64)Buffer, v11, (__int64)v12);
  v19 = v13;
LABEL_8:
  if ( v10 == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v16[6]);
    sub_1402F9540((__int64)KeGetCurrentThread());
    v13 = v19;
    v16 = (PERESOURCE *)Object;
  }
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x74726853u);
  return v13;
}

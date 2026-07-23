/*
 * XREFs of SeSetLearningModeObjectInformation @ 0x1405B845C
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1403AC540 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByName @ 0x1406C2D00 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B024 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     RtlStringCbCatW @ 0x140370FC4 (RtlStringCbCatW.c)
 *     memset @ 0x140435400 (memset.c)
 *     SepGetCurrentLogLevel @ 0x1405B87FC (SepGetCurrentLogLevel.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     PsReferenceEffectiveToken @ 0x14071D75C (PsReferenceEffectiveToken.c)
 *     ObQueryNameString @ 0x14075B880 (ObQueryNameString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void __fastcall SeSetLearningModeObjectInformation(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v3; // rax
  int v4; // edi
  void *v5; // rcx
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  _OBJECT_NAME_INFORMATION *v7; // rdi
  NTSTATUS v8; // eax
  _OBJECT_NAME_INFORMATION *v9; // rax
  size_t v10; // r14
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  __int64 v13; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+40h] BYREF
  int v17; // [rsp+88h] [rbp+48h] BYREF

  ReturnLength = 0;
  v17 = 0;
  if ( SepLearningModeTokenCount )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = (_DWORD *)PsReferenceEffectiveToken(
                     (_DWORD)CurrentThread,
                     1953654867,
                     (unsigned int)&v17,
                     (unsigned int)&Object,
                     (__int64)v14,
                     0LL);
    v4 = v3[50] & 0x1000000;
    if ( v17 == 1 )
      ObFastDereferenceObject(
        (signed __int64 *)&CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[5],
        (unsigned __int64)v3,
        0x74726853u);
    else
      ObfDereferenceObjectWithTag(v3, 0x74726853u);
    if ( v4 )
    {
      *(_OWORD *)(a1 + 40) = 0LL;
      v5 = *(void **)(a1 + 32);
      if ( !v5 )
        goto LABEL_20;
      Object = 0LL;
      if ( ObReferenceObjectByHandle(v5, 0, 0LL, KeGetCurrentThread()->PreviousMode, &Object, 0LL) < 0 )
        goto LABEL_20;
      Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, 528LL, 1330799955LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ObQueryNameString(Object, Pool2, 0x210u, &ReturnLength);
        if ( v8 != -1073741820 )
          goto LABEL_12;
        ExFreePoolWithTag(v7, 0);
        v9 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 1330799955LL);
        v7 = v9;
        if ( v9 )
        {
          v8 = ObQueryNameString(Object, v9, ReturnLength, &ReturnLength);
LABEL_12:
          if ( v8 >= 0 )
          {
            if ( v7->Name.Buffer )
            {
              v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2LL + v7->Name.MaximumLength;
              v11 = (wchar_t *)ExAllocatePool2(256LL, v10, 1330799955LL);
              v12 = v11;
              if ( v11 )
              {
                memset(v11, 0, v10);
                RtlStringCbCopyW(v12, v10, v7->Name.Buffer);
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
                {
                  RtlStringCbCatW(v12, v10, L"\\");
                  RtlStringCbCatW(v12, v10, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 24) + 8LL));
                }
                RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v12);
              }
            }
          }
          ExFreePoolWithTag(v7, 0);
        }
      }
      ObfDereferenceObject(Object);
LABEL_20:
      *(_DWORD *)(a1 + 8) = SepGetCurrentLogLevel(KeGetCurrentThread());
      *(_QWORD *)a1 = *(_QWORD *)(v13 + 1528);
      *(_QWORD *)(v13 + 1528) = a1;
    }
  }
}

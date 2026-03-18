/*
 * XREFs of NtCreateRegistryTransaction @ 0x1406E2A70
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, __int64 a2, int a3, int a4)
{
  int v7; // ecx
  char v8; // r14
  char PreviousMode; // r15
  __int64 v10; // rax
  int inserted; // edi
  _OWORD *v12; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h]
  __int64 v16[3]; // [rsp+68h] [rbp-30h] BYREF

  *(_OWORD *)v16 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((__int64)v16);
  v8 = CmpAcquireShutdownRundown();
  if ( v8 )
  {
    if ( a4 )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v10 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v10 = (__int64)a1;
        *(_QWORD *)v10 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      LOBYTE(v7) = PreviousMode;
      inserted = ObCreateObjectEx(v7, (_DWORD)CmRegistryTransactionType, a3, PreviousMode);
      if ( inserted >= 0 )
      {
        v12 = Object;
        *(_OWORD *)Object = 0LL;
        v12[1] = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        inserted = ObInsertObjectEx(v12, 0LL, 0, 0LL, (__int64)&Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          *a1 = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v8 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo(v16);
  return (unsigned int)inserted;
}

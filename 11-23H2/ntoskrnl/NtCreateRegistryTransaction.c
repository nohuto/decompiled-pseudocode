/*
 * XREFs of NtCreateRegistryTransaction @ 0x1407D1D40
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     NtClose @ 0x1406E44C0 (NtClose.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, int a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  char v12; // r14
  char PreviousMode; // r15
  __int64 v14; // rax
  int inserted; // edi
  _OWORD *v16; // rcx
  PVOID v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-78h]
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22[3]; // [rsp+68h] [rbp-30h] BYREF

  *(_OWORD *)v22 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((__int64)v22);
  v12 = CmpAcquireShutdownRundown(v9, v8, v10);
  if ( v12 )
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
        v14 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v14 = (__int64)a1;
        *(_QWORD *)v14 = 0LL;
      }
      else
      {
        *a1 = 0LL;
      }
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   CmRegistryTransactionType,
                   a3,
                   PreviousMode,
                   v19,
                   32,
                   0,
                   0,
                   &Object,
                   0LL);
      if ( inserted >= 0 )
      {
        v16 = Object;
        *(_OWORD *)Object = 0LL;
        v16[1] = 0LL;
        *((_QWORD *)v16 + 1) = 0LL;
        inserted = ObInsertObjectEx((char *)v16, 0LL, a2, 0, 0, 0LL, &Handle);
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
  v17 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v12 )
    CmpReleaseShutdownRundown(v17, v11);
  CmCleanupThreadInfo(v22);
  return (unsigned int)inserted;
}

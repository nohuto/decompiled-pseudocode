/*
 * XREFs of sub_1407B69F0 @ 0x1407B69F0
 * Callers:
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 *__fastcall sub_1407B69F0(__int64 *Object, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v5; // rbp
  int v6; // r14d
  __int64 *v7; // rsi
  bool v8; // zf
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  Handle = 0LL;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    v6 = 0;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3CAC8, 0LL);
    if ( Object )
      v7 = (__int64 *)Object[137];
    else
      v7 = (__int64 *)qword_140C1BF80;
    if ( v7 != &qword_140C1BF80 )
    {
      while ( 1 )
      {
        v5 = v7 - 137;
        if ( ObReferenceObjectSafeWithTag((__int64)(v7 - 137)) )
          break;
        v7 = (__int64 *)*v7;
        if ( v7 == &qword_140C1BF80 )
          goto LABEL_7;
      }
      v6 = 1;
    }
LABEL_7:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3CAC8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140D3CAC8);
    sub_1402AFC00((ULONG_PTR)&qword_140D3CAC8);
    v8 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v8 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x6E457350u);
    Object = 0LL;
    if ( v6 )
      Object = v5;
    if ( !Object )
      return 0LL;
    if ( (*((_DWORD *)Object + 281) & 0x4000000) != 0 )
    {
      if ( !a2 )
        return Object;
      if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        return Object;
      }
    }
  }
}

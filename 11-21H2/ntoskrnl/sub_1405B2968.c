/*
 * XREFs of sub_1405B2968 @ 0x1405B2968
 * Callers:
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 * Callees:
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     sub_14028F8E4 @ 0x14028F8E4 (sub_14028F8E4.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405B766C @ 0x1405B766C (sub_1405B766C.c)
 */

_UNKNOWN **__fastcall sub_1405B2968(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v10; // rdi
  int v12[14]; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  result = &retaddr;
  v12[0] = 0;
  v14 = 0;
  ++dword_140C29778[a2];
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    sub_14028F8E4(a3);
    --*((_WORD *)CurrentThread + 243);
    v10 = (signed __int64 *)(a4 + 192);
    ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
    if ( a2 == (unsigned int)sub_140235D34(a1, v12, &v14) )
      sub_1405B766C(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), a2, 1LL);
    else
      ++dword_140C29788;
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    sub_1402AFC00((ULONG_PTR)v10);
    if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
    return (_UNKNOWN **)sub_14028F8E4(a3);
  }
  return result;
}

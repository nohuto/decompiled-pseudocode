/*
 * XREFs of sub_14038EAC8 @ 0x14038EAC8
 * Callers:
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_14038EAC8(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v7; // rbp
  _QWORD *v8; // rdx

  if ( (*(_DWORD *)(a1 + 4) & 0x100) != 0 )
    return 0LL;
  v2 = (_QWORD *)(a1 + 16640);
  v3 = *(_QWORD *)(a1 + 16640);
  if ( v3 == a1 + 16640 )
    return 0LL;
  if ( a2 )
    return *(_QWORD *)(v3 - 8);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  v7 = (signed __int64 *)(a1 + 16672);
  ExAcquirePushLockSharedEx(a1 + 16672, 0LL);
  v8 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 != v2 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(v8 - 1) + 176LL) + 24LL)) <= 1 )
      __fastfail(0xEu);
    v5 = *(v8 - 1);
  }
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
    && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}

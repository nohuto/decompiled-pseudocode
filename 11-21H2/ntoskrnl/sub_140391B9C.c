/*
 * XREFs of sub_140391B9C @ 0x140391B9C
 * Callers:
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_140391B10 @ 0x140391B10 (sub_140391B10.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140391CE4 @ 0x140391CE4 (sub_140391CE4.c)
 *     sub_140391D3C @ 0x140391D3C (sub_140391D3C.c)
 *     sub_1405F7E2C @ 0x1405F7E2C (sub_1405F7E2C.c)
 */

__int64 __fastcall sub_140391B9C(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // ebx
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  __int64 result; // rax

  v5 = (volatile signed __int32 *)(a1 + 6592);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6592), 1u);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v7 = (signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  *(_DWORD *)(a3 + 64) = 2;
  v8 = a1 + 80;
  v9 = sub_140391D3C(a1 + 80, a3, a2);
  sub_140391CE4(v8, a1 + 5936);
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  v10 = KeGetCurrentThread();
  v11 = (*((_WORD *)v10 + 243))++ == 0xFFFF;
  if ( v11 && *((struct _KTHREAD **)v10 + 19) != (struct _KTHREAD *)((char *)v10 + 152) )
    KiCheckForKernelApcDelivery();
  _InterlockedAdd(v5, 0xFFFFFFFF);
  result = v9;
  if ( v9 == -2147483634 )
    return 3221225626LL;
  return result;
}

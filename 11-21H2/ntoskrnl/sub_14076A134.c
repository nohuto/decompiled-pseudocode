/*
 * XREFs of sub_14076A134 @ 0x14076A134
 * Callers:
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14083F090 @ 0x14083F090 (sub_14083F090.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14076A1F0 @ 0x14076A1F0 (sub_14076A1F0.c)
 *     sub_14077B33C @ 0x14077B33C (sub_14077B33C.c)
 */

void __fastcall sub_14076A134(unsigned int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // r10
  __int64 v10; // rbx
  struct _KTHREAD *v11; // r8

  v8 = sub_14077B33C(*(unsigned int *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = v8;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --*((_WORD *)v11 + 242);
  ExAcquirePushLockSharedEx(a3, 0LL);
  sub_14076A1F0(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL);
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(a2, 0LL);
  KeLeaveCriticalRegion();
}

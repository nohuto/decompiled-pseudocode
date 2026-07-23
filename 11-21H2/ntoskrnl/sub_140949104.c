/*
 * XREFs of sub_140949104 @ 0x140949104
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14077B33C @ 0x14077B33C (sub_14077B33C.c)
 *     sub_1409491C0 @ 0x1409491C0 (sub_1409491C0.c)
 */

void __fastcall sub_140949104(unsigned int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  void *v8; // rax
  struct _KTHREAD *CurrentThread; // r10
  void *v10; // rbx
  struct _KTHREAD *v11; // r8

  v8 = sub_14077B33C(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = v8;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --*((_WORD *)v11 + 242);
  ExAcquirePushLockSharedEx(a3, 0LL);
  sub_1409491C0(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL);
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(a2, 0LL);
  KeLeaveCriticalRegion();
}

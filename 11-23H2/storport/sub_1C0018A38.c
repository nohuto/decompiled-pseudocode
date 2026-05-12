/*
 * XREFs of sub_1C0018A38 @ 0x1C0018A38
 * Callers:
 *     sub_1C0016EE0 @ 0x1C0016EE0 (sub_1C0016EE0.c)
 *     sub_1C001DDAC @ 0x1C001DDAC (sub_1C001DDAC.c)
 *     sub_1C0022E14 @ 0x1C0022E14 (sub_1C0022E14.c)
 *     sub_1C00ACDF4 @ 0x1C00ACDF4 (sub_1C00ACDF4.c)
 * Callees:
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     sub_1C0018AEC @ 0x1C0018AEC (sub_1C0018AEC.c)
 */

void __fastcall sub_1C0018A38(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  KIRQL v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v4 = *(_QWORD **)(a1 + 152);
  v5 = (_QWORD *)(a2 + 56);
  if ( *v4 != a1 + 144 )
    __fastfail(3u);
  *v5 = a1 + 144;
  *(_QWORD *)(a2 + 64) = v4;
  *v4 = v5;
  *(_QWORD *)(a1 + 152) = v5;
  ++*(_DWORD *)(a1 + 160);
  v6 = sub_1C000889C(a1);
  sub_1C0018AEC(a1 + 168, a2 + 72);
  sub_1C0008914(a1, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

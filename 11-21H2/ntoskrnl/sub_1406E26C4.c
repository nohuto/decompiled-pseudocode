/*
 * XREFs of sub_1406E26C4 @ 0x1406E26C4
 * Callers:
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 *     sub_1406E2624 @ 0x1406E2624 (sub_1406E2624.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

void __fastcall sub_1406E26C4(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  sub_140AB4550(v9);
  sub_14071B6EC();
  sub_14071BC94((ULONG_PTR)BugCheckParameter2);
  sub_140AB4260(v3, v2, v4, v5);
  sub_140AB4580(v9);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  v7 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v8 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v8 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
  if ( BugCheckParameter2[7] )
    sub_14067F788(BugCheckParameter2[7]);
}

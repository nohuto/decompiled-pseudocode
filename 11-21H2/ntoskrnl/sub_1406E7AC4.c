/*
 * XREFs of sub_1406E7AC4 @ 0x1406E7AC4
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_1406E2798 @ 0x1406E2798 (sub_1406E2798.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_1406E7AC4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  struct _KTHREAD *v9; // rax
  int v10; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v11[3]; // [rsp+28h] [rbp-40h] BYREF

  v10 = 0;
  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  v3 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v6 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    sub_1406E2798((__int64)v4, &v10);
    sub_140AB4550(v11);
    sub_14071BC94((ULONG_PTR)v4);
    sub_140AB4580(v11);
    if ( v4[7] )
      sub_14067F788(v4[7]);
    v7 = (void *)v4[9];
    if ( v7 )
      ObfDereferenceObject(v7);
    v8 = (void *)v4[10];
    if ( v8 )
      ZwClose(v8);
    ExFreePoolWithTag(v4, 0x72544D43u);
    v9 = KeGetCurrentThread();
    --*((_WORD *)v9 + 242);
    ExAcquireFastMutexUnsafe(&stru_140C49100);
  }
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
  return 0LL;
}

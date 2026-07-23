/*
 * XREFs of sub_140742300 @ 0x140742300
 * Callers:
 *     sub_14069FD64 @ 0x14069FD64 (sub_14069FD64.c)
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 *     sub_1409193DC @ 0x1409193DC (sub_1409193DC.c)
 *     sub_1409194E0 @ 0x1409194E0 (sub_1409194E0.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_140742A44 @ 0x140742A44 (sub_140742A44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

void __fastcall sub_140742300(__int64 a1, _QWORD *a2, int a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rcx
  void **v14; // rax
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _OWORD v26[3]; // [rsp+20h] [rbp-58h] BYREF

  memset(v26, 0, sizeof(v26));
  sub_140AB4550(v26);
  sub_14071B6EC();
  sub_14071BC94((ULONG_PTR)a2, a3);
  sub_140AB4260(v9, v8, v10, v11);
  sub_140AB4580(v26);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  v13 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v14 = (void **)a2[1], *v14 != a2) )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = v14;
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    sub_14067F788(a2[7]);
  v15 = (void *)a2[9];
  if ( v15 )
    ObDereferenceObjectDeferDelete(v15);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    sub_140AB4370(v17, v16, v18);
    v19 = KeGetCurrentThread();
    --*((_WORD *)v19 + 242);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    LOBYTE(v20) = 1;
    sub_140742A44(a1, v21, v20);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegion();
    sub_140AB4260(v23, v22, v24, v25);
  }
}

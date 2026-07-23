/*
 * XREFs of sub_140741B7C @ 0x140741B7C
 * Callers:
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14067F2D4 @ 0x14067F2D4 (sub_14067F2D4.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_14067F7A4 @ 0x14067F7A4 (sub_14067F7A4.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14074244C @ 0x14074244C (sub_14074244C.c)
 *     sub_1407428FC @ 0x1407428FC (sub_1407428FC.c)
 *     sub_140742980 @ 0x140742980 (sub_140742980.c)
 */

__int64 __fastcall sub_140741B7C(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ebp
  int v4; // esi
  void *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  v1 = 0LL;
  v3 = 64;
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(PVOID *)(a1 + 64) != RMKey )
    {
      v4 = sub_14067F2D4(RMKey, *(_QWORD *)(a1 + 56), 0LL, 1, (__int64)&v14);
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    v1 = *(_QWORD *)(a1 + 56);
    v4 = sub_14067F7A4(v1);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v4 = sub_140742980(*(_QWORD *)(a1 + 64));
    if ( v4 < 0 )
      goto LABEL_16;
    v4 = sub_1407428FC(
           a1 + 80,
           *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
           *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFFEuLL,
           a1);
    if ( v4 < 0 )
      goto LABEL_16;
    v12 = 0LL;
    v5 = *(void **)(a1 + 80);
    Object = 0LL;
    ObReferenceObjectByHandle(v5, 0, 0LL, 0, &Object, 0LL);
    LOBYTE(v6) = 1;
    v7 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 72) = Object;
    if ( (int)sub_14074244C(v7, v8, v6) >= 0 )
      v3 = 96;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  if ( (*(_DWORD *)(a1 + 48) & 6) == 0 )
  {
    *(_DWORD *)(a1 + 48) = v3;
    --dword_140C4E8B4;
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    _InterlockedOr(v11, 0);
    if ( qword_140C49138 )
      ExfUnblockPushLock(&qword_140C49138, 0LL);
    return 0;
  }
  v4 = -1072103422;
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
LABEL_16:
  if ( v1 )
    sub_14067F788(v1);
  return (unsigned int)v4;
}

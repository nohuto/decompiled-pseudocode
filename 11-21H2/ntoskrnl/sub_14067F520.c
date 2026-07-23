/*
 * XREFs of sub_14067F520 @ 0x14067F520
 * Callers:
 *     sub_14067F2D4 @ 0x14067F2D4 (sub_14067F2D4.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14067F714 @ 0x14067F714 (sub_14067F714.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_14067F7A4 @ 0x14067F7A4 (sub_14067F7A4.c)
 *     sub_14067F804 @ 0x14067F804 (sub_14067F804.c)
 *     sub_1406E4D24 @ 0x1406E4D24 (sub_1406E4D24.c)
 *     sub_140741B7C @ 0x140741B7C (sub_140741B7C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14067F520(__int64 a1, __int64 a2, __int64 a3, struct _EX_RUNDOWN_REF *a4, int a5, _QWORD *a6)
{
  _QWORD *v6; // rdi
  int v7; // r15d
  int v12; // esi
  int v13; // esi
  int v14; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v19; // rcx
  struct _KTHREAD *v20; // rax
  BOOLEAN v21; // al
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v12 = sub_14067F7A4();
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v13 = a5;
  v14 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireFastMutexUnsafe(&stru_140C49100);
      v16 = sub_14067F714(a3, a1, a2);
      if ( v16 )
        break;
      if ( !v13 )
        goto LABEL_20;
LABEL_8:
      if ( v6 )
      {
        if ( *(_QWORD *)(a3 + 80) )
        {
          v20 = KeGetCurrentThread();
          --*((_WORD *)v20 + 242);
          v21 = sub_140347810((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a3 + 80) + 1640LL));
          v7 = v21;
          if ( !v21 )
          {
            v12 = -1073741431;
            goto LABEL_36;
          }
        }
        v19 = *(_QWORD **)(a3 + 24);
        if ( *v19 == a3 + 16 )
        {
          v6[1] = v19;
          *v6 = a3 + 16;
          *v19 = v6;
          *(_QWORD *)(a3 + 24) = v6;
          ++dword_140C4E8B4;
          ExReleaseFastMutexUnsafe(&stru_140C49100);
          KeLeaveCriticalRegion();
          v14 = 0;
          v12 = sub_140741B7C(v6);
          if ( v12 >= 0 )
          {
            v17 = v6;
            goto LABEL_11;
          }
          v22 = KeGetCurrentThread();
          --*((_WORD *)v22 + 242);
          ExAcquireFastMutexUnsafe(&stru_140C49100);
          v23 = *v6;
          if ( *(_QWORD **)(*v6 + 8LL) == v6 )
          {
            v24 = (_QWORD *)v6[1];
            if ( (_QWORD *)*v24 == v6 )
            {
              *v24 = v23;
              *(_QWORD *)(v23 + 8) = v24;
              --dword_140C4E8B4;
              ExReleaseFastMutexUnsafe(&stru_140C49100);
              KeLeaveCriticalRegion();
              _InterlockedOr(v25, 0);
              if ( qword_140C49138 )
                ExfUnblockPushLock(&qword_140C49138, 0LL);
LABEL_36:
              ExFreePoolWithTag(v6, 0x72544D43u);
LABEL_12:
              if ( v7 )
              {
                sub_1402AD030(a4 + 205);
                KeLeaveCriticalRegion();
              }
              if ( v14 )
                goto LABEL_15;
              goto LABEL_16;
            }
          }
        }
        __fastfail(3u);
      }
      if ( v16 )
      {
        sub_14067F804(a4, v16);
LABEL_11:
        v12 = 0;
        *a6 = v17;
        goto LABEL_12;
      }
      ExReleaseFastMutexUnsafe(&stru_140C49100);
      KeLeaveCriticalRegion();
      v6 = (_QWORD *)sub_1406E4D24(a1, a2, a3, a4);
      if ( !v6 )
      {
        v12 = -1073741670;
        goto LABEL_16;
      }
    }
    if ( a1 && (*(_DWORD *)(v16 + 48) & 7) != 0 )
      break;
    if ( (*(_DWORD *)(v16 + 48) & 8) == 0 )
      goto LABEL_8;
    if ( !v13 )
      break;
    LODWORD(v26) = dword_140C4E8B4;
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    ExBlockOnAddressPushLock((__int64)&qword_140C49138, &dword_140C4E8B4, &v26, 4uLL, 0LL);
  }
LABEL_20:
  v12 = -1072103422;
  if ( v6 )
    goto LABEL_36;
LABEL_15:
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
LABEL_16:
  if ( a1 )
    sub_14067F788(a1);
  return (unsigned int)v12;
}

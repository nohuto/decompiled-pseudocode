/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x14021BF30
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     MiDeletePerSessionProtos @ 0x14033EE54 (MiDeletePerSessionProtos.c)
 *     MiDeleteEmptySubsections @ 0x140361C08 (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x1406A9D30 (MiBuildImageControlArea.c)
 *     MiSegmentDelete @ 0x1406B0984 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x1407069E4 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6140 (MiAllocatePerSessionProtos.c)
 *     MiDeletePageFileSectionNodes @ 0x1407CDD90 (MiDeletePageFileSectionNodes.c)
 *     MiAllocateFileExtents @ 0x140A33318 (MiAllocateFileExtents.c)
 * Callees:
 *     MiObtainProtoBaseFromNode @ 0x14021C05C (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateSystemProtoPtesTree(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 result; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0LL;
  v4 = MiObtainProtoBaseFromNode(a1, &v19);
  v5 = ExAcquireSpinLockExclusive(&dword_140C65738);
  if ( !a2 )
  {
    RtlAvlRemoveNode(&qword_140C65730, a1);
    *(_QWORD *)(a1 + 24) &= ~8uLL;
    goto LABEL_12;
  }
  v7 = (_QWORD *)qword_140C65730;
  LOBYTE(v6) = 0;
  if ( !qword_140C65730 )
    goto LABEL_11;
  while ( 1 )
  {
    v8 = v7[3] & 7LL;
    if ( v8 > 4 )
      break;
    if ( (_DWORD)v8 )
    {
      v12 = v8 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              break;
            v9 = v7[4];
          }
          else
          {
            v9 = v7[6];
          }
        }
        else
        {
          v9 = *(_QWORD *)(*(v7 - 7) + 136LL);
        }
      }
      else
      {
        v9 = *(v7 - 6);
      }
    }
    else
    {
      v9 = *(v7 - 14);
    }
    if ( v4 >= v9 )
      break;
    v10 = (_QWORD *)*v7;
    if ( !*v7 )
      goto LABEL_11;
LABEL_8:
    v7 = v10;
  }
  v10 = (_QWORD *)v7[1];
  if ( v10 )
    goto LABEL_8;
  LOBYTE(v6) = 1;
LABEL_11:
  RtlAvlInsertNodeEx(&qword_140C65730, v7, v6, a1);
  *(_QWORD *)(a1 + 24) |= 8uLL;
LABEL_12:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65738);
  result = (unsigned int)KiIrqlFlags;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v18 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}

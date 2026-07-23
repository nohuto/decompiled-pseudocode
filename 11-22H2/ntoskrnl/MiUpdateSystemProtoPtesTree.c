/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x14021BF50
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140218F10 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14021BAA0 (MiCreatePrototypePtes.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 *     MiDeleteEmptySubsections @ 0x140361418 (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x1406A9D30 (MiBuildImageControlArea.c)
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x140706884 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 *     MiDeletePageFileSectionNodes @ 0x1407CE050 (MiDeletePageFileSectionNodes.c)
 *     MiAllocateFileExtents @ 0x140A330D8 (MiAllocateFileExtents.c)
 * Callees:
 *     MiObtainProtoBaseFromNode @ 0x14021C07C (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = ExAcquireSpinLockExclusive(&dword_140C65838);
  if ( !a2 )
  {
    RtlAvlRemoveNode(&qword_140C65830, a1);
    *(_QWORD *)(a1 + 24) &= ~8uLL;
    goto LABEL_12;
  }
  v7 = (_QWORD *)qword_140C65830;
  LOBYTE(v6) = 0;
  if ( !qword_140C65830 )
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
  RtlAvlInsertNodeEx(&qword_140C65830, v7, v6, a1);
  *(_QWORD *)(a1 + 24) |= 8uLL;
LABEL_12:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65838);
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

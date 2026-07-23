/*
 * XREFs of MiReplaceSystemProtoPtesNode @ 0x140669DB8
 * Callers:
 *     MiAllocateFileExtents @ 0x140A330D8 (MiAllocateFileExtents.c)
 * Callees:
 *     MiObtainProtoBaseFromNode @ 0x14021C07C (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReplaceSystemProtoPtesNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  bool v6; // r8
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0LL;
  v4 = MiObtainProtoBaseFromNode(a1, &v19);
  v5 = ExAcquireSpinLockExclusive(&dword_140C65838);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140C65830, a1);
  a1[3] &= ~8uLL;
  v6 = 0;
  v7 = (_QWORD *)qword_140C65830;
  if ( qword_140C65830 )
  {
    while ( 1 )
    {
      v8 = v7[3] & 7LL;
      if ( v8 <= 4 )
      {
        if ( !(_DWORD)v8 )
        {
          v12 = *(v7 - 14);
          goto LABEL_14;
        }
        v9 = v8 - 1;
        if ( !v9 )
        {
          v12 = *(v7 - 6);
          goto LABEL_14;
        }
        v10 = v9 - 1;
        if ( !v10 )
        {
          v12 = *(_QWORD *)(*(v7 - 7) + 136LL);
          goto LABEL_14;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
          v12 = v7[6];
          goto LABEL_14;
        }
        if ( v11 == 1 )
        {
          v12 = v7[4];
          goto LABEL_14;
        }
      }
      v12 = 0LL;
LABEL_14:
      if ( v4 >= v12 )
      {
        v13 = (_QWORD *)v7[1];
        if ( !v13 )
        {
          v6 = 1;
          break;
        }
      }
      else
      {
        v13 = (_QWORD *)*v7;
        if ( !*v7 )
          break;
      }
      v7 = v13;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C65830, (unsigned __int64)v7, v6, a2);
  *(_QWORD *)(a2 + 24) |= 8uLL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65838);
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
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
}

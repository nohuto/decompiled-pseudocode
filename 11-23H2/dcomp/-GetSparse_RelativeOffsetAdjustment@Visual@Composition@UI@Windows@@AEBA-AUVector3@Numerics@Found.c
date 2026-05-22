/*
 * XREFs of ?GetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEBA?AUVector3@Numerics@Foundation@4@XZ @ 0x1800B5C20
 * Callers:
 *     ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970 (-SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnima.c)
 *     ?get_RelativeOffsetAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x18010CF60 (-get_RelativeOffsetAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Found.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::GetSparse_RelativeOffsetAdjustment(__int64 a1, __int64 a2)
{
  CSparseStorage::AllocatedStorage *v2; // rcx
  __int64 v3; // r10
  struct CSparseStorage::DataInfo *Slot; // rax
  __int64 v5; // xmm0_8

  v2 = *(CSparseStorage::AllocatedStorage **)(a1 + 112);
  v3 = a2;
  if ( (*((_DWORD *)v2 + 1) & 0x400000) != 0 )
  {
    Slot = CSparseStorage::AllocatedStorage::FindSlot(v2, 10);
    v5 = *(_QWORD *)((char *)Slot + 4);
    LODWORD(Slot) = *((_DWORD *)Slot + 3);
    *(_QWORD *)v3 = v5;
    *(_DWORD *)(v3 + 8) = (_DWORD)Slot;
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return v3;
}

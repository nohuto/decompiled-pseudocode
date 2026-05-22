/*
 * XREFs of ?GetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEBA?AUVector2@Numerics@Foundation@4@XZ @ 0x180088FA0
 * Callers:
 *     ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970 (-SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnima.c)
 *     ?get_RelativeSizeAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18010D000 (-get_RelativeSizeAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundat.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

_QWORD *__fastcall Windows::UI::Composition::Visual::GetSparse_RelativeSizeAdjustment(__int64 a1, _QWORD *a2)
{
  CSparseStorage::AllocatedStorage *v2; // rcx
  _QWORD *v3; // r10
  struct CSparseStorage::DataInfo *Slot; // rax

  v2 = *(CSparseStorage::AllocatedStorage **)(a1 + 112);
  v3 = a2;
  if ( (*((_DWORD *)v2 + 1) & 0x800000) != 0 )
  {
    Slot = CSparseStorage::AllocatedStorage::FindSlot(v2, 9);
    *v3 = *(_QWORD *)((char *)Slot + 4);
  }
  else
  {
    *a2 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  return v3;
}

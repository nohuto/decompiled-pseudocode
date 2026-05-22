/*
 * XREFs of ?GetSparse_Opacity@Visual@Composition@UI@Windows@@AEBAMXZ @ 0x1800520B0
 * Callers:
 *     ?get_Opacity@Api@Visual@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18008A850 (-get_Opacity@Api@Visual@Composition@UI@Windows@@UEAAJPEAM@Z.c)
 *     ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970 (-SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnima.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

float __fastcall Windows::UI::Composition::Visual::GetSparse_Opacity(Windows::UI::Composition::Visual *this)
{
  CSparseStorage::AllocatedStorage *v1; // rcx

  v1 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 14);
  if ( (*((_DWORD *)v1 + 1) & 0x8000000) != 0 )
    return *((float *)CSparseStorage::AllocatedStorage::FindSlot(v1, 5) + 1);
  else
    return FLOAT_1_0;
}

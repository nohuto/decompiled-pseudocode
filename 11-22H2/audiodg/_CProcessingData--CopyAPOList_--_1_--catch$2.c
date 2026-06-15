/*
 * XREFs of _CProcessingData::CopyAPOList_::_1_::catch$2 @ 0x14003578B
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x140022050 (--_ECAPONode@@UEAAPEAXI@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn CProcessingData::CopyAPOList_::_1_::catch_2(__int64 a1, __int64 a2)
{
  CAPONode::`vector deleting destructor'(*(CAPONode **)(a2 + 80), 1);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 36);
  throw (ATL::CAtlException *)(a2 + 32);
}

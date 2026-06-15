/*
 * XREFs of _CProcessingData::CopyAPOList_::_1_::catch$39 @ 0x140037EF0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x1400689F0 (--_ECAPONode@@UEAAPEAXI@Z.c)
 */

void __fastcall __noreturn CProcessingData::CopyAPOList_::_1_::catch_39(__int64 a1, __int64 a2)
{
  CAPONode::`vector deleting destructor'(*(CAPONode **)(a2 + 184), 1u);
  *(_DWORD *)(a2 + 96) = *(_DWORD *)(a2 + 100);
  throw (ATL::CAtlException *)(a2 + 96);
}

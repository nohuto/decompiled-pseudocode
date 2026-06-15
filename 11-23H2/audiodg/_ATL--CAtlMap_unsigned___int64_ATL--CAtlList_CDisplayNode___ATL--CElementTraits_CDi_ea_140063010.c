/*
 * XREFs of _ATL::CAtlMap_unsigned___int64_ATL::CAtlList_CDisplayNode___ATL::CElementTraits_CDisplayNode______ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_ATL::CAtlList_CDisplayNode___ATL::CElementTraits_CDisplayNode_________::NewNode_::_1_::catch$0 @ 0x140063010
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned___int64_ATL::CAtlList_CDisplayNode___ATL::CElementTraits_CDisplayNode______ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_ATL::CAtlList_CDisplayNode___ATL::CElementTraits_CDisplayNode_________::NewNode_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}

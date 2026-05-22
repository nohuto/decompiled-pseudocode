/*
 * XREFs of _std::vector_BamoInputSpacePayloadPrincipal___std::allocator_BamoInputSpacePayloadPrincipal_____::_Reallocate_exactly_::_1_::catch$7 @ 0x18015FB08
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_BamoInputSpacePayloadPrincipal___std::allocator_BamoInputSpacePayloadPrincipal_____::_Reallocate_exactly_::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), 8LL * *(_QWORD *)(a2 + 72));
  throw;
}

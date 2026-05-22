/*
 * XREFs of _std::vector_PointData3D_std::allocator_PointData3D___::_Emplace_reallocate_PointData3D_const_&__::_1_::catch$1 @ 0x18009C9CF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_PointData3D_std::allocator_PointData3D___::_Emplace_reallocate_PointData3D_const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 184LL * *(_QWORD *)(a2 + 80));
  throw;
}

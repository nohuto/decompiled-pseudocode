/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800A88B8
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800E7FB4 (--$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA-AV-$shared_ptr@VSyst.c)
 *     ??1?$weak_ptr@VSystemCursorService2@@@std@@QEAA@XZ @ 0x1800E8244 (--1-$weak_ptr@VSystemCursorService2@@@std@@QEAA@XZ.c)
 *     ??1CustomCursorApplication2@@QEAA@XZ @ 0x1800E8264 (--1CustomCursorApplication2@@QEAA@XZ.c)
 *     ??1SystemCursor2@@QEAA@XZ @ 0x1800EB714 (--1SystemCursor2@@QEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800EB7D4 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800EC658 (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VSystemCursorShape2@@@std@@EEAAXXZ @ 0x1800EE090 (-_Destroy@-$_Ref_count_obj2@VSystemCursorShape2@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@EEAAXXZ @ 0x1800EE0F0 (-_Destroy@-$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@EEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}

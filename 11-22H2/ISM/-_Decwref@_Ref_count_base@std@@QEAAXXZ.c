/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800D0BC8
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013EC0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x1800728C0 (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 *     ??1?$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ @ 0x1800729F8 (--1-$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ.c)
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x180074218 (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 *     ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x18010F940 (--$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA-AV-$shared_ptr@VSyst.c)
 *     ??1CustomCursorApplication2@@QEAA@XZ @ 0x18010FA84 (--1CustomCursorApplication2@@QEAA@XZ.c)
 *     ??1SystemCursor2@@QEAA@XZ @ 0x180112EA0 (--1SystemCursor2@@QEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x180112F60 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x180113E14 (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VSystemCursorShape2@@@std@@EEAAXXZ @ 0x1801158C0 (-_Destroy@-$_Ref_count_obj2@VSystemCursorShape2@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@EEAAXXZ @ 0x180115920 (-_Destroy@-$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@EEAAXXZ.c)
 *     ??1Context@ShellGesturesProcessor@@UEAA@XZ @ 0x18017CD54 (--1Context@ShellGesturesProcessor@@UEAA@XZ.c)
 *     ??4?$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017CF34 (--4-$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x18017DD84 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?reset@?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ @ 0x18017E338 (-reset@-$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}

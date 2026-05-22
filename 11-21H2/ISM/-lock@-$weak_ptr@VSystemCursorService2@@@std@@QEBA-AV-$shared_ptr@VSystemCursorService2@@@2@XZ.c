/*
 * XREFs of ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800EE2FC
 * Callers:
 *     ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x1800EBD3C (-AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ.c)
 *     ?Cleanup@CustomCursorApplication2@@QEAAXXZ @ 0x1800EBFF8 (-Cleanup@CustomCursorApplication2@@QEAAXXZ.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800EC4F0 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800EDAD0 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 *     ?SetOrientationAngle@SystemCursor2@@QEAAJM@Z @ 0x1800EDB7C (-SetOrientationAngle@SystemCursor2@@QEAAJM@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800EDC6C (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 *     ?SetShellMagnification@SystemCursor2@@QEAAJM@Z @ 0x1800EDEE8 (-SetShellMagnification@SystemCursor2@@QEAAJM@Z.c)
 * Callees:
 *     ??$_Construct_from_weak@VSystemCursorService2@@@?$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService2@@@1@@Z @ 0x1800EAAA8 (--$_Construct_from_weak@VSystemCursorService2@@@-$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NA.c)
 */

__int64 __fastcall std::weak_ptr<SystemCursorService2>::lock(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  std::_Ptr_base<SystemCursorService2>::_Construct_from_weak<SystemCursorService2>(a2, a1);
  return v2;
}

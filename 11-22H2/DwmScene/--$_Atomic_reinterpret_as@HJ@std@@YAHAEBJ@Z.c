/*
 * XREFs of ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094
 * Callers:
 *     ??1ScopeSpinLock@Engine@Spectre@@QEAA@XZ @ 0x1800400A0 (--1ScopeSpinLock@Engine@Spectre@@QEAA@XZ.c)
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 *     ?InsertNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x1800414F0 (-InsertNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0 (-Render@Scene@Engine@Spectre@@QEBAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 *     ?Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18004226C (-Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z.c)
 *     ?UpdateAllLayerBoundingBoxes@Scene@Engine@Spectre@@AEAAXXZ @ 0x1800424E8 (-UpdateAllLayerBoundingBoxes@Scene@Engine@Spectre@@AEAAXXZ.c)
 *     ?GetCurrAndPreviousFrameData@Input@Engine@Spectre@@QEBAXAEAUPointerEvent@23@0@Z @ 0x180074538 (-GetCurrAndPreviousFrameData@Input@Engine@Spectre@@QEBAXAEAUPointerEvent@23@0@Z.c)
 *     ?GetFrameInputData@Input@Engine@Spectre@@QEBAAEBUFrameInputData@23@XZ @ 0x1800745B4 (-GetFrameInputData@Input@Engine@Spectre@@QEBAAEBUFrameInputData@23@XZ.c)
 *     ?GetKeyboardKeyCode@Input@Engine@Spectre@@QEBA?AW4EKeyboard@23@XZ @ 0x180074614 (-GetKeyboardKeyCode@Input@Engine@Spectre@@QEBA-AW4EKeyboard@23@XZ.c)
 *     ?IsKeyboardButtonPressed@Input@Engine@Spectre@@QEBA_NXZ @ 0x180074680 (-IsKeyboardButtonPressed@Input@Engine@Spectre@@QEBA_NXZ.c)
 *     ?Update@Input@Engine@Spectre@@QEAAXXZ @ 0x1800747A8 (-Update@Input@Engine@Spectre@@QEAAXXZ.c)
 *     ?UpdateMouseEvent@Input@Engine@Spectre@@QEAAXAEBUPointerEvent@23@@Z @ 0x180074844 (-UpdateMouseEvent@Input@Engine@Spectre@@QEAAXAEBUPointerEvent@23@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_reinterpret_as<int,long>(unsigned int *a1)
{
  return *a1;
}

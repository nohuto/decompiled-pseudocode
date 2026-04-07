/*
 * XREFs of ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180052140
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180025B78 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002BB90 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A82B8 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPopInstruction::Create(struct CPopInstruction **a1)
{
  unsigned int v2; // ebx
  struct CPopInstruction *v3; // rax

  v2 = 0;
  v3 = (struct CPopInstruction *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                                   WPF::g_pProcessHeap,
                                   16LL);
  if ( v3 )
  {
    *((_DWORD *)v3 + 2) = 1;
    *(_QWORD *)v3 = &CPopInstruction::`vftable';
    *a1 = v3;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v2;
}

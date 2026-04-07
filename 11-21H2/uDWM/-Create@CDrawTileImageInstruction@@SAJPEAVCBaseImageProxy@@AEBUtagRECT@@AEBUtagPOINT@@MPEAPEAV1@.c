/*
 * XREFs of ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180018390
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017AAC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009F984 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z @ 0x1800184FC (-Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Create(
        struct CBaseImageProxy *a1,
        const struct tagRECT *a2,
        const struct tagPOINT *a3,
        float a4,
        struct CDrawTileImageInstruction **a5)
{
  CBaseObject *v8; // rax
  CBaseObject *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  v8 = (CBaseObject *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        56LL);
  v9 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 1;
    *(_QWORD *)v8 = &CDrawTileImageInstruction::`vftable';
    v10 = CDrawTileImageInstruction::Initialize(v8, a1, a2, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x33u);
      CBaseObject::Release(v9);
    }
    else
    {
      *a5 = v9;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x31u);
  }
  return v11;
}

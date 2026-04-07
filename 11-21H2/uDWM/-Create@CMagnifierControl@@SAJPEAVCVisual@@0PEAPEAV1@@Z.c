/*
 * XREFs of ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18004E278
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x18004E0AC (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18004E364 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18004E4CC (--0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierControl::Create(struct CVisual *a1, struct CVisual *a2, struct CMagnifierControl **a3)
{
  CMagnifierControl *v6; // rax
  CMagnifierControl *v7; // rax
  CMagnifierControl *v8; // rbx
  int v9; // eax
  int v10; // esi
  int inserted; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v15; // r9d
  unsigned int v16; // eax

  v6 = (CMagnifierControl *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              192LL);
  if ( !v6 || (v7 = CMagnifierControl::CMagnifierControl(v6, a1, a2), (v8 = v7) == 0LL) )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x58u);
    return v12;
  }
  v9 = CVisual::Create((struct CVisual **)v7 + 4);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = v9;
    v15 = v9;
    v16 = 120;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x5Au);
    goto LABEL_7;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)v8 + 4) + 32LL),
               *((struct CVisual **)v8 + 5),
               0LL,
               0,
               1);
  v10 = inserted;
  v12 = inserted;
  if ( inserted < 0 )
  {
    v15 = inserted;
    v16 = 122;
    goto LABEL_12;
  }
  v13 = CFullScreenMagnifier::Create(*((struct CVisual **)v8 + 3), (struct CFullScreenMagnifier **)v8 + 6);
  v10 = v13;
  v12 = v13;
  if ( v13 < 0 )
  {
    v15 = v13;
    v16 = 130;
    goto LABEL_12;
  }
  *a3 = v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
LABEL_7:
  CBaseObject::Release(v8);
  return v12;
}

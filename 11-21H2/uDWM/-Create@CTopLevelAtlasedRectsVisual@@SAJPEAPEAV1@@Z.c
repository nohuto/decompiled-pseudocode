/*
 * XREFs of ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x18000E618
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024870 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800984AC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18002459C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::Create(struct CTopLevelAtlasedRectsVisual **a1)
{
  CAtlasedRectsVisual *v2; // rax
  struct CTopLevelAtlasedRectsVisual *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x20u);
    return (unsigned int)v4;
  }
  v2 = (CAtlasedRectsVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                288LL);
  v3 = v2;
  if ( v2 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v2);
    *(_QWORD *)v3 = &CTopLevelAtlasedRectsVisual::`vftable';
    v4 = ((__int64 (__fastcall *)(struct CTopLevelAtlasedRectsVisual *))*(&CTopLevelAtlasedRectsVisual::`vftable' + 1))(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x20u);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}

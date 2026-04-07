/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18001DBE4
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180024008 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18002DB10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, const struct _MARGINS *a2)
{
  unsigned int v2; // esi
  struct _MARGINS *v5; // rcx
  __int64 v7; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (struct _MARGINS *)*((_QWORD *)this + 35);
    if ( v5 )
    {
      if ( a2->cxLeftWidth == v5->cxLeftWidth
        && a2->cxRightWidth == v5->cxRightWidth
        && a2->cyTopHeight == v5->cyTopHeight
        && a2->cyBottomHeight == v5->cyBottomHeight )
      {
        return v2;
      }
    }
    else
    {
      v5 = (struct _MARGINS *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                WPF::g_pProcessHeap,
                                16LL);
      *((_QWORD *)this + 35) = v5;
      if ( !v5 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xF5u);
        return v2;
      }
    }
    *v5 = *a2;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
    return v2;
  }
  if ( *((_QWORD *)this + 35) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v7 = *(_QWORD *)this;
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(v7 + 24))(this, 0x2000LL);
  }
  return v2;
}

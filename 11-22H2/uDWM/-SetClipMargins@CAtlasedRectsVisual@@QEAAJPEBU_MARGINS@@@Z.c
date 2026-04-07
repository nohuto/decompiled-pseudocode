/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180012DCC
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000AF40 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180029B70 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, const struct _MARGINS *a2)
{
  unsigned int v3; // esi
  struct _MARGINS *v4; // rdx
  __int64 v7; // rax

  v3 = 0;
  v4 = (struct _MARGINS *)*((_QWORD *)this + 35);
  if ( a2 )
  {
    if ( v4 )
    {
      if ( a2->cxLeftWidth == v4->cxLeftWidth
        && a2->cxRightWidth == v4->cxRightWidth
        && a2->cyTopHeight == v4->cyTopHeight
        && a2->cyBottomHeight == v4->cyBottomHeight )
      {
        return v3;
      }
    }
    else
    {
      v4 = (struct _MARGINS *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                WPF::g_pProcessHeap,
                                16LL);
      *((_QWORD *)this + 35) = v4;
      if ( !v4 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xF4u, 0LL);
        return v3;
      }
    }
    *v4 = *a2;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
    return v3;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v7 = *(_QWORD *)this;
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(v7 + 24))(this, 0x2000LL);
  }
  return v3;
}

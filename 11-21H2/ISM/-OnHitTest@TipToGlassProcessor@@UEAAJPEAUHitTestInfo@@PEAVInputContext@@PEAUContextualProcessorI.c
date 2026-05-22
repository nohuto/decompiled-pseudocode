/*
 * XREFs of ?OnHitTest@TipToGlassProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000C080
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ @ 0x1801BC54C (-IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ.c)
 *     ?NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z @ 0x1801BC604 (-NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z.c)
 */

__int64 __fastcall TipToGlassProcessor::OnHitTest(
        TipToGlassProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 0x10) != 0
    && (*((_DWORD *)a2 + 8) & 0x10000) != 0
    && PenEventsTipToGlassAdapter::IsTipToGlassRequired()
    && !*((_BYTE *)this + 24) )
  {
    *(_DWORD *)a4 = 2;
    PenEventsTipToGlassAdapter::NotifyTipToGlass(*((_DWORD *)a2 + 1));
    *((_BYTE *)this + 24) = 1;
  }
  return 0LL;
}

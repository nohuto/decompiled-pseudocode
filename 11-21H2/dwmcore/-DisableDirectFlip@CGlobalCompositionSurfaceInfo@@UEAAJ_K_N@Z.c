/*
 * XREFs of ?DisableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x180248580
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18024852C (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableDirectFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        char a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a2 == *((_QWORD *)this + 14) && *((_BYTE *)this + 282) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(
      (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
      a3);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003292412, 0x156u);
  }
  return v3;
}

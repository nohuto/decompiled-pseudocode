/*
 * XREFs of ?DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x18025A870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025A728 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableIndependentFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( a2 == *((_QWORD *)this + 16) && *((_BYTE *)this + 296) )
  {
    v2 = CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip((CGlobalCompositionSurfaceInfo *)((char *)this + 104));
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x206u, 0LL);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x20Au, 0LL);
  }
  return v4;
}

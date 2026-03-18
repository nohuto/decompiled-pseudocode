/*
 * XREFs of ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NU_LUID@@I@Z @ 0x180248648
 * Callers:
 *     ?EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_NU_LUID@@I@Z @ 0x180248740 (-EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_NU_LUID@@I@Z.c)
 * Callees:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180005234 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableDirectFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int8 a2,
        struct _LUID a3,
        int a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx

  v7 = NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 1LL, a2);
  if ( v7 >= 0 )
  {
    v10 = CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(this);
    v9 = v10;
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 194) = 1;
      *((struct _LUID *)this + 25) = a3;
      *((_DWORD *)this + 52) = a4;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x33Bu);
      NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 0LL, 0LL);
    }
  }
  else
  {
    v9 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7 | 0x10000000, 0x339u);
  }
  return v9;
}

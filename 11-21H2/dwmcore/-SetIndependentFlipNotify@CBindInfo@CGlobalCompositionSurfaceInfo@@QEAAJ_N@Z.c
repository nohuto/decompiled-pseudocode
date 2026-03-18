/*
 * XREFs of ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180017C98
 * Callers:
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z @ 0x18008FD20 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@@Z.c)
 *     ?SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x180249210 (-SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18006604C (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x18024956C (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int8 a2)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v10; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 != *((_BYTE *)this + 189) )
  {
    v5 = *((_DWORD *)this + 52);
    v10 = 0;
    v6 = NtSetCompositionSurfaceIndependentFlipInfo(
           *(_QWORD *)(*(_QWORD *)this + 32LL),
           (char *)this + 24,
           1LL,
           a2,
           *((_DWORD *)this + 54),
           1 << v5,
           (char *)this + 212,
           &v10);
    if ( v6 < 0 )
    {
      v3 = v6 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6 | 0x10000000, 0x3C6u, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0xxqqqqq_EventWriteTransfer(
          *((_DWORD *)this + 53),
          v7,
          *(_DWORD *)(*(_QWORD *)this + 40LL),
          *((_QWORD *)this + 3),
          *((_DWORD *)this + 53),
          1,
          a2,
          *((_DWORD *)this + 54),
          v10);
      *((_BYTE *)this + 189) = a2;
      if ( a2 )
        CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
    }
  }
  return v3;
}

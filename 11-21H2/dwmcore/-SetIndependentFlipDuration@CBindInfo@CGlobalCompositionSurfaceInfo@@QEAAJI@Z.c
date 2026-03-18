/*
 * XREFs of ?SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x180249070
 * Callers:
 *     ?SetIndependentFlipDuration@CGlobalCompositionSurfaceInfo@@UEAAJ_KI@Z @ 0x1802491A0 (-SetIndependentFlipDuration@CGlobalCompositionSurfaceInfo@@UEAAJ_KI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x18024956C (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipDuration(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        int a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  bool v7; // zf
  int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  if ( a2 != *((_DWORD *)this + 54) )
  {
    v5 = 1 << *((_DWORD *)this + 52);
    v6 = *(_QWORD *)this;
    v7 = *((_BYTE *)this + 189) == 0;
    v12 = 0;
    v8 = NtSetCompositionSurfaceIndependentFlipInfo(
           *(_QWORD *)(v6 + 32),
           (char *)this + 24,
           1LL,
           !v7,
           a2,
           v5,
           (char *)this + 212,
           &v12);
    if ( v8 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0xxqqqqq_EventWriteTransfer(
          *((_DWORD *)this + 53),
          v9,
          *(_DWORD *)(*(_QWORD *)this + 40LL),
          *((_QWORD *)this + 3),
          *((_DWORD *)this + 53),
          1,
          *((_BYTE *)this + 189) != 0,
          a2,
          v12);
      *((_DWORD *)this + 54) = a2;
    }
    else
    {
      v4 = v8 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v8 | 0x10000000, 0x3F4u);
    }
  }
  return v4;
}

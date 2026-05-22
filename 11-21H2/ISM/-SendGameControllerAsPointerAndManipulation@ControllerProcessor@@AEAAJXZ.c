/*
 * XREFs of ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x1801782DC
 * Callers:
 *     ?OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x180177D10 (-OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180175E7C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x1801761C8 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180176254 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x18017636C (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x1801767B4 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180176938 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180176AC8 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180176C18 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     SignedNormalize @ 0x1801791C8 (SignedNormalize.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x180179CA0 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGameControllerAsPointerAndManipulation(ControllerProcessor *this)
{
  float v2; // xmm8_4
  double v3; // xmm6_8
  float v4; // xmm8_4
  double v5; // xmm0_8
  float v6; // xmm9_4
  double v7; // xmm0_8
  float v8; // xmm10_4
  double v9; // xmm0_8
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax

  ControllerProcessor::UpdateBoundsIfNeeded(this);
  v2 = 0.0 - ((float (*)(void))SignedNormalize)();
  v3 = 0.0;
  v4 = v2 + ((float (*)(void))SignedNormalize)();
  v5 = ((double (*)(void))SignedNormalize)();
  v6 = *(float *)&v5;
  v7 = ((double (*)(void))SignedNormalize)();
  v8 = *(float *)&v7;
  v9 = 0.0;
  if ( *((_BYTE *)this + 276) )
  {
    v10 = *((_DWORD *)this + 52);
    if ( (v10 & 0x10) != 0 )
      *(_QWORD *)&v9 = *((unsigned int *)this + 1948);
    if ( (v10 & 0x20) != 0 )
    {
      *(_QWORD *)&v9 = *((unsigned int *)this + 1948);
      *(float *)&v9 = *(float *)&v9 * -1.0;
    }
    if ( (v10 & 0x40) != 0 )
    {
      *(_QWORD *)&v3 = *((unsigned int *)this + 1948);
      *(float *)&v3 = *(float *)&v3 * -1.0;
    }
    if ( (v10 & 0x80u) != 0 )
      *(_QWORD *)&v3 = *((unsigned int *)this + 1948);
  }
  else
  {
    v3 = ((double (*)(void))SignedNormalize)();
    *(_QWORD *)&v9 = *((unsigned int *)this + 49);
    SignedNormalize();
  }
  v11 = *((_DWORD *)this + 82);
  if ( (v11 & 1) != 0 )
  {
    ControllerProcessor::CalculateNavigationDelta(this, v3, v9);
    v11 = *((_DWORD *)this + 82);
  }
  if ( *((_BYTE *)this + 1265) )
  {
    LOBYTE(v12) = v11;
    if ( (v11 & 8) != 0 )
    {
      ControllerProcessor::CalculateMarginPanDelta(this);
      v12 = *((_DWORD *)this + 82);
      LOBYTE(v11) = v12;
    }
    if ( (v12 & 0x84) != 0 )
    {
      ControllerProcessor::CalculatePanDelta(this, v6, v8);
      v11 = *((_DWORD *)this + 82);
      LOBYTE(v12) = v11;
    }
    if ( (v12 & 2) != 0 )
    {
      ControllerProcessor::CalculateZoomDelta(this, v4);
      v11 = *((_DWORD *)this + 82);
    }
  }
  if ( (v11 & 1) != 0 )
  {
    ControllerProcessor::ApplyNavigationDelta(this);
    v11 = *((_DWORD *)this + 82);
  }
  if ( (v11 & 0x80u) != 0 )
    ControllerProcessor::ApplyPanDeltaToScroll(this);
  if ( *((_BYTE *)this + 1265) )
  {
    v13 = *((_DWORD *)this + 82);
    if ( (v13 & 0xC) != 0 )
    {
      ControllerProcessor::ApplyPanDelta(this);
      v13 = *((_DWORD *)this + 82);
    }
    if ( (v13 & 2) != 0 )
      ControllerProcessor::ApplyZoomDelta(this);
  }
  return 0LL;
}

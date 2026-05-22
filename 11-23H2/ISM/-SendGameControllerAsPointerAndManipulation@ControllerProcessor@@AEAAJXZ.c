/*
 * XREFs of ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x180197710
 * Callers:
 *     ?OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x180197140 (-OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1801951EC (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x180195538 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x1801955C4 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1801956DC (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x180195B24 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180195CA8 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180195E38 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180195F88 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     SignedNormalize @ 0x1801985E4 (SignedNormalize.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x1801990C0 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
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
  int v10; // ecx
  unsigned int *v11; // rax

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
    v11 = (unsigned int *)((char *)this + 7792);
    if ( (v10 & 0x10) != 0 )
      *(_QWORD *)&v9 = *v11;
    if ( (v10 & 0x20) != 0 )
    {
      *(_QWORD *)&v9 = *v11;
      *(float *)&v9 = *(float *)&v9 * -1.0;
    }
    if ( (v10 & 0x40) != 0 )
    {
      *(_QWORD *)&v3 = *v11;
      *(float *)&v3 = *(float *)&v3 * -1.0;
    }
    if ( (v10 & 0x80u) != 0 )
      *(_QWORD *)&v3 = *v11;
  }
  else
  {
    v3 = ((double (*)(void))SignedNormalize)();
    *(_QWORD *)&v9 = *((unsigned int *)this + 49);
    SignedNormalize();
  }
  if ( (*((_BYTE *)this + 328) & 1) != 0 )
    ControllerProcessor::CalculateNavigationDelta(this, v3, v9);
  if ( *((_BYTE *)this + 1265) )
  {
    if ( (*((_BYTE *)this + 328) & 8) != 0 )
      ControllerProcessor::CalculateMarginPanDelta(this);
    if ( (*((_BYTE *)this + 328) & 0x84) != 0 )
      ControllerProcessor::CalculatePanDelta(this, v6, v8);
    if ( (*((_BYTE *)this + 328) & 2) != 0 )
      ControllerProcessor::CalculateZoomDelta(this, v4);
  }
  if ( (*((_BYTE *)this + 328) & 1) != 0 )
    ControllerProcessor::ApplyNavigationDelta(this);
  if ( *((char *)this + 328) < 0 )
    ControllerProcessor::ApplyPanDeltaToScroll(this);
  if ( *((_BYTE *)this + 1265) )
  {
    if ( (*((_BYTE *)this + 328) & 0xC) != 0 )
      ControllerProcessor::ApplyPanDelta(this);
    if ( (*((_BYTE *)this + 328) & 2) != 0 )
      ControllerProcessor::ApplyZoomDelta(this);
  }
  return 0LL;
}

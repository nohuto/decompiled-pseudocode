/*
 * XREFs of ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180176C18
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x1801782DC (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     powf @ 0x18004A8A0 (powf.c)
 */

__int64 __fastcall ControllerProcessor::CalculateZoomDelta(ControllerProcessor *this, float a2)
{
  float v3; // xmm6_4
  float v4; // xmm0_4
  float v5; // xmm6_4
  float v6; // xmm1_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) > 0.00000011920929 )
  {
    v3 = a2 * powf(COERCE_FLOAT(LODWORD(a2) & _xmm), 3.5999999);
    v4 = (float)(int)(GetTickCount() - *((_DWORD *)this + 110));
    if ( v4 < 2500.0 )
      v3 = v3 * (float)((float)(powf(v4 / 2500.0, 0.80000001) * 0.94999999) + 0.050000001);
    v5 = v3 * 0.050000001;
    if ( v5 >= 0.0 )
      v6 = v5 + 1.0;
    else
      v6 = 1.0 / (float)(1.0 - v5);
    *((float *)this + 109) = v6 + *((float *)this + 109);
  }
  else
  {
    *((_DWORD *)this + 110) = GetTickCount();
  }
  return 0LL;
}

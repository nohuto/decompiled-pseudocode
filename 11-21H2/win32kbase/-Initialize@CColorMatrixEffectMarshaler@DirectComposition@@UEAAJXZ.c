/*
 * XREFs of ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C02168F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::Initialize(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)((char *)this + 120) = _xmm;
    *(_OWORD *)((char *)this + 136) = _xmm;
    *(_OWORD *)((char *)this + 152) = _xmm;
    *(_OWORD *)((char *)this + 168) = _xmm;
    *(_OWORD *)((char *)this + 184) = 0LL;
  }
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 50) = 1;
  return result;
}

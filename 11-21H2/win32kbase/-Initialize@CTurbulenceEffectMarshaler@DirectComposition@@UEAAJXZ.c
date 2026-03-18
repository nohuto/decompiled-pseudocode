/*
 * XREFs of ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0217350
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::Initialize(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 32) = 1008981770;
    result = 0LL;
    *(_QWORD *)((char *)this + 132) = 1008981770LL;
    *((_DWORD *)this + 35) = 0;
  }
  *((_QWORD *)this + 18) = 1LL;
  *((_QWORD *)this + 19) = 0LL;
  return result;
}

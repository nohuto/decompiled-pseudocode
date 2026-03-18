/*
 * XREFs of ?Initialize@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00C3340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionAmbientLightMarshaler::Initialize(
        DirectComposition::CCompositionAmbientLightMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 96) = 1;
  result = 0LL;
  *((_DWORD *)this + 30) = 1065353216;
  *(_OWORD *)((char *)this + 104) = xmmword_1C025A658;
  return result;
}

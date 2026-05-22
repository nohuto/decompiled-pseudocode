/*
 * XREFs of sub_1800EF5C8 @ 0x1800EF5C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EF5C8(
        DirectComposition::CDevice *a1,
        __int64 _RDX,
        enum DXGI_FORMAT a3,
        enum DXGI_ALPHA_MODE a4,
        enum D2D1_EXTEND_MODE a5,
        struct IDCompositionSurface **a6,
        unsigned int *a7)
{
  char v7; // of
  _DWORD *v9; // rdi
  _DWORD *v10; // rsi

  if ( !v7 )
    JUMPOUT(0x1800EF54DLL);
  __asm { rcr     dword ptr [rdx+rbx*2-62h], 1 }
  *v9 = *v10;
  v9[1] = v10[1];
  return DirectComposition::CDevice::CreateGradientSurface(a1, _RDX, a3, a4, a5, a6, a7);
}

/*
 * XREFs of ?SetCompositionPrimitiveGroupRendererEnabled@CDevice@DirectComposition@@UEAAJH@Z @ 0x18008EC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::SetCompositionPrimitiveGroupRendererEnabled(
        DirectComposition::CDevice *this,
        int a2)
{
  *((_DWORD *)this + 168) = a2;
  return 0LL;
}

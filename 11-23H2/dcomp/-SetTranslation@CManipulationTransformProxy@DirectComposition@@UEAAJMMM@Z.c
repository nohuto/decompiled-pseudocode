/*
 * XREFs of ?SetTranslation@CManipulationTransformProxy@DirectComposition@@UEAAJMMM@Z @ 0x180036130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CManipulationTransformProxy::SetTranslation(
        DirectComposition::CManipulationTransformProxy *this,
        float a2,
        float a3,
        float a4)
{
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  *(float *)v5 = a2;
  *(float *)&v5[1] = a3;
  *(float *)&v5[2] = a4;
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CManipulationTransformProxy *)((char *)this + 8),
           0,
           v5,
           0xCuLL);
}

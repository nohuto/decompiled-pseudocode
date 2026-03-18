/*
 * XREFs of ?ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CD70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021D290 (-ReleaseAllReferences@CVisualBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 */

void __fastcall DirectComposition::CCompositionTextLineMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionTextLineMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CVisualBitmapMarshaler::ReleaseAllReferences(this, a2);
}

/*
 * XREFs of ?Attach@?$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAXPEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x18003E4F8
 * Callers:
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?SetKeyframeData@KeyFrameAnimation@Composition@UI@Windows@@AEAAJPEAUKeyframeList@@MAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x180082E70 (-SetKeyframeData@KeyFrameAnimation@Composition@UI@Windows@@AEAAJPEAUKeyframeList@@MAEAUKeyframeV.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::ExpressionAnimation>::Attach(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  unsigned int result; // eax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  *a1 = a2;
  return result;
}

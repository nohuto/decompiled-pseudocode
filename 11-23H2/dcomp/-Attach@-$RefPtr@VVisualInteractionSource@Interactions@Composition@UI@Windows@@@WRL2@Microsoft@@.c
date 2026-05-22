/*
 * XREFs of ?Attach@?$RefPtr@VVisualInteractionSource@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAXPEAVVisualInteractionSource@Interactions@Composition@UI@Windows@@@Z @ 0x18018FF30
 * Callers:
 *     ?Remove@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVisualInteractionSource@2345@@Z @ 0x180190138 (-Remove@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVis.c)
 *     ?RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18019030C (-RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::VisualInteractionSource>::Attach(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  *a1 = a2;
  return result;
}

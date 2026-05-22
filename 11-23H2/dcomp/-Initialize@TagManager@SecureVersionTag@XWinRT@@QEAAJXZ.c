/*
 * XREFs of ?Initialize@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x180036B3C
 * Callers:
 *     ?RuntimeClassInitialize@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180036B78 (-RuntimeClassInitialize@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJPEAVCompositor@.c)
 *     ?RuntimeClassInitialize@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVSceneMeshRendererComponent@2345@@Z @ 0x18018F348 (-RuntimeClassInitialize@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAVCo.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall XWinRT::SecureVersionTag::TagManager::Initialize(XWinRT::SecureVersionTag::TagManager *this)
{
  _DWORD *v2; // rax

  v2 = DefaultHeap::Alloc(4uLL);
  if ( v2 )
    *v2 = 1;
  *(_QWORD *)this = v2;
  return v2 == 0LL ? 0x8007000E : 0;
}

/*
 * XREFs of ?Append@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUISceneNode@Scenes@234@@Z @ 0x180141D80
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Append@?$VectorBasedCollection@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAJAEBV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x1800B705C (-Append@-$VectorBasedCollection@V-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Micros.c)
 *     ?CollectionItemFromApi@SceneNodeCollection@Scenes@Composition@UI@Windows@@QEAA@PEAUISceneNode@2345@PEAJ@Z @ 0x18014200C (-CollectionItemFromApi@SceneNodeCollection@Scenes@Composition@UI@Windows@@QEAA@PEAUISceneNode@23.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::Scenes::SceneNodeCollection,>::Append(
        __int64 a1,
        int *a2)
{
  Windows::UI::Composition::Scenes::SceneNodeCollection *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // esi
  int v9; // [rsp+30h] [rbp+8h]
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = (Windows::UI::Composition::Scenes::SceneNodeCollection *)(a1 - 176);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 176 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Scenes::SceneNodeCollection::CollectionItemFromApi(
      v2,
      (struct Windows::UI::Composition::Scenes::ISceneNode *)&v10,
      a2);
    v5 = 0;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0x8Fu);
      v5 = v9;
    }
    else
    {
      v6 = Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::Append(
             (__int64)v2 + 128,
             &v10);
      v7 = v6;
      if ( v6 < 0 )
      {
        DoStackCaptureDirect(v6, 0x91u);
        v5 = v7;
      }
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}

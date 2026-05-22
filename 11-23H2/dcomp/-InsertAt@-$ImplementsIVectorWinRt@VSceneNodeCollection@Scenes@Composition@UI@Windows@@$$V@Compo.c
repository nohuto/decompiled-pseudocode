/*
 * XREFs of ?InsertAt@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUISceneNode@Scenes@234@@Z @ 0x180143690
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CollectionItemFromApi@SceneNodeCollection@Scenes@Composition@UI@Windows@@QEAA@PEAUISceneNode@2345@PEAJ@Z @ 0x18014200C (-CollectionItemFromApi@SceneNodeCollection@Scenes@Composition@UI@Windows@@QEAA@PEAUISceneNode@23.c)
 *     ?InsertAt@?$VectorBasedCollection@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAJIAEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x18014375C (-InsertAt@-$VectorBasedCollection@V-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::Scenes::SceneNodeCollection,>::InsertAt(
        __int64 a1,
        unsigned int a2,
        struct IUnknown *a3)
{
  __int64 v3; // rbp
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v9; // edx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1 - 176;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 176 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Scenes::SceneNodeCollection::CollectionItemFromApi(
      (struct Microsoft::WRL2::ContextSession **)v3,
      &v12,
      a3,
      &v11);
    v8 = v11;
    v7 = 0;
    if ( v11 < 0 )
    {
      v9 = 114;
    }
    else
    {
      v8 = Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>::InsertAt(
             v3 + 128,
             a2,
             &v12);
      if ( v8 >= 0 )
      {
LABEL_8:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
        goto LABEL_9;
      }
      v9 = 116;
    }
    DoStackCaptureDirect(v8, v9);
    v7 = v8;
    goto LABEL_8;
  }
  v7 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}

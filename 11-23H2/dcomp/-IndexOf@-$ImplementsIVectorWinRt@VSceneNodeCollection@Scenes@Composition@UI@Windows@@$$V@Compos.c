/*
 * XREFs of ?IndexOf@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUISceneNode@Scenes@234@PEAIPEAE@Z @ 0x180143400
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CollectionItemFromApi@SceneNodeCollection@Scenes@Composition@UI@Windows@@QEAA@PEAUISceneNode@2345@PEAJ@Z @ 0x18014200C (-CollectionItemFromApi@SceneNodeCollection@Scenes@Composition@UI@Windows@@QEAA@PEAUISceneNode@23.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::Scenes::SceneNodeCollection,>::IndexOf(
        __int64 a1,
        struct IUnknown *a2,
        _DWORD *a3,
        bool *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int v10; // esi
  Microsoft::WRL2::NestableRuntimeClass **v11; // r8
  Microsoft::WRL2::NestableRuntimeClass **v12; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v13; // rcx
  __int64 v14; // rax
  int v16; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = a1 - 176;
  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 176 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v8);
  if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Scenes::SceneNodeCollection::CollectionItemFromApi(
      (struct Microsoft::WRL2::ContextSession **)v4,
      &v17,
      a2,
      &v16);
    v10 = v16;
    if ( v16 < 0 )
    {
      DoStackCaptureDirect(v16, 0x50u);
      v5 = v10;
    }
    else
    {
      v11 = *(Microsoft::WRL2::NestableRuntimeClass ***)(v4 + 136);
      v12 = *(Microsoft::WRL2::NestableRuntimeClass ***)(v4 + 144);
      v13 = v11;
      if ( v11 == v12 )
      {
LABEL_7:
        LODWORD(v14) = 0;
      }
      else
      {
        while ( *v13 != v17 )
        {
          if ( ++v13 == v12 )
            goto LABEL_7;
        }
        v14 = v13 - v11;
      }
      *a3 = v14;
      *a4 = v13 != *(Microsoft::WRL2::NestableRuntimeClass ***)(v4 + 144);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v8);
  return v5;
}

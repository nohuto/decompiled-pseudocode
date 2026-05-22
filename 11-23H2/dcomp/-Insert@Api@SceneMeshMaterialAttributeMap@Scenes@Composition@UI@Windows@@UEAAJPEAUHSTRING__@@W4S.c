/*
 * XREFs of ?Insert@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@W4SceneAttributeSemantic@3456@PEAE@Z @ 0x18018E530
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Insert@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4SceneAttributeSemantic@2345@PEAE@Z @ 0x18018E5DC (-Insert@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4Scene.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Api::Insert(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v9; // edi
  int v10; // eax

  v4 = a1 - 152;
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
  {
    v10 = Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Insert(v4, a2, a3, a4);
    v9 = v10;
    if ( v10 < 0 )
      DoStackCaptureDirect(v10, 0xF2u);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v9;
}

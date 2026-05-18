/*
 * XREFs of ?SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z @ 0x18003D348
 * Callers:
 *     ??0SceneNode@Engine@Spectre@@AEAA@V?$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z @ 0x18003B028 (--0SceneNode@Engine@Spectre@@AEAA@V-$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z.c)
 *     ??0Light@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180042DFC (--0Light@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ??0Bounds@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180049FAC (--0Bounds@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ??0MeshInstance@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18004AD2C (--0MeshInstance@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004C270 (-PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 * Callees:
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::SceneNode::SetAttribute(Spectre::Engine::SceneNode *a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx

  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  v6 = *((_QWORD *)a1 + 56);
  result = 1LL << a2;
  if ( a3 )
  {
    v8 = result | v6;
  }
  else
  {
    result = ~result;
    v8 = result & v6;
  }
  *((_QWORD *)a1 + 56) = v8;
  return result;
}

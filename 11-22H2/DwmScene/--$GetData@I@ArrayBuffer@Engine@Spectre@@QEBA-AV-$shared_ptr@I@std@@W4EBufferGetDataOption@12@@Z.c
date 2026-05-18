/*
 * XREFs of ??$GetData@I@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@I@std@@W4EBufferGetDataOption@12@@Z @ 0x180047340
 * Callers:
 *     ?GetIndices16@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@G@std@@W4EBufferGetDataOption@23@@Z @ 0x180048910 (-GetIndices16@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@G@std@@W4EBufferGetDataOption@23@@Z.c)
 *     ?GetNormals@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x180048948 (-GetNormals@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBuffe.c)
 *     ?GetPositions@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x180048980 (-GetPositions@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBuf.c)
 *     ?GetUV0@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector2@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x1800489C8 (-GetUV0@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector2@Math@Utils@Spectre@@@std@@W4EBufferGet.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$static_pointer_cast@IX@std@@YA?AV?$shared_ptr@I@0@AEBV?$shared_ptr@X@0@@Z @ 0x180047A7C (--$static_pointer_cast@IX@std@@YA-AV-$shared_ptr@I@0@AEBV-$shared_ptr@X@0@@Z.c)
 *     ?RecoverData@ArrayBuffer@Engine@Spectre@@AEBA?AV?$shared_ptr@X@std@@XZ @ 0x180088CB8 (-RecoverData@ArrayBuffer@Engine@Spectre@@AEBA-AV-$shared_ptr@X@std@@XZ.c)
 */

__int64 __fastcall Spectre::Engine::ArrayBuffer::GetData<unsigned int>(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rcx
  __int64 v5; // r9
  _QWORD *v6; // rax
  char v7; // bl
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-28h]
  _BYTE v11[8]; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-18h]

  v3 = (_QWORD *)(a1 + 136);
  if ( !a3 || std::operator!=<Spectre::Engine::Scene>(v3) )
  {
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v9,
           v3);
    v7 = 6;
  }
  else
  {
    v6 = (_QWORD *)Spectre::Engine::ArrayBuffer::RecoverData(v5, v11);
    v7 = 5;
  }
  std::static_pointer_cast<unsigned int,void>(a2, v6);
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  if ( (v7 & 1) != 0 && v12 )
    std::_Ref_count_base::_Decref(v12);
  return a2;
}

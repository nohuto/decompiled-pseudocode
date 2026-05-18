/*
 * XREFs of ?GetNormals@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x180048948
 * Callers:
 *     ?ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x180048514 (-ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 * Callees:
 *     ??$GetData@I@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@I@std@@W4EBufferGetDataOption@12@@Z @ 0x180047340 (--$GetData@I@ArrayBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@I@std@@W4EBufferGetDataOption@12@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::Mesh::GetNormals(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    Spectre::Engine::ArrayBuffer::GetData<unsigned int>(v3, (__int64)a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}

/*
 * XREFs of ?CreateGround@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@_N@Z @ 0x18008CF08
 * Callers:
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 * Callees:
 *     ?CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@MM_NI1@Z @ 0x18008CFFC (-CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@st.c)
 */

__int64 __fastcall Spectre::Engine::MeshHelper::CreateGround(__int64 a1, int a2, int a3, int a4)
{
  char v6; // [rsp+20h] [rbp-38h]

  v6 = a3;
  Spectre::Engine::MeshHelper::CreatePlaneTriangleStrip(a1, a2, a3, a4, v6);
  return a1;
}

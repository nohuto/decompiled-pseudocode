/*
 * XREFs of ?GetReadableTexture@DepthBuffer@Engine@Spectre@@UEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderAccessMode@DeviceDepthBuffer@23@@Z @ 0x18006FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::DepthBuffer::GetReadableTexture(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r9

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 16 * (a3 + 8LL)));
  return v3;
}

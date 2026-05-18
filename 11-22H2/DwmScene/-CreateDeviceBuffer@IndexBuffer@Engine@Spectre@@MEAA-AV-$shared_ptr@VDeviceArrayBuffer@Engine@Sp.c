/*
 * XREFs of ?CreateDeviceBuffer@IndexBuffer@Engine@Spectre@@MEAA?AV?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@AEAVRenderDevice@23@@Z @ 0x180089B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VDeviceIndexBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceIndexBuffer@Engine@Spectre@@@std@@XZ @ 0x1800898EC (--$CreateResource@VDeviceIndexBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 */

__int64 *__fastcall Spectre::Engine::IndexBuffer::CreateDeviceBuffer(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+30h] [rbp-18h]

  v4 = Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceIndexBuffer>(a3, &v8);
  v5 = *v4;
  *v4 = 0LL;
  *a2 = v5;
  v6 = v4[1];
  v4[1] = 0LL;
  a2[1] = v6;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}

/*
 * XREFs of ?Create@DeviceShaderPipeline@Engine@Spectre@@UEAA_NV?$shared_ptr@VVertexShader@Engine@Spectre@@@std@@V?$shared_ptr@VPixelShader@Engine@Spectre@@@5@V?$shared_ptr@VHullShader@Engine@Spectre@@@5@V?$shared_ptr@VDomainShader@Engine@Spectre@@@5@V?$shared_ptr@VGeometryShader@Engine@Spectre@@@5@@Z @ 0x18008AE00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

char __fastcall Spectre::Engine::DeviceShaderPipeline::Create(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rcx

  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 12, a2);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 14, a3);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 16, a4);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 18, a5);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 20, a6);
  v10 = (std::_Ref_count_base *)a2[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = (std::_Ref_count_base *)a4[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v13 = (std::_Ref_count_base *)a5[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v14 = (std::_Ref_count_base *)a6[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return 1;
}

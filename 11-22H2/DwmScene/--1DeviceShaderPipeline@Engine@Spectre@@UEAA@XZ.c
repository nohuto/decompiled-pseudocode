/*
 * XREFs of ??1DeviceShaderPipeline@Engine@Spectre@@UEAA@XZ @ 0x18008A94C
 * Callers:
 *     ??_EDeviceShaderPipeline@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008ABE0 (--_EDeviceShaderPipeline@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall Spectre::Engine::DeviceShaderPipeline::~DeviceShaderPipeline(
        Spectre::Engine::DeviceShaderPipeline *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-10h] BYREF

  *(_QWORD *)this = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  *(_OWORD *)v7 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 12, (__int64 *)v7);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  *(_OWORD *)v7 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 14, (__int64 *)v7);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  *(_OWORD *)v7 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 16, (__int64 *)v7);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  *(_OWORD *)v7 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 18, (__int64 *)v7);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  *(_OWORD *)v7 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 20, (__int64 *)v7);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 21);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 19);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 17);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 15);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}

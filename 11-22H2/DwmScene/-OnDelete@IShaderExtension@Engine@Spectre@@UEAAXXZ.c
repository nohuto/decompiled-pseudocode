/*
 * XREFs of ?OnDelete@IShaderExtension@Engine@Spectre@@UEAAXXZ @ 0x180060D80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall Spectre::Engine::IShaderExtension::OnDelete(Spectre::Engine::IShaderExtension *this)
{
  std::_Ref_count_base *v1[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v1 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 7, (__int64 *)v1);
  if ( v1[1] )
    std::_Ref_count_base::_Decref(v1[1]);
}

/*
 * XREFs of ?RegisterModelPropsChangedCallback@ViewerEngine@Engine@Spectre@@AEAAXXZ @ 0x1800679E4
 * Callers:
 *     ?OnInitialize@ViewerEngine@Engine@Spectre@@MEAAXAEBUEngineDescription@23@@Z @ 0x180066FB0 (-OnInitialize@ViewerEngine@Engine@Spectre@@MEAAXAEBUEngineDescription@23@@Z.c)
 * Callees:
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     std::_Test_callable__lambda_fc5806797b07904940ba13a2a5c07b95___ @ 0x180062EB4 (std--_Test_callable__lambda_fc5806797b07904940ba13a2a5c07b95___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ViewerEngine::RegisterModelPropsChangedCallback(Spectre::Engine::ViewerEngine *this)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(__int64, _QWORD *); // r8
  _QWORD v4[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v5; // [rsp+58h] [rbp-10h]

  Spectre::Engine::Engine::GetConfiguration(this, 1);
  v5 = 0LL;
  if ( std::_Test_callable__lambda_fc5806797b07904940ba13a2a5c07b95___() )
  {
    v4[1] = this;
    v4[0] = &std::_Func_impl_no_alloc<_lambda_fc5806797b07904940ba13a2a5c07b95_,void,std::wstring const &>::`vftable';
    v5 = v4;
  }
  v3(v2, v4);
}

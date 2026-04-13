/*
 * XREFs of DllGetClassObject @ 0x1800516F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18004DC70 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  const struct _GUID **v6; // rbx
  unsigned __int64 v7; // rdx
  bool i; // cf
  const struct _GUID *v9; // r9
  _QWORD *v10; // rax
  HRESULT result; // eax
  int v12; // [rsp+50h] [rbp+18h] BYREF

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    (PINIT_ONCE_FN)_lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_1801AF488 = 1;
  *ppv = 0LL;
  v6 = (const struct _GUID **)((*(__int64 (__fastcall **)(void *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                 + 32LL))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
                             + 8);
  v7 = (*(__int64 (__fastcall **)(void *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                         + 40LL))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
  for ( i = (unsigned __int64)v6 < v7; i; i = (unsigned __int64)v6 < v7 )
  {
    v9 = *v6;
    if ( *v6 )
    {
      v10 = *(_QWORD **)v9->Data4;
      if ( *v10 == *(_QWORD *)&rclsid->Data1 && v10[1] == *(_QWORD *)rclsid->Data4 )
      {
        v12 = 1;
        result = Microsoft::WRL::Details::GetCacheEntry(
                   (Microsoft::WRL::Details *)&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
                   (struct Microsoft::WRL::Details::ModuleBase *)&v12,
                   &riid->Data1,
                   v9,
                   ppv);
        goto LABEL_9;
      }
    }
    ++v6;
  }
  result = -2147221231;
LABEL_9:
  if ( result == -2147221231 )
    return NdrDllGetClassObject(
             rclsid,
             riid,
             ppv,
             (const ProxyFileInfo **)&aProxyFileList,
             &CLSID_PSFactoryBuffer,
             &gPFactory);
  return result;
}

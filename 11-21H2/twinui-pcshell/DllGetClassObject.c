/*
 * XREFs of DllGetClassObject @ 0x18005B960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18005BA30 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180146454 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  Microsoft::WRL::Details *v6; // rsi
  const struct _GUID **v7; // rbx
  unsigned __int64 v8; // rax
  const struct _GUID *v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  struct IUnknown **v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v6 = (Microsoft::WRL::Details *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  *ppv = 0LL;
  v7 = (const struct _GUID **)((*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v6 + 32LL))(v6) + 8);
  v8 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v6 + 40LL))(v6);
  if ( (unsigned __int64)v7 >= v8 )
    return -2147221231;
  while ( 1 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      v10 = *(_QWORD **)v9->Data4;
      v11 = *v10 - *(_QWORD *)&rclsid->Data1;
      if ( *v10 == *(_QWORD *)&rclsid->Data1 )
        v11 = v10[1] - *(_QWORD *)rclsid->Data4;
      if ( !v11 )
        break;
    }
    if ( (unsigned __int64)++v7 >= v8 )
      return -2147221231;
  }
  v14 = 1;
  return Microsoft::WRL::Details::GetCacheEntry(
           v6,
           (struct Microsoft::WRL::Details::ModuleBase *)&v14,
           &riid->Data1,
           v9,
           ppv,
           v13);
}

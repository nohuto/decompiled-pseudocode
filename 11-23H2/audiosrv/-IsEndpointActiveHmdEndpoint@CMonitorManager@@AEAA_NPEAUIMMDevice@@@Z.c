/*
 * XREFs of ?IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18012DBC8
 * Callers:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18003F5A4 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CMonitorManager::IsEndpointActiveHmdEndpoint(CMonitorManager *this, struct IMMDevice *a2)
{
  bool v4; // si
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v6; // eax
  void *v7; // rcx
  __int64 v8; // rdx
  LPVOID pv; // [rsp+38h] [rbp+10h] BYREF

  pv = 0LL;
  v4 = 0;
  GetId = a2->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a2, &pv);
  v7 = pv;
  if ( v6 >= 0 )
  {
    if ( pv )
    {
      v8 = *((_QWORD *)this + 43);
      if ( v8 )
      {
        v4 = (unsigned int)_o__wcsicmp(pv, v8) == 0;
        v7 = pv;
      }
    }
  }
  if ( v7 )
    CoTaskMemFree(v7);
  return v4;
}

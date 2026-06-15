/*
 * XREFs of ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x18012DD50
 * Callers:
 *     wistd::__function::__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18012C070 (wistd--__function--__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(en_ea_18012C070.c)
 * Callees:
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180004180 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x180004DA4 (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CMonitorManager::OnAudioMirrorEnabledChange(CMonitorManager *this)
{
  char v2; // r14
  unsigned int i; // esi
  __int64 v4; // rax
  struct IMMDevice *v5; // rbx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  struct IMMDevice *v7; // rbx
  HRESULT (__stdcall *OpenPropertyStore)(IMMDevice *, DWORD, IPropertyStore **); // rdi
  __int64 v9; // rcx
  CMonitorManager *v10; // rcx
  __int64 *v11; // [rsp+30h] [rbp-48h] BYREF
  struct _tagpropertykey v12; // [rsp+38h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]
  unsigned int v15; // [rsp+C0h] [rbp+48h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+58h] BYREF
  struct IMMDevice *v18; // [rsp+D8h] [rbp+60h] BYREF

  v11 = 0LL;
  v2 = *((_BYTE *)this + 352);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 **))(**((_QWORD **)this + 8) + 24LL))(
         *((_QWORD *)this + 8),
         0LL,
         15LL,
         &v11) >= 0
    && (*(int (__fastcall **)(__int64 *, unsigned int *))(*v11 + 24))(v11, &v15) >= 0 )
  {
    for ( i = 0; i < v15; ++i )
    {
      v18 = 0LL;
      v17 = 0LL;
      pv = 0LL;
      *(_OWORD *)pvar = 0LL;
      v14 = 0LL;
      v4 = *v11;
      v18 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct IMMDevice **))(v4 + 32))(v11, i, &v18) >= 0 )
      {
        v5 = v18;
        GetId = v18->lpVtbl->GetId;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(v5, &pv) >= 0 )
        {
          v7 = v18;
          OpenPropertyStore = v18->lpVtbl->OpenPropertyStore;
          v9 = v17;
          v17 = 0LL;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          if ( ((int (__fastcall *)(struct IMMDevice *, __int64, __int64 *))OpenPropertyStore)(v7, 2LL, &v17) >= 0
            && CMonitorManager::IsMonitorMirrorEligible(v10, v18)
            && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
                 v17,
                 &PKEY_MonitorEnabled,
                 pvar) >= 0
            && (LOWORD(pvar[0]) != 11 || (LOWORD(pvar[1]) == 0xFFFF) != v2) )
          {
            LOWORD(pvar[0]) = 11;
            LOWORD(pvar[1]) = v2 ? -1 : 0;
            if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 48LL))(
                   v17,
                   &PKEY_MonitorEnabled,
                   pvar) >= 0 )
              CMonitorManager::OnMonitorEnabledChanged(this, (const unsigned __int16 *)pv, &v12);
          }
        }
      }
      PropVariantClear(pvar);
      if ( pv )
        CoTaskMemFree(pv);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v11);
}

/*
 * XREFs of ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x18012F74C
 * Callers:
 *     wistd::__function::__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18012C0C0 (wistd--__function--__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(en_ea_18012C0C0.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z @ 0x18012F110 (-SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::UpdateRoutedEndpointId(void **this, bool *a2)
{
  char *v4; // rbx
  const char *v5; // r9
  LPVOID *v6; // rsi
  const char *v7; // r9
  void *v8; // rcx
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+40h] BYREF
  PVOID pvData; // [rsp+88h] [rbp+48h] BYREF

  pcbData = 0;
  v4 = 0LL;
  pvData = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
          L"RoutedAudioDevice",
          2u,
          0LL,
          0LL,
          &pcbData) )
  {
    pcbData += 2;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      0LL,
      pcbData,
      v5);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pvData,
      pv);
    v4 = (char *)pvData;
    if ( pvData )
    {
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
              L"RoutedAudioDevice",
              2u,
              0LL,
              pvData,
              &pcbData) )
      {
        v6 = this + 43;
        if ( (unsigned int)_o__wcsicmp(v4, this[43]) )
        {
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
            &pv,
            v4,
            0xFFFFFFFFFFFFFFFFuLL,
            v7);
          if ( v6 == &pv )
          {
            v8 = pv;
          }
          else
          {
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              this + 43,
              pv);
            v8 = 0LL;
          }
          if ( v8 )
            CoTaskMemFree(v8);
          CMonitorManager::SetMonitorMirrorEligibleProperty((CMonitorManager *)this, (const unsigned __int16 *)*v6);
          if ( a2 )
            *a2 = 1;
        }
      }
    }
  }
  if ( v4 )
    CoTaskMemFree(v4);
}

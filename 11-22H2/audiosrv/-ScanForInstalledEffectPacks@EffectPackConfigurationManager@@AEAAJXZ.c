/*
 * XREFs of ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x18005C3D0
 * Callers:
 *     _lambda_04dd0c052ec9b666fe3270ea37415371_::_lambda_invoker_cdecl_ @ 0x180065FB0 (_lambda_04dd0c052ec9b666fe3270ea37415371_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D86C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ??0?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffectPackConfigurationManager@@@Z @ 0x18010D990 (--0-$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffec.c)
 *     ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DC70 (-AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPackConfigurationManager::ScanForInstalledEffectPacks(EffectPackConfigurationManager *this)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  const char *v7; // r9
  DWORD v8; // eax
  DWORD i; // r14d
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  DWORD cbMaxSubKeyLen; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cSubKeys; // [rsp+64h] [rbp-9Ch] BYREF
  DWORD cchName; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  LPWSTR lpName; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v20; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v21[2]; // [rsp+A0h] [rbp-60h] BYREF
  GUID v22; // [rsp+B0h] [rbp-50h]
  _QWORD *v23; // [rsp+D8h] [rbp-28h]
  GUID pclsid; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-10h] BYREF
  GUID v26; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\EffectsPacks",
          0,
          0x20019u,
          &hKey) )
  {
    cSubKeys = 0;
    cbMaxSubKeyLen = 0;
    if ( !RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, &cbMaxSubKeyLen, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL) )
    {
      v8 = cbMaxSubKeyLen;
      if ( cbMaxSubKeyLen >= 0x26 )
      {
        ++cbMaxSubKeyLen;
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &lpName,
          0LL,
          v8 + 1,
          v7);
        if ( lpName )
        {
          for ( i = 0; i < cSubKeys; ++i )
          {
            cchName = cbMaxSubKeyLen;
            RegEnumKeyExW(hKey, i, lpName, &cchName, 0LL, 0LL, 0LL, 0LL);
            if ( cchName == 38 && CLSIDFromString(lpName, &pclsid) >= 0 )
            {
              v20 = pclsid;
              v10 = EffectPackConfigurationManager::AddEffectPackConfigurationToList(this, &v20);
              if ( v10 >= 0 )
              {
                wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
                  v19,
                  this);
                v11 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
                wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
                  &v25,
                  v19[0]);
                v26 = pclsid;
                v21[0] = off_180170770;
                v12 = v25;
                v25 = 0LL;
                v21[1] = v12;
                v22 = pclsid;
                v23 = v21;
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v25);
                v13 = CSerialWorkQueue::QueueWorkItem(v11, (__int64)v21);
                if ( v13 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0xFD,
                    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
                    (const char *)(unsigned int)v13);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v19);
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xF8,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
                  (const char *)(unsigned int)v10);
              }
            }
          }
          CoTaskMemFree(lpName);
          goto LABEL_2;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDD,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
          (const char *)0x8007000ELL);
        v2 = -2147024882;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
      return v2;
    }
  }
LABEL_2:
  v4 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v3,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 4u && tlgKeywordOn((__int64)v4, 2048LL) )
    tlgWriteTransfer_EtwEventWriteTransfer(v5, byte_180193713, 0LL, 0LL, 2, (__int64)&v25);
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}

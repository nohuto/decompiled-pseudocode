/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18011B148
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x18011B730 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800D039C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_61b46c1a1c9f0e1730f6e53f8c139b82__0_ @ 0x18011B008 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_61b46c1a1c9f0e1730f6e53f.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, LPVOID *); // rdi
  int v6; // eax
  __int64 v7; // rdx
  _BOOL8 v8; // rdx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v10; // eax
  __int64 v11; // rdx
  unsigned int i; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int16 *v15; // rax
  int v16; // r8d
  int v17; // ecx
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, const WCHAR **); // r14
  const WCHAR **v20; // rdi
  std::_Ref_count_base *v21; // rax
  std::_Ref_count_base *v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  const WCHAR *v29; // rax
  __int64 v30; // r14
  std::_Ref_count_base *v31; // rbx
  __int64 v32; // rax
  int v33; // eax
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  int pvar; // [rsp+78h] [rbp-90h] BYREF
  int pvar_4; // [rsp+7Ch] [rbp-8Ch] BYREF
  PROPVARIANT pvar_8[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v45; // [rsp+90h] [rbp-78h]
  const WCHAR *v46; // [rsp+98h] [rbp-70h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-60h] BYREF
  std::_Ref_count_base *v48; // [rsp+B0h] [rbp-58h]
  int v49; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR **v50; // [rsp+C0h] [rbp-48h]
  std::_Ref_count_base *v51; // [rsp+C8h] [rbp-40h]
  std::_Ref_count_base *v52[2]; // [rsp+D0h] [rbp-38h] BYREF
  PROPVARIANT *v53; // [rsp+E0h] [rbp-28h]
  char v54; // [rsp+E8h] [rbp-20h]
  _BYTE v55[64]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v56[6]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD v57[6]; // [rsp+148h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v41 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), &v41);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_55;
  }
  pv = 0LL;
  v4 = v41;
  v5 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v41 + 64LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = v5(v4, &pv);
  v3 = v6;
  if ( v6 < 0 )
  {
    v7 = 125LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v6);
LABEL_6:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    goto LABEL_55;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &pvar);
  v3 = v6;
  if ( v6 < 0 )
  {
    v7 = 128LL;
    goto LABEL_5;
  }
  v36 = 0LL;
  v8 = *((_DWORD *)this + 2) != 0;
  lpVtbl = g_DeviceEnumerator->lpVtbl;
  v36 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _BOOL8, __int64, __int64 **))lpVtbl->EnumAudioEndpoints)(
          g_DeviceEnumerator,
          v8,
          4026531855LL,
          &v36);
  v3 = v10;
  if ( v10 < 0 )
  {
    v11 = 135LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
    goto LABEL_6;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v36 + 24))(v36, &v37);
  v3 = v10;
  if ( v10 < 0 )
  {
    v11 = 138LL;
    goto LABEL_11;
  }
  for ( i = 0; i < (unsigned int)v37; ++i )
  {
    v39 = 0LL;
    v13 = *v36;
    v39 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 **))(v13 + 32))(v36, i, &v39) >= 0 )
    {
      v38 = 0LL;
      v14 = *v39;
      v38 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v14 + 32))(v39, 0LL, &v38) >= 0 )
      {
        v56[0] = 590439624;
        v56[1] = 1283267372;
        v56[2] = 1907779772;
        v56[3] = 1730509416;
        v56[4] = 1;
        *(_OWORD *)pvar_8 = 0LL;
        v45 = 0LL;
        v53 = pvar_8;
        v54 = 1;
        if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v38 + 40LL))(v38, v56, pvar_8) >= 0
          && LOWORD(pvar_8[0]) == 31 )
        {
          v15 = (unsigned __int16 *)pvar_8[1];
          do
          {
            v16 = *(unsigned __int16 *)((char *)v15 + (_QWORD)pv - (unsigned __int64)pvar_8[1]);
            v17 = *v15 - v16;
            if ( v17 )
              break;
            ++v15;
          }
          while ( v16 );
          if ( !v17 )
          {
            v57[0] = -1702713381;
            v57[1] = 1102331579;
            v57[2] = -1223116157;
            v57[3] = -65530063;
            v57[4] = 1;
            PropVariantClear(pvar_8);
            if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v38 + 40LL))(v38, v57, pvar_8) >= 0
              && LOWORD(pvar_8[0]) == 19
              && LODWORD(pvar_8[1]) == pvar )
            {
              v40 = 0LL;
              v18 = (__int64)v39;
              v19 = *(int (__fastcall **)(__int64, const WCHAR **))(*v39 + 40);
              *(_OWORD *)v52 = 0LL;
              std::shared_ptr<std::function<void (void)>>::operator=(&v40, (__int64 *)v52);
              if ( v52[1] )
                std::_Ref_count_base::_Decref(v52[1]);
              v20 = (const WCHAR **)v40;
              if ( !(_QWORD)v40 )
              {
                v21 = (std::_Ref_count_base *)operator new(0x18uLL);
                v22 = v21;
                if ( v21 )
                {
                  *((_DWORD *)v21 + 2) = 1;
                  *((_DWORD *)v21 + 3) = 1;
                  *(_QWORD *)v21 = &std::_Ref_count_obj2<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
                  *((_QWORD *)v21 + 2) = 0LL;
                }
                else
                {
                  v22 = 0LL;
                }
                v47 = (__int64)v22 + 16;
                v48 = v22;
                std::shared_ptr<std::function<void (void)>>::operator=(&v40, &v47);
                if ( v48 )
                  std::_Ref_count_base::_Decref(v48);
                v20 = (const WCHAR **)v40;
              }
              if ( v19(v18, v20) < 0 )
              {
                v31 = (std::_Ref_count_base *)*((_QWORD *)&v40 + 1);
              }
              else
              {
                v24 = dword_1801D0428++;
                v25 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                  v23,
                                  _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
                if ( *v25 > 4u && tlgKeywordOn((__int64)v25, 32LL) )
                {
                  if ( v20 )
                    v29 = *v20;
                  else
                    v29 = 0LL;
                  v46 = v29;
                  pvar_4 = v24;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                    v26,
                    byte_180193D03,
                    v27,
                    v28,
                    (__int64)&pvar_4,
                    &v46);
                }
                v30 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
                v49 = v24;
                v31 = (std::_Ref_count_base *)*((_QWORD *)&v40 + 1);
                if ( *((_QWORD *)&v40 + 1) )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL));
                  v31 = (std::_Ref_count_base *)*((_QWORD *)&v40 + 1);
                  v20 = (const WCHAR **)v40;
                }
                v50 = v20;
                v51 = v31;
                v32 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_61b46c1a1c9f0e1730f6e53f8c139b82__0_(
                        (__int64)v55,
                        (__int64)&v49);
                v33 = CSerialWorkQueue::QueueWorkItem(v30, v32);
                if ( v33 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0xC2,
                    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
                    (const char *)(unsigned int)v33);
              }
              if ( v31 )
                std::_Ref_count_base::_Decref(v31);
            }
          }
        }
        v54 = 0;
        PropVariantClear(pvar_8);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v38);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
  if ( pv )
    CoTaskMemFree(pv);
  v3 = 0;
LABEL_55:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v41);
  return v3;
}

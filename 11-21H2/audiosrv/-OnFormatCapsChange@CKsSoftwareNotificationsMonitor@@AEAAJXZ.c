/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800F53FC
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1800F59C0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005C2D4 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C9DCC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_61b46c1a1c9f0e1730f6e53f8c139b82__0_ @ 0x1800F5274 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_61b46c1a1c9f0e1730f6e53f.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, char **); // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int i; // esi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int16 *v14; // rax
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, void **); // r14
  void **v19; // rdi
  std::_Ref_count_base *v20; // rax
  std::_Ref_count_base *v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rax
  __int64 v28; // r14
  std::_Ref_count_base *v29; // rbx
  _DWORD *v30; // rax
  int v31; // eax
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+58h] [rbp-B0h] BYREF
  char *v38; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  int pvar; // [rsp+78h] [rbp-90h] BYREF
  int pvar_4; // [rsp+7Ch] [rbp-8Ch] BYREF
  PROPVARIANT pvar_8[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+90h] [rbp-78h]
  void *v44; // [rsp+98h] [rbp-70h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-60h] BYREF
  std::_Ref_count_base *v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B8h] [rbp-50h] BYREF
  void **v48; // [rsp+C0h] [rbp-48h]
  std::_Ref_count_base *v49; // [rsp+C8h] [rbp-40h]
  std::_Ref_count_base *v50[2]; // [rsp+D0h] [rbp-38h] BYREF
  PROPVARIANT *v51; // [rsp+E0h] [rbp-28h]
  char v52; // [rsp+E8h] [rbp-20h]
  _BYTE v53[64]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v54[6]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD v55[6]; // [rsp+148h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v39 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), &v39);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v38 = 0LL;
    v4 = v39;
    v5 = *(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v39 + 64LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v38,
      0LL);
    v6 = v5(v4, &v38);
    v3 = v6;
    if ( v6 < 0 )
    {
      v7 = 125LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
        (const char *)(unsigned int)v6);
LABEL_54:
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v38);
      goto LABEL_55;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &pvar);
    v3 = v6;
    if ( v6 < 0 )
    {
      v7 = 128LL;
      goto LABEL_7;
    }
    v36 = 0LL;
    v8 = *(_QWORD *)g_DeviceEnumerator;
    v36 = 0LL;
    v9 = (*(__int64 (__fastcall **)(LPVOID, bool, __int64, __int64 **))(v8 + 24))(
           g_DeviceEnumerator,
           *((_DWORD *)this + 2) != 0,
           4026531855LL,
           &v36);
    v3 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v36 + 24))(v36, &v33);
      v3 = v9;
      if ( v9 >= 0 )
      {
        for ( i = 0; i < (unsigned int)v33; ++i )
        {
          v35 = 0LL;
          v12 = *v36;
          v35 = 0LL;
          if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 **))(v12 + 32))(v36, i, &v35) >= 0 )
          {
            v34 = 0LL;
            v13 = *v35;
            v34 = 0LL;
            if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v13 + 32))(v35, 0LL, &v34) >= 0 )
            {
              v54[0] = 590439624;
              v54[1] = 1283267372;
              v54[2] = 1907779772;
              v54[3] = 1730509416;
              v54[4] = 1;
              *(_OWORD *)pvar_8 = 0LL;
              v43 = 0LL;
              v51 = pvar_8;
              v52 = 1;
              if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v34 + 40LL))(v34, v54, pvar_8) >= 0
                && LOWORD(pvar_8[0]) == 31 )
              {
                v14 = (unsigned __int16 *)pvar_8[1];
                do
                {
                  v15 = *(unsigned __int16 *)((char *)v14 + v38 - (char *)pvar_8[1]);
                  v16 = *v14 - v15;
                  if ( v16 )
                    break;
                  ++v14;
                }
                while ( v15 );
                if ( !v16 )
                {
                  v55[0] = -1702713381;
                  v55[1] = 1102331579;
                  v55[2] = -1223116157;
                  v55[3] = -65530063;
                  v55[4] = 1;
                  PropVariantClear(pvar_8);
                  if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v34 + 40LL))(
                         v34,
                         v55,
                         pvar_8) >= 0
                    && LOWORD(pvar_8[0]) == 19
                    && LODWORD(pvar_8[1]) == pvar )
                  {
                    v37 = 0LL;
                    v17 = (__int64)v35;
                    v18 = *(int (__fastcall **)(__int64, void **))(*v35 + 40);
                    *(_OWORD *)v50 = 0LL;
                    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
                      &v37,
                      (__int64 *)v50);
                    if ( v50[1] )
                      std::_Ref_count_base::_Decref(v50[1]);
                    v19 = (void **)v37;
                    if ( !(_QWORD)v37 )
                    {
                      v20 = (std::_Ref_count_base *)operator new(0x18uLL);
                      v21 = v20;
                      if ( v20 )
                      {
                        *((_DWORD *)v20 + 2) = 1;
                        *((_DWORD *)v20 + 3) = 1;
                        *(_QWORD *)v20 = &std::_Ref_count_obj2<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
                        *((_QWORD *)v20 + 2) = 0LL;
                      }
                      else
                      {
                        v21 = 0LL;
                      }
                      v45 = (__int64)v21 + 16;
                      v46 = v21;
                      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
                        &v37,
                        &v45);
                      if ( v46 )
                        std::_Ref_count_base::_Decref(v46);
                      v19 = (void **)v37;
                    }
                    if ( v18(v17, v19) < 0 )
                    {
                      v29 = (std::_Ref_count_base *)*((_QWORD *)&v37 + 1);
                    }
                    else
                    {
                      v23 = dword_1801C31AC++;
                      v24 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v22,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
                      if ( *(_DWORD *)v24 > 4u
                        && (*(_BYTE *)(v24 + 16) & 0x20) != 0
                        && (*(_QWORD *)(v24 + 24) & 0x20LL) == *(_QWORD *)(v24 + 24) )
                      {
                        if ( v19 )
                          v27 = *v19;
                        else
                          v27 = 0LL;
                        v44 = v27;
                        pvar_4 = v23;
                        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                          v24,
                          byte_180189710,
                          v25,
                          v26,
                          (__int64)&pvar_4,
                          &v44);
                      }
                      v28 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
                      v47 = v23;
                      v29 = (std::_Ref_count_base *)*((_QWORD *)&v37 + 1);
                      if ( *((_QWORD *)&v37 + 1) )
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL));
                        v29 = (std::_Ref_count_base *)*((_QWORD *)&v37 + 1);
                        v19 = (void **)v37;
                      }
                      v48 = v19;
                      v49 = v29;
                      v30 = (_DWORD *)std::function_void___cdecl_void__::function_void___cdecl_void____lambda_61b46c1a1c9f0e1730f6e53f8c139b82__0_(
                                        (__int64)v53,
                                        (__int64)&v47);
                      v31 = CSerialWorkQueue::QueueWorkItem(v28, v30);
                      if ( v31 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0xC2,
                          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
                          (const char *)(unsigned int)v31);
                    }
                    if ( v29 )
                      std::_Ref_count_base::_Decref(v29);
                  }
                }
              }
              v52 = 0;
              PropVariantClear(pvar_8);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
        }
        v3 = 0;
        goto LABEL_53;
      }
      v10 = 138LL;
    }
    else
    {
      v10 = 135LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v9);
LABEL_53:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v36);
    goto LABEL_54;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7A,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
    (const char *)(unsigned int)v2);
LABEL_55:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
  return v3;
}

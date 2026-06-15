/*
 * XREFs of ?PreStartStream@CVADServer@@UEAAJXZ @ 0x1800EF2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800ED02C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall CVADServer::PreStartStream(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, __int64 *); // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 (__fastcall *v16)(struct IAudioPolicyManager *, __int64, char *); // rbx
  int v17; // eax
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  int v21; // [rsp+80h] [rbp+28h] BYREF
  __int64 v22; // [rsp+88h] [rbp+30h] BYREF
  void *v23; // [rsp+90h] [rbp+38h] BYREF
  __int64 v24; // [rsp+98h] [rbp+40h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v22 = 0LL;
  v3 = *((_QWORD *)this + 24);
  v19 = v1;
  if ( v3 )
  {
    if ( *((_QWORD *)this + 21) )
    {
      v4 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v3 + 8) + 24LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v22);
      if ( v4(v3 + 8, &v22) >= 0 )
      {
        v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
               v5,
               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v6 > 4u
          && (*(_DWORD *)(v6 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v6 + 24) & 0x200LL) == *(_QWORD *)(v6 + 24) )
        {
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
          v8 = *((_QWORD *)this + 21) + 8LL;
          v21 = v7;
          v9 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
          v10 = *((_QWORD *)this + 24) + 8LL;
          v23 = v9;
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v6,
            byte_180189679,
            v11,
            v12,
            (__int64)&v24,
            &v23,
            (__int64)&v21);
        }
      }
    }
  }
  if ( *((_DWORD *)this + 46) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      if ( *((_QWORD *)this + 24) )
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 67);
        v16 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, char *))(*(_QWORD *)g_PolicyManager
                                                                                      + 232LL);
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 67);
        v17 = v16(
                g_PolicyManager,
                (*((_QWORD *)this + 24) + 8LL) & -(__int64)(*((_QWORD *)this + 24) != 0LL),
                (char *)this + 536);
        v13 = v17;
        if ( v17 >= 0 )
        {
          v13 = 0;
          goto LABEL_18;
        }
        v15 = (unsigned int)v17;
        v14 = 1828LL;
      }
      else
      {
        v13 = -2004287487;
        v14 = 1822LL;
        v15 = 2290679809LL;
      }
    }
    else
    {
      v13 = -2004287487;
      v14 = 1821LL;
      v15 = 2290679809LL;
    }
  }
  else
  {
    v13 = -2004287487;
    v14 = 1820LL;
    v15 = 2290679809LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v15);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v19);
  return v13;
}

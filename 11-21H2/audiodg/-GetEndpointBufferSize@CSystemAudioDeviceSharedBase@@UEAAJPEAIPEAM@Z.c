/*
 * XREFs of ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x140056870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetEndpointBufferSize(
        CSystemAudioDeviceSharedBase *this,
        unsigned int *a2,
        float *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  v11 = *(_OWORD *)((char *)this + 248);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v6 = *((_QWORD *)this + 41);
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *, float *))(*(_QWORD *)v6 + 40LL))(v6, a2, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x12u,
        (__int64)&WPP_7f2b06cbe2743c9445e1f0d7b0a3a743_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetEndpointBufferSize", 0x105u, v8);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_7f2b06cbe2743c9445e1f0d7b0a3a743_Traceguids, *a2);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v10);
  EtwEventActivityIdControl(4LL, &v12);
  return v8;
}

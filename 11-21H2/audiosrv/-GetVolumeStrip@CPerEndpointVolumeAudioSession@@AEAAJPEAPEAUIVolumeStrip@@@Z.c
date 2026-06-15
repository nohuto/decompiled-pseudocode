/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800D8808
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800D6B10 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800D93B0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x1800DA770 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800DB090 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180003000 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800D8CE4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_qqq @ 0x1800DB9E4 (WPP_SF_qqq.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(
        CPerEndpointVolumeAudioSession *this,
        struct IVolumeStrip **a2)
{
  int EndpointVolumeInformation; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  _QWORD *v6; // r14
  struct IVolumeProvider *v7; // rdi
  __int64 (__fastcall *v8)(struct IVolumeProvider *, const unsigned __int16 *, struct IUnknown **); // rbx
  const unsigned __int16 *Buffer; // rax
  struct IUnknown *v10; // rbx
  const unsigned __int16 *v11; // rdx
  struct IUnknown *v13; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+70h] [rbp+18h] BYREF

  EndpointVolumeInformation = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 928);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 928));
  v14 = v5;
  v6 = (_QWORD *)((char *)this + 968);
  if ( !*((_QWORD *)this + 121) )
  {
    v13 = 0LL;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x20u,
        (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
        this);
    }
    v7 = g_pVolumeProvider;
    v8 = *(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, struct IUnknown **))(*(_QWORD *)g_pVolumeProvider + 40LL);
    Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 584));
    EndpointVolumeInformation = v8(v7, Buffer, &v13);
    if ( EndpointVolumeInformation < 0 )
      goto LABEL_13;
    v10 = v13;
    CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 584));
    EndpointVolumeInformation = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
                                  this,
                                  v11,
                                  (struct IVolumeStrip *)v10);
    if ( EndpointVolumeInformation < 0 )
      goto LABEL_13;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x21u,
        (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
        this);
    }
    EndpointVolumeInformation = ((__int64 (__fastcall *)(struct IUnknown *, char *))v13->lpVtbl[9].Release)(
                                  v13,
                                  (char *)this + 920);
    if ( EndpointVolumeInformation < 0 )
    {
LABEL_13:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
      AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::GetVolumeStrip", 1652, EndpointVolumeInformation);
      goto LABEL_25;
    }
    if ( (struct IUnknown *)*v6 != v13 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 121, v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  }
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        34LL,
        &WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
        this,
        *v6,
        a2);
    }
    *a2 = (struct IVolumeStrip *)*v6;
    if ( *v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    EndpointVolumeInformation = 0;
  }
LABEL_25:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  return (unsigned int)EndpointVolumeInformation;
}

/*
 * XREFs of ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140029210
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUIAudioProcessingObject@@@Z @ 0x14001CBE0 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessingHostOb.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query_to_nothrow@UIAudioProcessingObject@@AEAPEAUIAudioProcessingObjectNotifications@@@wil@@YAJAEAPEAUIAudioProcessingObjectNotifications@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1400293A4 (--$com_query_to_nothrow@UIAudioProcessingObject@@AEAPEAUIAudioProcessingObjectNotifications@@@wi.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperArray@$03@@@Z @ 0x140064520 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$make_unique@$$BY0A@I$0A@@std@@YA?AV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@0@_K@Z @ 0x140064944 (--$make_unique@$$BY0A@I$0A@@std@@YA-AV-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@0@_K.c)
 *     ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006517C (-AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEME.c)
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400652E8 (-AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERT.c)
 *     ?AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400654F4 (-AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_VOLUME_APO_NOTI.c)
 *     ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006601C (-QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICA.c)
 *     ?QueueInitialVolumeNotification@@YAJAEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140066200 (-QueueInitialVolumeNotification@@YAJAEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVC.c)
 *     ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x14006845C (-StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAPOProcessingHost::RegisterAPONotifications(
        CAPOProcessingHost *this,
        struct IAudioProcessingObjectNotifications *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CAPOProcessingHostObject *v6; // rbx
  __int64 v7; // rax
  int v8; // edi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  void *v10; // rcx
  const char *v11; // r9
  __int64 result; // rax
  void *v13; // rcx
  _DWORD *v14; // rax
  unsigned int i; // edi
  __int64 v16; // r9
  void *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  int started; // eax
  LPVOID v21; // rcx
  void *v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  int v28; // r8d
  int v29; // r9d
  void *v30; // rcx
  void *v31; // rcx
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  CAPOProcessingHostObject *v33; // [rsp+48h] [rbp-50h] BYREF
  void *Block; // [rsp+50h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *p_pv; // [rsp+58h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION_DEBUG *v36; // [rsp+60h] [rbp-38h] BYREF
  char v37; // [rsp+68h] [rbp-30h]
  __int64 v38; // [rsp+70h] [rbp-28h] BYREF
  _QWORD v39[4]; // [rsp+78h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v41; // [rsp+B0h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp+20h] BYREF

  v32 = 0LL;
  try
  {
    v4 = wil::com_query_to_nothrow<IAudioProcessingObject,IAudioProcessingObjectNotifications * &>();
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v4);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
      return v5;
    }
    v33 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    p_pv = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
    v38 = v32;
    std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::find<void>(
      (__int64)this + 184,
      v39,
      (__int64)&v38);
    if ( v39[0] == *((_QWORD *)this + 24) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11C,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)0x80070490LL);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&p_pv);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
      return 2147943568LL;
    }
    v6 = *(CAPOProcessingHostObject **)(v39[0] + 24LL);
    v33 = v6;
    if ( v6 )
      (*(void (__fastcall **)(CAPOProcessingHostObject *))(*(_QWORD *)v6 + 8LL))(v6);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&p_pv);
    pv = 0LL;
    v41 = 0;
    v7 = *(_QWORD *)a2;
    p_pv = (struct _RTL_CRITICAL_SECTION *)&pv;
    v36 = 0LL;
    v37 = 1;
    v8 = (*(__int64 (__fastcall **)(struct IAudioProcessingObjectNotifications *, struct _RTL_CRITICAL_SECTION_DEBUG **, unsigned int *))(v7 + 24))(
           a2,
           &v36,
           &v41);
    if ( v37 )
    {
      DebugInfo = p_pv->DebugInfo;
      p_pv->DebugInfo = v36;
      if ( DebugInfo )
        CoTaskMemFree(DebugInfo);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v8);
      v13 = pv;
      pv = 0LL;
      if ( v13 )
        CoTaskMemFree(v13);
      goto LABEL_18;
    }
    v10 = pv;
    if ( pv && v41 )
    {
      std::make_unique<unsigned int [0],0>(&Block, v41);
      v14 = Block;
      if ( Block )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= v41 )
          {
            started = CAPOProcessingHostObject::StartSendingNotifications(v6);
            v8 = started;
            if ( started < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x142,
                (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                (const char *)(unsigned int)started);
              if ( Block )
                operator delete[](Block);
              v22 = pv;
              pv = 0LL;
              if ( v22 )
                CoTaskMemFree(v22);
LABEL_18:
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
              return (unsigned int)v8;
            }
            v23 = 0;
            while ( 2 )
            {
              if ( v23 >= v41 )
              {
                v27 = (_DWORD *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                  (__int64)v21,
                                  _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
                if ( *v27 > 4u )
                {
                  p_pv = (struct _RTL_CRITICAL_SECTION *)Block;
                  LOWORD(v36) = v41;
                  v39[0] = v6;
                  v38 = v32;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperArray<4>>(
                    (_DWORD)v27,
                    (unsigned int)&unk_1400A6C50,
                    v28,
                    v29,
                    (__int64)&v38,
                    (__int64)v39,
                    (__int64)&p_pv);
                }
                if ( Block )
                  operator delete[](Block);
                v30 = pv;
                pv = 0LL;
                if ( v30 )
                  CoTaskMemFree(v30);
                goto LABEL_13;
              }
              v24 = 32LL * v23;
              v21 = pv;
              if ( *(_DWORD *)((char *)pv + v24) == 1 )
              {
                v25 = QueueInitialVolumeNotification(
                        (struct AUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v24 + 8),
                        v6);
                if ( v25 < 0 )
                {
                  v26 = 328LL;
                  goto LABEL_52;
                }
              }
              else if ( *(_DWORD *)((char *)pv + v24) == 2 )
              {
                v25 = QueueInitialEnhancementsEnabledNotification(
                        (struct AUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v24 + 8),
                        v6);
                if ( v25 < 0 )
                {
                  v26 = 332LL;
LABEL_52:
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)v26,
                    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                    (const char *)(unsigned int)v25);
                }
              }
              ++v23;
              continue;
            }
          }
          v16 = 32LL * i;
          v14[i] = *(_DWORD *)((char *)pv + v16);
          if ( *(_DWORD *)((char *)pv + v16) == 1 )
          {
            v18 = CAPOProcessingHost::AddEndpointVolumeNotificationClient(
                    this,
                    (struct AUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v16 + 8),
                    v6);
            if ( v18 >= 0 )
              goto LABEL_38;
            v19 = 306LL;
            goto LABEL_37;
          }
          if ( *(_DWORD *)((char *)pv + v16) == 2 )
            break;
          if ( *(_DWORD *)((char *)pv + v16) != 3 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x13E,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
              (const char *)0x80070057LL);
            if ( Block )
              operator delete[](Block);
            v17 = pv;
            pv = 0LL;
            if ( v17 )
              CoTaskMemFree(v17);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
            return 2147942487LL;
          }
          v18 = CAPOProcessingHost::AddAudioSystemEffectsPropertyStoreNotificationClient(
                  this,
                  (struct AUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v16 + 8),
                  v6);
          if ( v18 < 0 )
          {
            v19 = 314LL;
LABEL_37:
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v19,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
              (const char *)(unsigned int)v18);
          }
LABEL_38:
          v14 = Block;
        }
        v18 = CAPOProcessingHost::AddEndpointPropertyChangeNotificationClient(
                this,
                (struct AUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR *)((char *)pv + v16 + 8),
                v6);
        if ( v18 >= 0 )
          goto LABEL_38;
        v19 = 310LL;
        goto LABEL_37;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x129,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)0x8007000ELL);
      if ( Block )
        operator delete[](Block);
      v31 = pv;
      pv = 0LL;
      if ( v31 )
        CoTaskMemFree(v31);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
      result = 2147942414LL;
    }
    else
    {
      pv = 0LL;
      if ( v10 )
        CoTaskMemFree(v10);
LABEL_13:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x159,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           v11);
  }
  return result;
}

/*
 * XREFs of ?OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140071E1C
 * Callers:
 *     ?OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140071D80 (-OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CBC (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14006F96C (-CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATI.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070080 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOEndpointNotificationsHandler::OnNotifyVolume2(
        CAPOEndpointNotificationsHandler *this,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // r14
  _DWORD *v6; // rsi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebp
  _QWORD *i; // rbx
  int v12[2]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v13; // [rsp+28h] [rbp-40h]
  char v14; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( *((_QWORD *)this + 20) )
  {
    v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = 1;
    v6 = operator new(0x18uLL);
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = off_1400A8248;
    *((_QWORD *)v6 + 2) = v5;
    *(_QWORD *)v12 = v5;
    v13 = v6;
    if ( !v5 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)0x8007000ELL);
      wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v12);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 2147942414LL;
    }
    memset_0(v5, 0, 0x48uLL);
    v8 = *((_QWORD *)this + 5);
    v5[1] = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *(_DWORD *)v5 = 4;
    v9 = CopyAudioVolumeNotificationData2FromBlock((struct AUDIO_VOLUME_NOTIFICATION_DATA2 **)v5, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v9);
      wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v12);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v10;
    }
    for ( i = (_QWORD *)*((_QWORD *)this + 20); i; i = (_QWORD *)*i )
      CAPOProcessingHostObject::QueueNotification(i[1], v12);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}

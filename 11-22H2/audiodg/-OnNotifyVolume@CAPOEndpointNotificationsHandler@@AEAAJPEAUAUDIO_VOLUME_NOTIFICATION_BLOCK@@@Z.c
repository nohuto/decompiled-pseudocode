/*
 * XREFs of ?OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140072004
 * Callers:
 *     ?OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140071D80 (-OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CBC (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?CopyNotificationDataFromBlock@@YAXPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14006FCA8 (-CopyNotificationDataFromBlock@@YAXPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@PEAUAUDIO_VOLUME_NOTIFICA.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070080 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOEndpointNotificationsHandler::OnNotifyVolume(
        CAPOEndpointNotificationsHandler *this,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // r14
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v9; // rcx
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v10; // rax
  _QWORD *i; // rbx
  int v12[2]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v13; // [rsp+28h] [rbp-40h]
  char v14; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( *((_QWORD *)this + 19) )
  {
    v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = 1;
    v6 = operator new(0x18uLL);
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = off_1400A81B8;
    *((_QWORD *)v6 + 2) = v5;
    *(_QWORD *)v12 = v5;
    v13 = v6;
    if ( !v5 )
    {
      v7 = 176LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)0x8007000ELL);
      wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v12);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 2147942414LL;
    }
    memset_0(v5, 0, 0x48uLL);
    v9 = *((_QWORD *)this + 5);
    v5[1] = v9;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *(_DWORD *)v5 = 1;
    v10 = (struct AUDIO_VOLUME_NOTIFICATION_DATA *)operator new[](
                                                     4LL * *((unsigned int *)a2 + 12) + 32,
                                                     (const struct std::nothrow_t *)&std::nothrow);
    v5[2] = v10;
    if ( !v10 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x97,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)0x8007000ELL);
      v7 = 183LL;
      goto LABEL_4;
    }
    CopyNotificationDataFromBlock(v10, a2);
    for ( i = (_QWORD *)*((_QWORD *)this + 19); i; i = (_QWORD *)*i )
      CAPOProcessingHostObject::QueueNotification(i[1], v12);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}

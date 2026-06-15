/*
 * XREFs of ?OnNotify@CAPOEndpointNotificationsHandler@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140069A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyAudioVolumeNotificationData@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x140067DB4 (-CopyAudioVolumeNotificationData@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x1400681A0 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEndpointNotificationsHandler::OnNotify(
        struct _RTL_CRITICAL_SECTION *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  struct _RTL_CRITICAL_SECTION **i; // rbx
  _DWORD *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *LockSemaphore; // rcx
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    i = (struct _RTL_CRITICAL_SECTION **)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = operator new(0x18uLL);
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = off_14009CD40;
    *((_QWORD *)v5 + 2) = i;
    *(_QWORD *)v11 = i;
    v12 = v5;
    if ( i )
    {
      memset_0(i, 0, 0x48uLL);
      *(_DWORD *)i = 1;
      LockSemaphore = (struct _RTL_CRITICAL_SECTION *)this[1].LockSemaphore;
      i[1] = LockSemaphore;
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))LockSemaphore->DebugInfo->CriticalSection)(LockSemaphore);
      v9 = CopyAudioVolumeNotificationData((struct APO_NOTIFICATION *)i, a2);
      LODWORD(i) = v9;
      if ( v9 >= 0 )
      {
        EnterCriticalSection(this + 3);
        v14 = this + 3;
        for ( i = (struct _RTL_CRITICAL_SECTION **)this[4].OwningThread; i; i = (struct _RTL_CRITICAL_SECTION **)*i )
          CAPOProcessingHostObject::QueueNotification(i[1], v11);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
        goto LABEL_12;
      }
      v6 = (unsigned int)v9;
      v7 = 165LL;
    }
    else
    {
      LODWORD(i) = -2147024882;
      v6 = 2147942414LL;
      v7 = 159LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)v6);
LABEL_12:
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    return (unsigned int)i;
  }
  LODWORD(i) = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9A,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
    (const char *)0x80070057LL);
  return (unsigned int)i;
}

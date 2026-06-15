/*
 * XREFs of ?OnStreamGroupDestroyed@CBtAudioResourceManager@@UEAAXPEAVCEndpointCharacteristics@@PEAUIStreamGroupProxy@@@Z @ 0x180116C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800CACE0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 */

void __fastcall CBtAudioResourceManager::OnStreamGroupDestroyed(
        CBtAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct IStreamGroupProxy *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax
  _QWORD v10[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v11[2]; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)a3 + 112LL))(
                     a3,
                     v11);
    v6 = *v5 - 0x48B1B9CD98951333LL;
    if ( *v5 == 0x48B1B9CD98951333LL )
      v6 = v5[1] + 0x88CD297BF005C60LL;
    if ( !v6 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
      v11[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
      v7 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v10[1] = this;
      v10[0] = off_180177C30;
      v10[7] = v10;
      v9 = CSerialWorkQueue::QueueRecurringItem(v7, 5000LL, v8, (__int64)v10, (PTP_TIMER **)this + 14);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2AB,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)v9);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v11);
    }
  }
}

/*
 * XREFs of ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18002628C
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800250AC (--1CProcess@@MEAA@XZ.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x180026048 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x180027C4C (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000B7F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CleanupProcessTerminationWatcher(CProcess *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 368);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  v6 = v4;
  if ( *((_QWORD *)this + 51) )
  {
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *((_DWORD *)this + 40));
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 48LL))(
      ThreadPool,
      *((_QWORD *)this + 51),
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 51));
    *((_QWORD *)this + 51) = 0LL;
    if ( a2 )
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)this + 19,
        0LL);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)this);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
  return 0LL;
}

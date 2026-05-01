/*
 * XREFs of ??$get_site@UIUnknown@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIUnknown@@@1@XZ @ 0x1805BFB34
 * Callers:
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805C0F10 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::immersive_shell_component::get_site<IUnknown>(RTL_SRWLOCK *a1, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx
  PVOID Ptr; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 10;
  AcquireSRWLockShared(a1 + 10);
  v10 = v4;
  Ptr = a1[9].Ptr;
  if ( Ptr )
  {
    v6 = (*(__int64 (__fastcall **)(PVOID, GUID *, _QWORD *))(*(_QWORD *)Ptr + 24LL))(
           Ptr,
           &GUID_00000000_0000_0000_c000_000000000046,
           a2);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAC,
        (int)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
        (const char *)(unsigned int)v6,
        v8);
  }
  else
  {
    *a2 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
  return a2;
}

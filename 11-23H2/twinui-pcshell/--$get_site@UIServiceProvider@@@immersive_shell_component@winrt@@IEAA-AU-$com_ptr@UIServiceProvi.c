/*
 * XREFs of ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x180391498
 * Callers:
 *     ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180110A40 (-QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@PEAUHWND__@@QEAU9@@Z @ 0x1806B0D08 (-CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall winrt::immersive_shell_component::get_site<IServiceProvider>(RTL_SRWLOCK *a1, __int64 *a2)
{
  RTL_SRWLOCK *v4; // rdi
  PVOID Ptr; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = a1 + 10;
  AcquireSRWLockShared(a1 + 10);
  if ( *a2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a2);
  Ptr = a1[9].Ptr;
  if ( Ptr )
  {
    v6 = (*(__int64 (__fastcall **)(PVOID, GUID *, __int64 *))(*(_QWORD *)Ptr + 24LL))(
           Ptr,
           &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
           a2);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAC,
        (int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
        (const char *)(unsigned int)v6,
        v8);
  }
  else
  {
    *a2 = 0LL;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return a2;
}

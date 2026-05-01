/*
 * XREFs of ?OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18045E050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&_ @ 0x180428A58 (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnFocusNavigate_--_2_--CF.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18042CF20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEve.c)
 *     ??$InvokeAll@PEAVSearchAppExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18045CC2C (--$InvokeAll@PEAVSearchAppExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall SearchAppExperienceManagerNotification::OnFocusNavigate(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  result = &retaddr;
  v9 = a2;
  if ( *(_QWORD *)(a1 + 40) )
  {
    v4 = Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection___(
           &v8,
           &v9);
    v5 = *v4;
    *v4 = 0LL;
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::Release(v6);
    }
    result = (_UNKNOWN **)Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>(
                            *(_QWORD *)(a1 + 40) + 192LL,
                            *(_QWORD *)(a1 + 40),
                            v5);
    if ( v5 )
      return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}

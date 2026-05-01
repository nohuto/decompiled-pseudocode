/*
 * XREFs of ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18042C740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1804284DC (--$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@In.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&_ @ 0x180428A58 (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnFocusNavigate_--_2_--CF.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18042CF20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEve.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18042F1A0 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CortanaExperienceManagerNotification::OnFocusNavigate(__int64 a1, int a2)
{
  char result; // al
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  result = CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)(a1 - 8));
  if ( result )
  {
    v4 = Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection___(
           &v7,
           &v8);
    v5 = *v4;
    *v4 = 0LL;
    v6 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::Release(v6);
    }
    result = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>(
               *(_QWORD *)(a1 + 48) + 192LL,
               *(_QWORD *)(a1 + 48),
               v5);
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}

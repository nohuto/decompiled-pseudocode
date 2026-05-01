/*
 * XREFs of Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&_ @ 0x180428A58
 * Callers:
 *     ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18042C740 (-OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@.c)
 *     ?OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18045E050 (-OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experienc.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1804296AC (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIFocusNavigateEventArgs@Experience@Sh.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18042CF20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEve.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection___(
        _QWORD *a1,
        int *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  int v6; // ebx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>(v4);
    v5[8] = v6;
    *(_QWORD *)v5 = off_1807D4200;
    *((_QWORD *)v5 + 1) = off_1807D4240;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}

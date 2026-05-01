/*
 * XREFs of IsPeoplePane @ 0x1800F23D0
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0618 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F20B0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180105E20 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     wil::details::functor_wrapper_void__lambda_97c766e59a20c5e973ffeb930e3c2b3f__&_::Run @ 0x1801B49A0 (wil--details--functor_wrapper_void__lambda_97c766e59a20c5e973ffeb930e3c2b3f__-_--Run.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall IsPeoplePane(__int64 a1)
{
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(int (__fastcall **)(__int64, const WCHAR *, int *))(*(_QWORD *)a1 + 152LL))(
         a1,
         L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
         &v4) >= 0
    && v4
    || (*(int (__fastcall **)(__int64, const WCHAR *, int *))(*(_QWORD *)a1 + 152LL))(
         a1,
         L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
         &v4) >= 0
    && v4 )
  {
    return 1;
  }
  return v2;
}

/*
 * XREFs of ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAAJPEBG_N@Z @ 0x180247A98
 * Callers:
 *     _lambda_a7ff001bd589f864b6844592adbd9d86_::operator() @ 0x180236C54 (_lambda_a7ff001bd589f864b6844592adbd9d86_--operator().c)
 *     _lambda_eb4cd3094334dda46300329bfc912a3e_::operator() @ 0x180237734 (_lambda_eb4cd3094334dda46300329bfc912a3e_--operator().c)
 *     _lambda_fa22f7386584b172c2544cf81792da3a_::operator() @ 0x1802378EC (_lambda_fa22f7386584b172c2544cf81792da3a_--operator().c)
 *     ?WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z @ 0x180247BBC (-WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z.c)
 *     ?WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z @ 0x180247BF8 (-WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z.c)
 *     ?WasPreviouslyInstalled@WidgetPlatformPackageHelper@@QEAAX_N@Z @ 0x180247C34 (-WasPreviouslyInstalled@WidgetPlatformPackageHelper@@QEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801BC580 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(
        LockScreenWidgetPackageHelperBase *this,
        const unsigned __int16 *a2,
        unsigned __int8 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = SHRegSetBOOL(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Dsh\\Widgets\\WidgetOnLock",
         a2,
         a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33A,
    (int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
    (const char *)(unsigned int)v3);
  return v4;
}

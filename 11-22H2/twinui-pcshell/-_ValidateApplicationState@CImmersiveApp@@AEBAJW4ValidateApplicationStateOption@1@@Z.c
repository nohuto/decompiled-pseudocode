/*
 * XREFs of ?_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z @ 0x1800234B0
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180021550 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180057860 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1803C0D70 (-GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::_ValidateApplicationState(__int64 a1, int a2)
{
  __int64 result; // rax
  bool v3; // zf
  _BYTE *v4; // rdx
  char v5; // r8

  result = 0LL;
  v3 = a2 == 0;
  v4 = (_BYTE *)(a1 + 576);
  if ( !v3 || (v5 = 1, (*v4 & 8) == 0) )
    v5 = 0;
  if ( *(_BYTE *)(a1 + 728) || (*v4 & 1) == 0 && !v5 )
    return 2147947423LL;
  return result;
}

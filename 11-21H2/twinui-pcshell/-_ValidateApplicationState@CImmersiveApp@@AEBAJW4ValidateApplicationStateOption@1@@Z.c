/*
 * XREFs of ?_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z @ 0x180021D5C
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x1800216F0 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180304840 (-GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::_ValidateApplicationState(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  char v4; // r8
  char v5; // dl

  result = 0LL;
  if ( !a2 && (v3 = *(_DWORD *)(a1 + 576), (v3 & 8) != 0) )
  {
    v4 = 1;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 576);
    v4 = 0;
  }
  v5 = v3 & 1;
  if ( *(_BYTE *)(a1 + 728) || !v5 && !v4 )
    return 2147947423LL;
  return result;
}

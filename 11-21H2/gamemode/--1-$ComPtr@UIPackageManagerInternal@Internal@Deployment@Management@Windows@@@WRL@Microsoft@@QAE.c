/*
 * XREFs of ??1?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE@XZ @ 0x100057CC
 * Callers:
 *     _MsixvcAddPackageAsync@20 @ 0x10004D20 (_MsixvcAddPackageAsync@20.c)
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 *     _MsixvcRemediateMutablePackagesForVolumeAsync@8 @ 0x10005400 (_MsixvcRemediateMutablePackagesForVolumeAsync@8.c)
 *     _MsixvcAddGameToGCS@4 @ 0x100054C0 (_MsixvcAddGameToGCS@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(
        int *this)
{
  int v1; // edx
  int result; // eax

  v1 = *this;
  if ( *this )
  {
    *this = 0;
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v1 + 8))(*(_DWORD *)(*(_DWORD *)v1 + 8), v1);
  }
  return result;
}

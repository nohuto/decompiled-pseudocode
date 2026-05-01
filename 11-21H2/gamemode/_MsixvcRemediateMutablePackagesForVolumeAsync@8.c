/*
 * XREFs of _MsixvcRemediateMutablePackagesForVolumeAsync@8 @ 0x10005400
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ??1?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE@XZ @ 0x100057CC (--1-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YGJPAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x10005888 (--$ActivateInstance@V-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YGXJK@Z @ 0x10005A81 (-RaiseException@Details@WRL@Microsoft@@YGXJK@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

void *__stdcall MsixvcRemediateMutablePackagesForVolumeAsync(int a1, int a2)
{
  void *v2; // esi
  Microsoft::WRL::Details *v4; // [esp+0h] [ebp-2Ch]
  const char *v5; // [esp+4h] [ebp-28h]
  unsigned int v6; // [esp+8h] [ebp-24h]
  int v7; // [esp+Ch] [ebp-20h] BYREF
  HSTRING_HEADER hstringHeader; // [esp+10h] [ebp-1Ch] BYREF
  HSTRING string; // [esp+24h] [ebp-8h] BYREF
  int retaddr; // [esp+30h] [ebp+4h]

  v7 = 0;
  string = 0;
  if ( WindowsCreateStringReference(
         L"Windows.Management.Deployment.Internal.PackageManagerInternal",
         0x3Du,
         &hstringHeader,
         &string) < 0 )
  {
    Microsoft::WRL::Details::RaiseException(v4, (int)v5, v6);
    JUMPOUT(0x100054AC);
  }
  v2 = (void *)Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>>(&v7);
  if ( (int)v2 >= 0
    && (v2 = (void *)(*(int (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)v7 + 248))(
                       *(_DWORD *)(*(_DWORD *)v7 + 248),
                       v7,
                       a1,
                       a2),
        (int)v2 >= 0) )
  {
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      v2,
      (unsigned int)v4,
      v5,
      v6);
  }
  Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v7);
  return v2;
}

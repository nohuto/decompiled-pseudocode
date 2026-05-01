/*
 * XREFs of _MsixvcAddPackageAsync@20 @ 0x10004D20
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

void *__stdcall MsixvcAddPackageAsync(int a1, int a2, int a3, int a4, int a5)
{
  void *v5; // eax
  void *v6; // esi
  void *v7; // eax
  Microsoft::WRL::Details *v9; // [esp+0h] [ebp-34h]
  const char *v10; // [esp+4h] [ebp-30h]
  unsigned int v11; // [esp+8h] [ebp-2Ch]
  int v12; // [esp+14h] [ebp-20h] BYREF
  HSTRING_HEADER hstringHeader; // [esp+18h] [ebp-1Ch] BYREF
  HSTRING string; // [esp+2Ch] [ebp-8h] BYREF
  int retaddr; // [esp+38h] [ebp+4h]

  v12 = 0;
  string = 0;
  if ( WindowsCreateStringReference(
         L"Windows.Management.Deployment.Internal.PackageManagerInternal",
         0x3Du,
         &hstringHeader,
         &string) < 0 )
  {
    Microsoft::WRL::Details::RaiseException(v9, (int)v10, v11);
    JUMPOUT(0x10004DE7);
  }
  v5 = (void *)Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>>(&v12);
  v6 = v5;
  if ( (int)v5 >= 0 )
  {
    v7 = (void *)(*(int (__thiscall **)(_DWORD, int, int, _DWORD, int, int, int, int, int))(*(_DWORD *)v12 + 92))(
                   *(_DWORD *)(*(_DWORD *)v12 + 92),
                   v12,
                   a1,
                   0,
                   a2,
                   3,
                   a3,
                   a4,
                   a5);
    v6 = v7;
    if ( (int)v7 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        v7,
        (unsigned int)v9,
        v10,
        v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      v5,
      (unsigned int)v9,
      v10,
      v11);
  }
  string = 0;
  Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v12);
  return v6;
}

/*
 * XREFs of MsixvcRemediateMutablePackagesForVolumeAsync @ 0x180005580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800027A8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180005AFC (--$ActivateInstance@V-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180005C50 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180007C20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MsixvcRemediateMutablePackagesForVolumeAsync(__int64 a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v13; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v14; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12 = 0LL;
  v14 = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Management.Deployment.Internal.PackageManagerInternal", 0x3Du, &v13, &v14);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    JUMPOUT(0x18000568ALL);
  }
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>>(
         v14,
         &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 139LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 496LL))(v12, a1, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 142LL;
    goto LABEL_6;
  }
  v8 = 0;
LABEL_8:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}

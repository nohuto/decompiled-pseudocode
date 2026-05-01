/*
 * XREFs of MsixvcAddPackageAsync @ 0x180004C80
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
__int64 __fastcall MsixvcAddPackageAsync(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp-68h] BYREF
  HSTRING_HEADER v18; // [rsp+58h] [rbp-60h] BYREF
  HSTRING v19; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v17 = 0LL;
  v19 = 0LL;
  v9 = WindowsCreateStringReference(L"Windows.Management.Deployment.Internal.PackageManagerInternal", 0x3Du, &v18, &v19);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
    JUMPOUT(0x180004DBCLL);
  }
  v12 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>>(
          v19,
          &v17);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 27LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_8;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, __int64, __int64, __int64))(*(_QWORD *)v17 + 184LL))(
          v17,
          a1,
          0LL,
          a2,
          3,
          a3,
          a4,
          a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 35LL;
    goto LABEL_6;
  }
  v13 = 0;
LABEL_8:
  v19 = 0LL;
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v13;
}

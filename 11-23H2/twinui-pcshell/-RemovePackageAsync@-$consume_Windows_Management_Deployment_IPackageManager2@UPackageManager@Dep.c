/*
 * XREFs of ?RemovePackageAsync@?$consume_Windows_Management_Deployment_IPackageManager2@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4RemovalOptions@Deployment@Management@Windows@3@@Z @ 0x1806979C8
 * Callers:
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x180241670 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Management_Deployment_IPackageManager2<winrt::Windows::Management::Deployment::PackageManager>::RemovePackageAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  signed int v9; // eax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v7 = *a1;
  if ( v7 )
  {
    v11 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v7)(
      v7,
      &winrt::impl::guid_v<winrt::Windows::Management::Deployment::IPackageManager2>,
      &v11);
    v7 = v11;
    v8 = v11;
  }
  else
  {
    v8 = 0LL;
  }
  v12 = v7;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, *a3, *a4, &v13);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  *a2 = v13;
  return a2;
}

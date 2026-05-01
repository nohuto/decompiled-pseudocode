/*
 * XREFs of ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1801290F4
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18012925C (-GetStoreAppPFN@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     WINRT_IMPL_HeapFree @ 0x1801892CC (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180189398 (WINRT_IMPL_GetProcessHeap.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaAvailability::IsCortanaPackageInstalled(CortanaAvailability *this, unsigned __int8 *a2)
{
  HSTRING v2; // rdi
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  int ActivationFactory; // eax
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rbx
  int v15; // eax
  HANDLE ProcessHeap; // rax
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-58h]
  _BYTE v21[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  LPVOID lpMem; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v24; // [rsp+48h] [rbp-30h] BYREF
  HSTRING v25; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v22 = 0LL;
  v25 = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &v24, &v25);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  else
  {
    v2 = v25;
  }
  ActivationFactory = RoGetActivationFactory(v2, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v22);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v20);
  CortanaExperienceHelpers::GetStoreAppPFN(&lpMem);
  if ( lpMem )
  {
    v21[0] = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID, _BYTE *))(*(_QWORD *)v22 + 360LL))(v22, 0LL, lpMem, v21);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x64,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)v10,
        v20);
    *(_BYTE *)this = v21[0];
    v14 = lpMem;
    if ( lpMem )
    {
      v15 = _InterlockedDecrement((volatile signed __int32 *)lpMem + 6);
      if ( v15 )
      {
        if ( v15 < 0 )
        {
          _o_terminate(retaddr, v11, v12, v13);
          __debugbreak();
          __debugbreak();
          JUMPOUT(0x1802BDBCELL);
        }
      }
      else
      {
        ProcessHeap = WINRT_IMPL_GetProcessHeap();
        WINRT_IMPL_HeapFree(ProcessHeap, 0, v14);
      }
      lpMem = 0LL;
    }
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return 0LL;
  }
  else
  {
    *(_BYTE *)this = 0;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&lpMem, v8, 0LL, v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    return 0LL;
  }
}

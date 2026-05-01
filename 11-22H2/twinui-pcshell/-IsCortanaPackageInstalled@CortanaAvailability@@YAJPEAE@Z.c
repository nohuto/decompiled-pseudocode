/*
 * XREFs of ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1800C5020
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800C5B20 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     WINRT_IMPL_HeapFree @ 0x1801C78CC (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x1801C79A4 (WINRT_IMPL_GetProcessHeap.c)
 *     ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801F1B3C (-GetStoreAppPFN@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18039E804 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaAvailability::IsCortanaPackageInstalled(CortanaAvailability *this, unsigned __int8 *a2)
{
  HSTRING v2; // rbx
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  int ActivationFactory; // eax
  int v8; // eax
  void *v9; // rbx
  int v10; // eax
  HANDLE ProcessHeap; // rax
  __int64 v12; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-58h]
  _BYTE v16[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  LPVOID lpMem; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  HSTRING string; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v17 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    v2 = string;
  }
  ActivationFactory = RoGetActivationFactory(v2, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v17);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v15);
  CortanaExperienceHelpers::GetStoreAppPFN(&lpMem);
  if ( lpMem )
  {
    v16[0] = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID, _BYTE *))(*(_QWORD *)v17 + 360LL))(v17, 0LL, lpMem, v16);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x64,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)v8,
        v15);
    *(_BYTE *)this = v16[0];
    v9 = lpMem;
    if ( lpMem )
    {
      v10 = _InterlockedDecrement((volatile signed __int32 *)lpMem + 6);
      if ( v10 )
      {
        if ( v10 < 0 )
          abort();
      }
      else
      {
        ProcessHeap = WINRT_IMPL_GetProcessHeap();
        WINRT_IMPL_HeapFree(ProcessHeap, 0, v9);
      }
      lpMem = 0LL;
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return 0LL;
  }
  else
  {
    *(_BYTE *)this = 0;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&lpMem);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    return 0LL;
  }
}

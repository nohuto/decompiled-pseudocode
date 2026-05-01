/*
 * XREFs of _lambda_1f326bb701f63fb223ffc5012580bf65_::operator() @ 0x18032C9C4
 * Callers:
 *     ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x18033746C (-QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA-AU-$pair@GG@std@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18032663C (--$GetActivationFactory@V-$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_1f326bb701f63fb223ffc5012580bf65_::operator()(_WORD **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, _QWORD, __int64, int *); // rdi
  unsigned int v6; // r8d
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int16 v16; // rax^4
  int v18; // [rsp+30h] [rbp-50h] BYREF
  int v19[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v21 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Package",
    0x29u,
    0x28u);
  v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
         v24,
         &v21);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_QWORD *)v19 = 0LL;
    v4 = v21;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int *))(*(_QWORD *)v21 + 488LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v19);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (__int64)&hstringHeader,
           (const WCHAR **)&c_GamingOverlayPfn,
           v6);
    v8 = v5(v4, 0LL, *(_QWORD *)(v7 + 24), 1LL, v19);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 1716LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)v9);
LABEL_17:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v19);
      goto LABEL_18;
    }
    v18 = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v19 + 56LL))(*(_QWORD *)v19, &v18);
    v3 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 1719LL;
      goto LABEL_9;
    }
    if ( v18 != 1 )
    {
      v3 = -2147418113;
      v9 = 2147549183LL;
      v10 = 1720LL;
      goto LABEL_9;
    }
    v20 = 0LL;
    v12 = *(_QWORD *)v19;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v19 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    v14 = v13(v12, 0LL, &v20);
    v3 = v14;
    if ( v14 >= 0 )
    {
      v22 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 160LL))(v20, &v22);
      v3 = v14;
      if ( v14 >= 0 )
      {
        v16 = WORD2(v22);
        **a1 = HIWORD(v22);
        *a1[1] = v16;
        v3 = 0;
        goto LABEL_16;
      }
      v15 = 1726LL;
    }
    else
    {
      v15 = 1723LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_16:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6AD,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  return v3;
}

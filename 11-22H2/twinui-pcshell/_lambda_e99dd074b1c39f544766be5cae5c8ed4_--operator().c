/*
 * XREFs of _lambda_e99dd074b1c39f544766be5cae5c8ed4_::operator() @ 0x180217AF8
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_e99dd074b1c39f544766be5cae5c8ed4___ @ 0x1802165C0 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_e99dd074b1c39f544766be5cae5c8ed4___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e99dd074b1c39f544766be5cae5c8ed4_::operator()(__int64 *a1, HWND a2)
{
  __int64 v4; // r14
  __m128i v5; // xmm0
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // r10d
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 *v24; // [rsp+50h] [rbp-29h] BYREF
  int v25; // [rsp+58h] [rbp-21h] BYREF
  int v26; // [rsp+60h] [rbp-19h] BYREF
  int *v27; // [rsp+68h] [rbp-11h]
  int v28; // [rsp+70h] [rbp-9h]
  __int64 *v29; // [rsp+78h] [rbp-1h] BYREF
  int v30; // [rsp+80h] [rbp+7h]
  int v31; // [rsp+84h] [rbp+Bh]
  _DWORD v32[4]; // [rsp+88h] [rbp+Fh] BYREF
  struct tagRECT Rect; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v26 = 18;
  v27 = &v25;
  v28 = 4;
  if ( GetPropW(a2, L"DesktopWindow")
    && IsWindowVisible(a2)
    && (unsigned int)GetWindowCompositionAttribute(a2, &v26)
    && !v25 )
  {
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v4 = *a1;
    v5 = *(__m128i *)(*a1 + 184);
    v32[0] = _mm_cvtsi128_si32(v5) - Rect.left;
    v32[2] = v5.m128i_i32[2] - Rect.left;
    v32[3] = v5.m128i_i32[3] - Rect.top;
    v32[1] = v5.m128i_i32[1] - Rect.top;
    v24 = 0LL;
    v6 = *(_QWORD *)(v4 + 56);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *))(*(_QWORD *)v6 + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v24);
    v8 = v7(v6, *(_QWORD *)a1[1], a2, 0LL, 0LL, v32, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (__int64 *)&v24);
    if ( v8 >= 0 )
    {
      v9 = *v24;
      v10 = *(_DWORD *)(v4 + 196);
      v11 = *(_DWORD *)(v4 + 188);
      v12 = *(_DWORD *)(v4 + 192);
      v13 = *(_DWORD *)(v4 + 184);
      v29 = 0LL;
      v30 = v12 - v13;
      v31 = v10 - v11;
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 **, _QWORD, _QWORD))(v9 + 24))(v24, &v29, 0LL, 0LL);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2F7,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v14);
      LOBYTE(v15) = 1;
      v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*v24 + 152))(v24, 0LL, v15);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2F8,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v16);
      v17 = (_QWORD *)a1[2];
      v18 = (__int64)v24;
      v29 = v24;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
      v19 = 0;
      v20 = v17[1];
      if ( v20 != v17[3]
        || (v19 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    v17,
                    v20 + 1),
            v19 >= 0) )
      {
        v21 = v17[1];
        v17[1] = v21 + 1;
        v22 = (__int64 *)(*v17 + 8 * v21);
        if ( v22 )
        {
          *v22 = 0LL;
          if ( v22 != (__int64 *)&v29 )
          {
            *v22 = v18;
            v29 = 0LL;
          }
        }
      }
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2F9,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v29);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2F5,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v24);
  }
  return 1LL;
}

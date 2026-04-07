/*
 * XREFs of ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x180018B74
 * Callers:
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x180018750 (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180018F98 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18001921C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800192A8 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDWriteText::CreateTextFormat(CDWriteText *this)
{
  int v2; // r12d
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64 *); // rdi
  int v5; // eax
  unsigned int v6; // edi
  int UserDefaultLocaleName; // esi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, char *, __int64 *); // rbx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // r8
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, _QWORD *, _QWORD, _QWORD); // rbx
  _QWORD *v22; // rdx
  int v23; // eax
  __int64 v25; // rdx
  _WORD *v26; // rdi
  __int64 i; // rcx
  int v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  int v33; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v37[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-60h]
  _QWORD v40[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v41; // [rsp+D0h] [rbp-38h] BYREF
  WCHAR LocaleName[88]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v2 = 0;
  v35 = 0LL;
  v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
  v5 = v4(v3, &v35);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v5,
      v28);
    goto LABEL_24;
  }
  v29 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  UserDefaultLocaleName = GetUserDefaultLocaleName(LocaleName, 85);
  std::wstring::wstring(v40, L"Segoe UI");
  v8 = 400;
  v9 = v35;
  v10 = *(int (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v35 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  if ( v10(v9, (char *)this + 328, &v29) >= 0 )
  {
    v11 = v29;
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    v13 = v12(v11, &v32);
    v6 = v13;
    if ( v13 < 0 )
    {
      v25 = 233LL;
    }
    else
    {
      v14 = v32;
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      v13 = v15(v14, &v31);
      v6 = v13;
      if ( v13 < 0 )
      {
        v25 = 234LL;
      }
      else
      {
        LODWORD(v30) = 0;
        v33 = 0;
        if ( !UserDefaultLocaleName )
          goto LABEL_33;
        v13 = (*(__int64 (__fastcall **)(__int64, WCHAR *, __int64 *, int *))(*(_QWORD *)v31 + 32LL))(
                v31,
                LocaleName,
                &v30,
                &v33);
        v6 = v13;
        if ( v13 < 0 )
        {
          v25 = 242LL;
          goto LABEL_28;
        }
        if ( v33 )
        {
          v16 = (unsigned int)v30;
        }
        else
        {
LABEL_33:
          v13 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *, int *))(*(_QWORD *)v31 + 32LL))(
                  v31,
                  L"en-us",
                  &v30,
                  &v33);
          v6 = v13;
          if ( v13 < 0 )
          {
            v25 = 246LL;
            goto LABEL_28;
          }
          v16 = v33 != 0 ? (unsigned int)v30 : 0;
          LODWORD(v30) = v33 != 0 ? v30 : 0;
        }
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v31 + 56LL))(v31, v16, &v34);
        v6 = v13;
        if ( v13 >= 0 )
        {
          v37[0] = 0LL;
          v38 = 0LL;
          v39 = 7LL;
          if ( v34 )
          {
            v18 = v34;
            if ( v34 <= 7uLL )
            {
              v38 = v34;
              v26 = v37;
              for ( i = v34; i; --i )
                *v26++ = 0;
              *((_WORD *)v37 + v18) = 0;
            }
            else
            {
              LOBYTE(v17) = 0;
              std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
                v37,
                v34,
                v17,
                v34);
            }
            v19 = v37;
            if ( v39 >= 8 )
              v19 = (_QWORD *)v37[0];
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)v31 + 64LL))(
              v31,
              (unsigned int)v30,
              v19,
              v34 + 1);
          }
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
          v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29);
          if ( *((_DWORD *)this + 82) && (float)*((int *)this + 82) >= 0.0 )
            (*(void (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v29 + 88LL))(v29, &v41);
          std::wstring::_Tidy_deallocate(v37);
          goto LABEL_20;
        }
        v25 = 257LL;
      }
    }
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v13,
      v28);
LABEL_30:
    std::wstring::_Tidy_deallocate(v40);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
    goto LABEL_24;
  }
LABEL_20:
  v36 = 0LL;
  v20 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v20 + 120LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 280);
  v22 = v40;
  if ( v40[3] >= 8uLL )
    v22 = (_QWORD *)v40[0];
  v23 = v21(v20, v22, 0LL, v8);
  v6 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v23,
      v2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    goto LABEL_30;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  std::wstring::_Tidy_deallocate(v40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  v6 = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
  return v6;
}

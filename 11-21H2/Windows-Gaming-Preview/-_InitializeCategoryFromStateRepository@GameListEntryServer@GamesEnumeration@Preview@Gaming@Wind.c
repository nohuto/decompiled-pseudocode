/*
 * XREFs of ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002B68C
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BE4C (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18001362C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180029448 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     atexit @ 0x18004AC58 (atexit.c)
 *     _Init_thread_footer @ 0x18004AEF0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004AF58 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=59
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT v8; // eax
  int ActivationFactory; // eax
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  HRESULT v15; // eax
  int v16; // eax
  int v17; // eax
  HRESULT v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _BYTE v37[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v38; // [rsp+48h] [rbp-31h] BYREF
  __int64 v39; // [rsp+50h] [rbp-29h] BYREF
  __int64 v40; // [rsp+58h] [rbp-21h] BYREF
  __int64 v41; // [rsp+60h] [rbp-19h] BYREF
  __int64 v42; // [rsp+68h] [rbp-11h] BYREF
  __int64 v43; // [rsp+70h] [rbp-9h] BYREF
  __int64 v44; // [rsp+78h] [rbp-1h] BYREF
  __int64 v45; // [rsp+80h] [rbp+7h] BYREF
  HSTRING v46; // [rsp+88h] [rbp+Fh] BYREF
  int v47; // [rsp+90h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+B0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = 0LL;
  v45 = 0LL;
  v3 = *((_QWORD *)this + 32);
  if ( !v3 )
    goto LABEL_57;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, &v45);
  v2 = v45;
  if ( v4 < 0 || !v45 )
    goto LABEL_57;
  v46 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v45 + 56LL);
  WindowsDeleteString(0LL);
  v46 = 0LL;
  v6 = v5(v2, &v46);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v40 = 0LL;
    string = 0LL;
    v8 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_07adcc9a_e505_48c2_b471_45af8561f6af, &v40);
      v7 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x130,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)ActivationFactory);
LABEL_65:
        v36 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        goto LABEL_67;
      }
      v41 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v40 + 264LL))(v40, v46, &v41);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = (unsigned int)v10;
        v12 = 309LL;
LABEL_62:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)v11);
LABEL_63:
        v35 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
        goto LABEL_65;
      }
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 56LL))(v41, &v47) < 0 || !v47 )
      {
        v7 = -2147418113;
        v11 = 2147549183LL;
        v12 = 312LL;
        goto LABEL_62;
      }
      v44 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, 0LL, &v44);
      v7 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13D,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v13);
LABEL_37:
        v26 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        goto LABEL_63;
      }
      v43 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 96LL))(v44, &v43);
      v7 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x140,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v14);
LABEL_35:
        v25 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        goto LABEL_37;
      }
      v39 = 0LL;
      string = 0LL;
      v15 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string);
      if ( v15 >= 0 )
      {
        v16 = RoGetActivationFactory(string, &GUID_84103ccb_2fd7_4d6c_962e_5d8582b4c720, &v39);
        v7 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x149,
            (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v16);
LABEL_33:
          v24 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          goto LABEL_35;
        }
        v42 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 112LL))(v39, &v42);
        v7 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14C,
            (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v17);
LABEL_31:
          v23 = v42;
          if ( v42 )
          {
            v42 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
          goto LABEL_33;
        }
        v38 = 0LL;
        string = 0LL;
        v18 = WindowsCreateStringReference(
                L"Windows.Internal.StateRepository.PackagePolicy",
                0x2Eu,
                &hstringHeader,
                &string);
        if ( v18 >= 0 )
        {
          v19 = RoGetActivationFactory(string, &GUID_93b105c2_0759_4c56_b8da_6e8f72ac464e, &v38);
          v7 = v19;
          if ( v19 < 0 )
          {
            v20 = 337LL;
            goto LABEL_29;
          }
          v21 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
          if ( dword_180062F5C > *(_DWORD *)(v21 + 4) )
          {
            Init_thread_header(&dword_180062F5C);
            if ( dword_180062F5C == -1 )
            {
              Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &stru_180062F60,
                (const WCHAR **)&off_180053E88);
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__appCategoryString__);
              Init_thread_footer(&dword_180062F5C);
            }
          }
          if ( dword_180062F80 > *(_DWORD *)(v21 + 4) )
          {
            Init_thread_header(&dword_180062F80);
            if ( dword_180062F80 == -1 )
            {
              Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &stru_180062F88,
                (const WCHAR **)off_180053E80);
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__gameString__);
              Init_thread_footer(&dword_180062F80);
            }
          }
          v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v38 + 264LL))(
                  v38,
                  v42,
                  v43,
                  qword_180062F78,
                  *(_QWORD *)&qword_180062FA0,
                  v37);
          v7 = v19;
          if ( v19 < 0 )
          {
            v20 = 348LL;
LABEL_29:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v20,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v19);
            v22 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            }
            goto LABEL_31;
          }
          if ( v37[0] )
            *((_DWORD *)this + 36) = 1;
          v27 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v28 = v42;
          if ( v42 )
          {
            v42 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          }
          v29 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          v31 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          v32 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v33 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
          WindowsDeleteString(v46);
          v2 = v45;
LABEL_57:
          v7 = 0;
          goto LABEL_58;
        }
LABEL_72:
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
        __debugbreak();
      }
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    goto LABEL_72;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x127,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v6);
LABEL_67:
  WindowsDeleteString(v46);
  v2 = v45;
LABEL_58:
  if ( v2 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v7;
}

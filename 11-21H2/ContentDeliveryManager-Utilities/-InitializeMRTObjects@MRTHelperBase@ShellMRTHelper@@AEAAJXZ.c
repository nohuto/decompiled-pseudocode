/*
 * XREFs of ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x1800D9B84
 * Callers:
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800DA118 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180027420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800324E8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D9B04 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellMRTHelper::MRTHelperBase::InitializeMRTObjects(
        ShellMRTHelper::MRTHelperBase *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // r14
  char v6; // al
  __int64 v7; // rcx
  HRESULT Instance; // edi
  __int64 v9; // rdx
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  HRESULT v14; // eax
  int v15; // esi
  PWSTR v16; // rcx
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, GUID *, char *); // r15
  _QWORD *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, GUID *, __int64 *); // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  const wchar_t *v42; // r8
  int v43; // ecx
  int v44; // ecx
  const wchar_t *v45; // rdx
  int v46; // eax
  unsigned int v47; // ebx
  unsigned int v48; // eax
  __int64 v49; // r8
  unsigned int v50; // eax
  __int64 v51; // r8
  int ppv; // [rsp+20h] [rbp-40h]
  PWSTR ppszPathOut[3]; // [rsp+30h] [rbp-30h] BYREF
  WCHAR String2[8]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v5 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return 0LL;
  if ( *((_BYTE *)this + 45) || (v6 = 1, *((_BYTE *)this + 46)) )
    v6 = 0;
  if ( v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      142LL,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
      a4);
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Instance = CoCreateInstance(
               &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
               0LL,
               1u,
               &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
               (LPVOID *)this);
  if ( Instance < 0 )
  {
    v9 = 144LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v11 = 2;
  if ( *((_BYTE *)this + 45) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 40LL))(
               *(_QWORD *)this,
               *((_QWORD *)this + 6));
  }
  else
  {
    wcscpy(String2, L".pri");
    v12 = *((_QWORD *)this + 10);
    if ( v12 == -1LL )
    {
      v13 = *((_QWORD *)this + 9);
      if ( v13 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( *(_WORD *)(v13 + 2 * v12) );
      }
      else
      {
        v12 = 0LL;
      }
      *((_QWORD *)this + 10) = v12;
    }
    if ( v12 <= 4 || CompareStringOrdinal((LPCWCH)(*((_QWORD *)this + 9) - 8LL + 2 * v12), 4, String2, 4, 1) != 2 )
    {
      ppszPathOut[0] = 0LL;
      ppszPathOut[1] = (PWSTR)-1LL;
      ppszPathOut[2] = (PWSTR)-1LL;
      v14 = PathAllocCombine(*((PCWSTR *)this + 9), L"resources.pri", 0, ppszPathOut);
      v15 = v14;
      if ( v14 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, PWSTR))(**(_QWORD **)this + 48LL))(*(_QWORD *)this, ppszPathOut[0]);
        v16 = ppszPathOut[0];
        if ( v15 >= 0 )
        {
          if ( ppszPathOut[0] )
            LocalFree(ppszPathOut[0]);
LABEL_33:
          v17 = *(_QWORD *)this;
          v18 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(**(_QWORD **)this + 72LL);
          v19 = (_QWORD *)((char *)this + 16);
          v20 = *((_QWORD *)this + 2);
          if ( v20 )
          {
            *v19 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          v15 = v18(v17, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, (char *)this + 16);
          if ( v15 < 0 )
          {
            v21 = 169LL;
LABEL_37:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v21,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
              (const char *)(unsigned int)v15);
            return (unsigned int)v15;
          }
          v22 = *(_QWORD *)this;
          v23 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)this + 56LL);
          v24 = *v5;
          if ( *v5 )
          {
            *v5 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v15 = v23(v22, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, v5);
          if ( v15 < 0 )
          {
            v21 = 170LL;
            goto LABEL_37;
          }
          if ( !*((_WORD *)this + 21) )
            goto LABEL_77;
          v25 = **((_QWORD **)this + 2);
          if ( *((_BYTE *)this + 43) )
          {
            Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v25 + 112))(
                         *((_QWORD *)this + 2),
                         *((unsigned __int16 *)this + 20));
            if ( Instance < 0 )
            {
              v9 = 176LL;
              goto LABEL_10;
            }
LABEL_77:
            if ( *((_BYTE *)this + 44) )
            {
              Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v19 + 128LL))(
                           *v19,
                           *((unsigned int *)this + 7));
              if ( Instance < 0 )
              {
                v9 = 186LL;
                goto LABEL_10;
              }
            }
            v40 = *((_DWORD *)this + 8);
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                if ( v41 != 1 )
                {
                  v50 = wil::verify_hresult<long>(0x8000FFFF);
                  wil::details::in1diag3::FailFast_Hr(retaddr, 202LL, v51, (const char *)v50, ppv);
                }
                v42 = L"light";
              }
              else
              {
                v42 = L"dark";
              }
              Instance = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, const wchar_t *))(*(_QWORD *)*v19 + 144LL))(
                           *v19,
                           L"Theme",
                           v42);
              if ( Instance < 0 )
              {
                v9 = 207LL;
                goto LABEL_10;
              }
            }
            v43 = *((_DWORD *)this + 9);
            if ( v43 )
            {
              v44 = v43 - 1;
              if ( v44 )
              {
                if ( v44 != 1 )
                {
                  v48 = wil::verify_hresult<long>(0x8000FFFF);
                  wil::details::in1diag3::FailFast_Hr(retaddr, 224LL, v49, (const char *)v48, ppv);
                }
                v45 = L"lightunplated";
              }
              else
              {
                v45 = L"unplated";
              }
              v46 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *))(*(_QWORD *)*v19 + 136LL))(*v19, v45);
              v47 = v46;
              if ( v46 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xE5,
                  (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
                  (const char *)(unsigned int)v46);
                return v47;
              }
            }
            return 0LL;
          }
          v26 = *((_DWORD *)this + 6);
          if ( v26 > 200 )
          {
            v34 = v26 - 225;
            if ( !v34 )
            {
              v11 = 6;
              goto LABEL_75;
            }
            v35 = v34 - 25;
            if ( !v35 )
            {
              v11 = 12;
              goto LABEL_75;
            }
            v36 = v35 - 50;
            if ( !v36 )
            {
              v11 = 13;
              goto LABEL_75;
            }
            v37 = v36 - 50;
            if ( !v37 || (v38 = v37 - 50) == 0 )
            {
              v11 = 14;
              goto LABEL_75;
            }
            v39 = v38 - 50;
            if ( !v39 || v39 == 50 )
            {
              v11 = 15;
              goto LABEL_75;
            }
          }
          else
          {
            if ( v26 == 200 )
            {
LABEL_57:
              v11 = 9;
              goto LABEL_75;
            }
            v27 = v26 - 100;
            if ( v27 )
            {
              v28 = v27 - 20;
              if ( v28 )
              {
                v29 = v28 - 5;
                if ( v29 )
                {
                  v30 = v29 - 15;
                  if ( v30 )
                  {
                    v31 = v30 - 10;
                    if ( v31 )
                    {
                      v32 = v31 - 10;
                      if ( v32 )
                      {
                        v33 = v32 - 15;
                        if ( v33 )
                        {
                          if ( v33 == 5 )
                            goto LABEL_75;
                          goto LABEL_56;
                        }
                        goto LABEL_57;
                      }
                      v11 = 5;
                    }
                    else
                    {
                      v11 = 4;
                    }
                  }
                  else
                  {
                    v11 = 1;
                  }
                }
                else
                {
                  v11 = 8;
                }
              }
              else
              {
                v11 = 7;
              }
LABEL_75:
              Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v25 + 120))(*((_QWORD *)this + 2), v11);
              if ( Instance < 0 )
              {
                v9 = 180LL;
                goto LABEL_10;
              }
              goto LABEL_77;
            }
          }
LABEL_56:
          v11 = 0;
          goto LABEL_75;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA5,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v14);
        v16 = ppszPathOut[0];
      }
      if ( v16 )
        LocalFree(v16);
      return (unsigned int)v15;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 48LL))(
               *(_QWORD *)this,
               *((_QWORD *)this + 9));
  }
  if ( (int)result >= 0 )
    goto LABEL_33;
  return result;
}

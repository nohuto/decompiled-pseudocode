/*
 * XREFs of ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x1800351A4
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180034ED0 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionPropertyStore::LoadPropertyStore(HKEY *this)
{
  DWORD v1; // r12d
  DWORD v2; // edx
  HKEY i; // rcx
  unsigned int v4; // eax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  RPC_STATUS v7; // eax
  unsigned int v8; // edi
  HKEY v9; // rsi
  DWORD LastError; // ebx
  CAudioSessionPropertyStore *v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  void *v15; // r15
  _QWORD *v16; // r14
  DWORD v17; // r13d
  unsigned int v18; // eax
  char *v19; // rax
  char *v20; // rsi
  __int64 v21; // xmm0_8
  unsigned __int64 v22; // r12
  SAFEARRAY *v23; // rax
  SAFEARRAY *v24; // rbx
  LONG v25; // edi
  char *v26; // rdx
  char *v27; // r13
  int v28; // xmm6_4
  HRESULT LBound; // eax
  HRESULT UBound; // eax
  LPVOID v31; // rax
  char *v32; // r12
  __int64 v33; // rcx
  _WORD *v34; // rax
  SIZE_T v35; // rdi
  LPVOID v36; // rax
  SIZE_T v37; // rdi
  _WORD *v38; // rcx
  SIZE_T v39; // rdx
  __int16 v40; // ax
  _WORD *v41; // rax
  char *v42; // r12
  __int64 v43; // rdx
  _BYTE *v44; // rax
  __int64 v45; // rdi
  LPVOID v46; // rax
  char *v47; // rcx
  __int64 v48; // rdx
  char v49; // al
  char *v50; // rax
  BSTR v51; // rax
  CAudioSessionPropertyStore *v52; // rax
  bool v53; // sf
  HKEY v54; // rcx
  HKEY v56; // rcx
  HKEY v57; // rcx
  HKEY v58; // rcx
  HKEY hKey; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cchName; // [rsp+70h] [rbp-98h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+74h] [rbp-94h] BYREF
  DWORD cbData; // [rsp+78h] [rbp-90h] BYREF
  DWORD v63; // [rsp+7Ch] [rbp-8Ch]
  DWORD cbMaxValueLen; // [rsp+80h] [rbp-88h] BYREF
  LONG plLbound; // [rsp+84h] [rbp-84h] BYREF
  LONG plUbound; // [rsp+88h] [rbp-80h] BYREF
  DWORD v67; // [rsp+8Ch] [rbp-7Ch]
  DWORD cValues; // [rsp+90h] [rbp-78h] BYREF
  CAudioSessionPropertyStore *v69; // [rsp+98h] [rbp-70h]
  char *v70; // [rsp+A0h] [rbp-68h]
  SAFEARRAYBOUND rgsabound; // [rsp+A8h] [rbp-60h] BYREF
  GUID pclsid; // [rsp+B0h] [rbp-58h] BYREF
  WCHAR Name[104]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v69 = (CAudioSessionPropertyStore *)this;
  v1 = 0;
  v63 = 0;
  v2 = 0;
  for ( i = this[7]; ; i = (HKEY)*((_QWORD *)v11 + 7) )
  {
    cchName = 100;
    v4 = RegEnumKeyExW(i, v2, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
    if ( v4 == 259 )
      return 0LL;
    if ( v4 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               859LL,
               (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
               (const char *)v4);
    v5 = CLSIDFromString(Name, &pclsid);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35E,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    hKey = 0LL;
    v7 = RpcImpersonateClient(0LL);
    v8 = v7;
    if ( v7 && v7 != 1725 )
    {
      v53 = v7 < 0;
      if ( v7 > 0 )
      {
        v8 = (unsigned __int16)v7 | 0x80070000;
        v53 = 1;
      }
      if ( v53 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x366,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v8);
      v54 = hKey;
      if ( !hKey )
        return v8;
      goto LABEL_88;
    }
    v9 = hKey;
    if ( hKey )
    {
      LastError = GetLastError();
      RegCloseKey(v9);
      SetLastError(LastError);
    }
    hKey = 0LL;
    v11 = v69;
    v12 = RegOpenKeyExW(*((HKEY *)v69 + 7), Name, 0, 0x20019u, &hKey);
    if ( v12 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             872LL,
             (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
             (const char *)v12);
      if ( !v8 )
        RpcRevertToSelf();
      v58 = hKey;
      if ( hKey )
        goto LABEL_151;
      return v6;
    }
    if ( !v8 )
      RpcRevertToSelf();
    v13 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, &cbMaxValueLen, 0LL, 0LL);
    if ( v13 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             879LL,
             (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
             (const char *)v13);
      v58 = hKey;
      if ( hKey )
        goto LABEL_151;
      return v6;
    }
    v14 = 2LL * ++cbMaxValueNameLen;
    if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v15 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x374,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      v54 = hKey;
      if ( !hKey )
        return v8;
      goto LABEL_88;
    }
    v16 = operator new[](cbMaxValueLen, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v16 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x377,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      operator delete(v15);
      v54 = hKey;
      if ( !hKey )
        return v8;
      goto LABEL_88;
    }
    v17 = 0;
    v67 = 0;
    if ( cValues )
      break;
LABEL_79:
    operator delete(v16);
    operator delete(v15);
    if ( hKey )
      RegCloseKey(hKey);
    v63 = ++v1;
    v2 = v1;
  }
  while ( 1 )
  {
    cchName = cbMaxValueNameLen;
    cbData = cbMaxValueLen;
    v18 = RegEnumValueW(hKey, v17, (LPWSTR)v15, &cchName, 0LL, 0LL, (LPBYTE)v16, &cbData);
    if ( v18 == 259 )
    {
      v11 = v69;
      goto LABEL_78;
    }
    if ( v18 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             897LL,
             (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
             (const char *)v18);
      operator delete(v16);
      operator delete(v15);
      v58 = hKey;
      if ( hKey )
        goto LABEL_151;
      return v6;
    }
    v19 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v19;
    if ( !v19 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x384,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      operator delete(v16);
      operator delete(v15);
      v54 = hKey;
      if ( !hKey )
        return v8;
      goto LABEL_88;
    }
    *((_QWORD *)v19 + 6) = *((_QWORD *)v69 + 6);
    *((_DWORD *)v19 + 4) = _o__wtoi(v15);
    *(GUID *)v20 = pclsid;
    v21 = v16[2];
    *(_OWORD *)(v20 + 24) = *(_OWORD *)v16;
    *((_QWORD *)v20 + 5) = v21;
    switch ( *((_WORD *)v20 + 12) )
    {
      case 8:
        v51 = SysAllocString((const OLECHAR *)((char *)v16 + *((_QWORD *)v20 + 4)));
        *((_QWORD *)v20 + 4) = v51;
        if ( !v51 )
        {
          v8 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3D5,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x8007000ELL);
          operator delete(v20);
          operator delete(v16);
          operator delete(v15);
          v54 = hKey;
          if ( !hKey )
            return v8;
          goto LABEL_88;
        }
        goto LABEL_76;
      case 0x1E:
        v42 = (char *)v16 + *((_QWORD *)v20 + 4);
        if ( !v42 )
        {
          v6 = -2147024809;
LABEL_134:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3DD,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)v6);
          operator delete(v20);
          operator delete(v16);
          operator delete(v15);
          v58 = hKey;
          if ( hKey )
            goto LABEL_151;
          return v6;
        }
        v43 = 0x7FFFFFFFLL;
        v44 = (char *)v16 + *((_QWORD *)v20 + 4);
        do
        {
          if ( !*v44 )
            break;
          ++v44;
          --v43;
        }
        while ( v43 );
        v45 = (0x7FFFFFFF - v43) & -(__int64)(v43 != 0);
        v6 = v43 == 0 ? 0x80070057 : 0;
        if ( !v43 )
          goto LABEL_134;
        v46 = CoTaskMemAlloc((0x7FFFFFFF - v43) & -(__int64)(v43 != 0));
        if ( !v46 )
        {
          v8 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E0,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x8007000ELL);
          operator delete(v20);
          operator delete(v16);
          operator delete(v15);
          v54 = hKey;
          if ( hKey )
            goto LABEL_88;
          return v8;
        }
        *((_QWORD *)v20 + 4) = v46;
        if ( (unsigned __int64)(v45 - 1) > 0x7FFFFFFE )
        {
          v6 = -2147024809;
          if ( v45 )
            MEMORY[0] = 0;
LABEL_129:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E3,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)v6);
          operator delete(v20);
          operator delete(v16);
          operator delete(v15);
          v58 = hKey;
          if ( hKey )
LABEL_151:
            RegCloseKey(v58);
          return v6;
        }
        v47 = 0LL;
        if ( v45 )
        {
          v48 = 2147483646 - v45;
          do
          {
            if ( !(v45 + v48) )
              break;
            v49 = v42[(_QWORD)v47];
            if ( !v49 )
              break;
            *v47++ = v49;
            --v45;
          }
          while ( v45 );
        }
        v50 = v47 - 1;
        if ( v45 )
          v50 = v47;
        *v50 = 0;
        v6 = v45 == 0 ? 0x8007007A : 0;
        if ( !v45 )
          goto LABEL_129;
        goto LABEL_76;
      case 0x1F:
        v32 = (char *)v16 + *((_QWORD *)v20 + 4);
        if ( !v32 )
        {
          v6 = -2147024809;
LABEL_125:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3C5,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)v6);
          operator delete(v20);
          operator delete(v16);
          operator delete(v15);
          v58 = hKey;
          if ( hKey )
            goto LABEL_151;
          return v6;
        }
        v33 = 0x3FFFFFFFLL;
        v34 = (_WORD *)((char *)v16 + *((_QWORD *)v20 + 4));
        do
        {
          if ( !*v34 )
            break;
          ++v34;
          --v33;
        }
        while ( v33 );
        v6 = v33 == 0 ? 0x80070057 : 0;
        if ( !v33 )
          goto LABEL_125;
        v35 = (2 * (0x3FFFFFFF - v33)) & -(__int64)(v33 != 0);
        v36 = CoTaskMemAlloc(v35);
        if ( !v36 )
        {
          v8 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3C8,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x8007000ELL);
          operator delete(v20);
          operator delete(v16);
          operator delete(v15);
          v54 = hKey;
          if ( hKey )
            goto LABEL_88;
          return v8;
        }
        *((_QWORD *)v20 + 4) = v36;
        v37 = v35 >> 1;
        if ( v37 - 1 > 0x7FFFFFFE )
        {
          v6 = -2147024809;
          if ( v37 )
            MEMORY[0] = 0;
LABEL_120:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3CB,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)v6);
          operator delete(v20);
          operator delete(v16);
          operator delete(v15);
          v58 = hKey;
          if ( hKey )
            goto LABEL_151;
          return v6;
        }
        v38 = 0LL;
        v39 = 2147483646 - v37;
        do
        {
          if ( !(v39 + v37) )
            break;
          v40 = *(_WORD *)((char *)v38 + (_QWORD)v32);
          if ( !v40 )
            break;
          *v38++ = v40;
          --v37;
        }
        while ( v37 );
        v41 = v38 - 1;
        if ( v37 )
          v41 = v38;
        *v41 = 0;
        v6 = v37 == 0 ? 0x8007007A : 0;
        if ( !v37 )
          goto LABEL_120;
        goto LABEL_76;
      case 0x41:
      case 0x46:
        v31 = CoTaskMemAlloc(*((unsigned int *)v20 + 8));
        if ( !v31 )
        {
          v8 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x393,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x8007000ELL);
          operator delete(v20);
          operator delete(v16);
          operator delete(v15);
          v54 = hKey;
          if ( hKey )
            goto LABEL_88;
          return v8;
        }
        *((_QWORD *)v20 + 5) = v31;
        memcpy_0(0LL, (char *)v16 + (_QWORD)v31, *((unsigned int *)v20 + 8));
        goto LABEL_76;
    }
    if ( *((_WORD *)v20 + 12) == 8196 )
      break;
LABEL_76:
    v52 = v69;
    *((_QWORD *)v69 + 6) = v20;
    v67 = ++v17;
    if ( v17 >= cValues )
    {
      v11 = v52;
LABEL_78:
      v1 = v63;
      goto LABEL_79;
    }
  }
  v22 = ((unsigned __int64)cbData - 24) >> 2;
  if ( (((_BYTE)cbData - 24) & 3) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A9,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80070057LL);
    operator delete(v20);
    operator delete(v16);
    operator delete(v15);
    v56 = hKey;
    if ( hKey )
      goto LABEL_114;
    return 2147942487LL;
  }
  v70 = (char *)v16 + *((_QWORD *)v20 + 4);
  rgsabound.cElements = ((unsigned __int64)cbData - 24) >> 2;
  rgsabound.lLbound = 0;
  v23 = SafeArrayCreate(4u, 1u, &rgsabound);
  v24 = v23;
  if ( !v23 )
  {
    v8 = -2147024882;
LABEL_108:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AD,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)v8);
    if ( v24 && SafeArrayUnlock(v24) >= 0 )
      SafeArrayDestroy(v24);
    operator delete(v20);
    operator delete(v16);
    operator delete(v15);
    v54 = hKey;
    if ( !hKey )
      return v8;
LABEL_88:
    RegCloseKey(v54);
    return v8;
  }
  v8 = SafeArrayLock(v23);
  if ( (v8 & 0x80000000) != 0 )
    goto LABEL_108;
  v25 = 0;
  if ( !v22 )
  {
LABEL_41:
    SafeArrayUnlock(v24);
    *((_QWORD *)v20 + 4) = v24;
    goto LABEL_76;
  }
  v26 = v70;
  while ( 1 )
  {
    v27 = v26 + 4;
    if ( v26 + 4 < v26 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x80070216LL);
      if ( SafeArrayUnlock(v24) >= 0 )
        SafeArrayDestroy(v24);
      operator delete(v20);
      operator delete(v16);
      operator delete(v15);
      v57 = hKey;
      if ( !hKey )
        return 2147942934LL;
LABEL_105:
      RegCloseKey(v57);
      return 2147942934LL;
    }
    if ( v27 < (char *)v16 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B4,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x80070216LL);
      if ( SafeArrayUnlock(v24) >= 0 )
        SafeArrayDestroy(v24);
      operator delete(v20);
      operator delete(v16);
      operator delete(v15);
      v57 = hKey;
      if ( !hKey )
        return 2147942934LL;
      goto LABEL_105;
    }
    if ( v27 - (char *)v16 > (unsigned __int64)cbData )
      break;
    v28 = *(_DWORD *)v26;
    plLbound = 0;
    LBound = SafeArrayGetLBound(v24, 1u, &plLbound);
    if ( LBound < 0 )
      ATL::AtlThrowImpl(LBound);
    LODWORD(v70) = plLbound;
    if ( v25 < plLbound )
      goto LABEL_90;
    plUbound = 0;
    UBound = SafeArrayGetUBound(v24, 1u, &plUbound);
    if ( UBound < 0 )
      ATL::AtlThrowImpl(UBound);
    if ( v25 > plUbound )
    {
LABEL_90:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B9,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x80070057LL);
      if ( SafeArrayUnlock(v24) >= 0 )
        SafeArrayDestroy(v24);
      operator delete(v20);
      operator delete(v16);
      operator delete(v15);
      v56 = hKey;
      if ( hKey )
        goto LABEL_114;
      return 2147942487LL;
    }
    *((_DWORD *)v24->pvData + v25 - (int)v70) = v28;
    v26 = v27;
    if ( (unsigned int)++v25 >= v22 )
    {
      v17 = v67;
      goto LABEL_41;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B6,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
    (const char *)0x80070057LL);
  if ( SafeArrayUnlock(v24) >= 0 )
    SafeArrayDestroy(v24);
  operator delete(v20);
  operator delete(v16);
  operator delete(v15);
  v56 = hKey;
  if ( hKey )
LABEL_114:
    RegCloseKey(v56);
  return 2147942487LL;
}

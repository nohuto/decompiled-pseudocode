/*
 * XREFs of ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180036274
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180034ED0 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002BBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800340B4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180034568 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall OpenSessionKey(struct IAudioSessionInfo *a1, HKEY a2, HKEY *a3)
{
  HKEY v3; // r13
  RPC_STATUS v5; // eax
  unsigned int v6; // ebx
  bool v7; // zf
  __int64 v9; // rax
  int v10; // eax
  _WORD *v11; // rcx
  int v12; // edx
  void *v13; // rcx
  unsigned int v14; // r15d
  __int64 v15; // rax
  LPCWSTR v16; // rdx
  void *v17; // rcx
  LPCWSTR v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // edi
  HKEY v21; // r15
  __int64 v22; // rax
  LPCWSTR v23; // rdx
  const unsigned __int16 *v24; // rbx
  int v25; // eax
  unsigned int v26; // edi
  void *v27; // rcx
  bool v28; // zf
  __int64 v29; // rcx
  HKEY v30; // rdi
  LSTATUS v31; // eax
  unsigned int v32; // r15d
  void *v33; // rcx
  void *v34; // rcx
  unsigned int ValueW; // eax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  void *v38; // r12
  unsigned int v39; // eax
  HKEY v40; // rax
  __int64 *v41; // rbp
  _DWORD *v42; // rbx
  ATL::CAtlException *v43; // rbx
  ATL::CAtlException *v44; // rbx
  __int64 *v45; // rdx
  __int64 v46; // [rsp+0h] [rbp-E8h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-A8h] BYREF
  char *v48; // [rsp+48h] [rbp-A0h]
  HKEY hkey; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v50; // [rsp+58h] [rbp-90h]
  DWORD pcbData; // [rsp+5Ch] [rbp-8Ch] BYREF
  char *v52; // [rsp+60h] [rbp-88h]
  RPC_STATUS *v53; // [rsp+68h] [rbp-80h]
  char v54; // [rsp+70h] [rbp-78h]
  LPCWSTR lpSubKey; // [rsp+78h] [rbp-70h] BYREF
  LPCWSTR v56; // [rsp+80h] [rbp-68h] BYREF
  HKEY phkResult; // [rsp+88h] [rbp-60h] BYREF
  ATL::CAtlException *v58; // [rsp+90h] [rbp-58h] BYREF
  ATL::CAtlException *v59; // [rsp+98h] [rbp-50h] BYREF
  ATL::CAtlException *v60; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  HKEY v63; // [rsp+100h] [rbp+18h] BYREF
  RPC_STATUS v64; // [rsp+108h] [rbp+20h] BYREF

  v63 = (HKEY)a3;
  v3 = (HKEY)a3;
  *a3 = 0LL;
  v5 = RpcImpersonateClient(0LL);
  v64 = v5;
  v53 = &v64;
  v54 = 1;
  if ( v5 && v5 != 1725 )
  {
    if ( v5 > 0 )
      v6 = (unsigned __int16)v5 | 0x80070000;
    else
      v6 = v5;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)v6);
    v7 = v64 == 0;
    goto LABEL_7;
  }
  v9 = *(_QWORD *)a1;
  pv = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *, LPVOID *))(v9 + 144))(a1, &pv);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v10);
    if ( pv )
      CoTaskMemFree(pv);
LABEL_13:
    v7 = v64 == 0;
    goto LABEL_7;
  }
  v50 = 0;
  v11 = pv;
  if ( !pv )
  {
    try
    {
      ATL::AtlThrowImpl(-2147467259);
    }
    catch ( ATL::CAtlException *v58 )
    {
      v45 = &v46;
      v41 = v45;
      v42 = (_DWORD *)v45[18];
      if ( *v42 == -1073741571 )
        _o__resetstkoflw();
      *((_DWORD *)v41 + 18) = *v42;
      v6 = (unsigned int)v48;
      if ( (int)v48 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11D,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v6);
        v13 = pv;
        if ( pv )
          CoTaskMemFree(v13);
        goto LABEL_13;
      }
      v3 = v63;
      goto LABEL_23;
    }
  }
  v12 = 0;
  while ( *v11 )
    v12 = (unsigned __int16)*v11++ + 33 * v12;
  v50 = v12;
LABEL_23:
  v14 = 0;
  for ( LODWORD(v48) = 0; ; LODWORD(v48) = v14 )
  {
    v15 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
    try
    {
      lpSubKey = (LPCWSTR)(v15 + 24);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (wchar_t **)&lpSubKey,
        L"%x_%d",
        v50,
        v14);
    }
    catch ( ATL::CAtlException *v59 )
    {
      v43 = v59;
      if ( *(_DWORD *)v59 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v52) = *(_DWORD *)v43;
      v6 = (unsigned int)v52;
      if ( (int)v52 >= 0 )
      {
        v3 = v63;
        v14 = (unsigned int)v48;
        goto LABEL_32;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v52);
      v16 = lpSubKey - 12;
      if ( _InterlockedDecrement((volatile signed __int32 *)lpSubKey - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
      v17 = pv;
      if ( pv )
LABEL_29:
        CoTaskMemFree(v17);
LABEL_30:
      v7 = *v53 == 0;
LABEL_7:
      if ( v7 )
        RpcRevertToSelf();
      return v6;
    }
LABEL_32:
    hkey = 0LL;
    v18 = lpSubKey;
    v19 = RegOpenKeyExW(a2, lpSubKey, 0, 0x2001Fu, &hkey);
    if ( v19 == 2 )
    {
      if ( hkey )
        RegCloseKey(hkey);
      if ( _InterlockedDecrement((volatile signed __int32 *)v18 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 - 3) + 8LL))(*((_QWORD *)v18 - 3));
      v20 = 0;
      LODWORD(v48) = 0;
      v21 = a2;
      while ( 1 )
      {
        v22 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
        try
        {
          v56 = (LPCWSTR)(v22 + 24);
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
            (wchar_t **)&v56,
            L"%x_%d",
            v50,
            v20);
        }
        catch ( ATL::CAtlException *v60 )
        {
          v44 = v60;
          if ( *(_DWORD *)v60 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v52) = *(_DWORD *)v44;
          v6 = (unsigned int)v52;
          if ( (int)v52 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x145,
              (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)(unsigned int)v52);
            v23 = v56 - 12;
            if ( _InterlockedDecrement((volatile signed __int32 *)v56 - 2) <= 0 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v23 + 8LL))(*(_QWORD *)v23);
            v17 = pv;
            if ( !pv )
              goto LABEL_30;
            goto LABEL_29;
          }
          v3 = v63;
          v20 = (unsigned int)v48;
          v21 = a2;
        }
        phkResult = 0LL;
        v24 = v56;
        if ( RegOpenKeyExW(v21, v56, 0, 0x20019u, &phkResult) )
          break;
        if ( phkResult )
          RegCloseKey(phkResult);
        if ( _InterlockedDecrement((volatile signed __int32 *)v24 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v24 - 3) + 8LL))(*((_QWORD *)v24 - 3));
        LODWORD(v48) = ++v20;
      }
      if ( phkResult )
        RegCloseKey(phkResult);
      v63 = 0LL;
      v25 = CreateLowRightsRegistryKey(v21, v24, 131103, &v63);
      v26 = v25;
      if ( v25 >= 0 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *((_WORD *)pv + v29) );
        v30 = v63;
        v31 = RegSetValueExW(v63, 0LL, 0, 1u, (const BYTE *)pv, 2 * v29 + 2);
        v32 = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x156,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)(unsigned int)v31);
          if ( v30 )
            RegCloseKey(v30);
          if ( _InterlockedDecrement((volatile signed __int32 *)v24 - 2) <= 0 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v24 - 3) + 8LL))(*((_QWORD *)v24 - 3));
          v33 = pv;
          if ( !pv )
            goto LABEL_98;
LABEL_97:
          CoTaskMemFree(v33);
LABEL_98:
          if ( !*v53 )
            RpcRevertToSelf();
          return v32;
        }
        *(_QWORD *)v3 = v30;
        if ( _InterlockedDecrement((volatile signed __int32 *)v24 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v24 - 3) + 8LL))(*((_QWORD *)v24 - 3));
        v34 = pv;
        if ( !pv )
          goto LABEL_108;
LABEL_107:
        CoTaskMemFree(v34);
LABEL_108:
        if ( !*v53 )
          RpcRevertToSelf();
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x152,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v25);
      if ( v63 )
        RegCloseKey(v63);
      if ( _InterlockedDecrement((volatile signed __int32 *)v24 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v24 - 3) + 8LL))(*((_QWORD *)v24 - 3));
      v27 = pv;
      if ( !pv )
        goto LABEL_60;
LABEL_59:
      CoTaskMemFree(v27);
LABEL_60:
      v28 = *v53 == 0;
LABEL_123:
      if ( v28 )
        RpcRevertToSelf();
      return v26;
    }
    if ( v19 )
    {
      v26 = wil::details::in1diag3::Return_Win32(
              retaddr,
              300LL,
              (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)v19);
      if ( hkey )
        RegCloseKey(hkey);
      if ( _InterlockedDecrement((volatile signed __int32 *)v18 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 - 3) + 8LL))(*((_QWORD *)v18 - 3));
      v27 = pv;
      if ( !pv )
        goto LABEL_60;
      goto LABEL_59;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    if ( ValueW )
    {
      v26 = wil::details::in1diag3::Return_Win32(
              retaddr,
              303LL,
              (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)ValueW);
      if ( hkey )
        RegCloseKey(hkey);
      if ( _InterlockedDecrement((volatile signed __int32 *)v18 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 - 3) + 8LL))(*((_QWORD *)v18 - 3));
      v27 = pv;
      if ( !pv )
        goto LABEL_60;
      goto LABEL_59;
    }
    v36 = ((unsigned __int64)pcbData >> 1) + 1;
    v37 = 2 * v36;
    if ( !is_mul_ok(v36, 2uLL) )
      v37 = -1LL;
    v38 = operator new[](v37, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v38 )
    {
      v26 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x132,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      if ( hkey )
        RegCloseKey(hkey);
      if ( _InterlockedDecrement((volatile signed __int32 *)v18 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 - 3) + 8LL))(*((_QWORD *)v18 - 3));
      if ( pv )
        CoTaskMemFree(pv);
      v28 = *v53 == 0;
      goto LABEL_123;
    }
    v39 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, v38, &pcbData);
    if ( v39 )
    {
      v32 = wil::details::in1diag3::Return_Win32(
              retaddr,
              308LL,
              (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)v39);
      operator delete(v38);
      if ( hkey )
        RegCloseKey(hkey);
      if ( _InterlockedDecrement((volatile signed __int32 *)v18 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 - 3) + 8LL))(*((_QWORD *)v18 - 3));
      v33 = pv;
      if ( pv )
        goto LABEL_97;
      goto LABEL_98;
    }
    if ( CompareStringW(0x7Fu, 1u, (PCNZWCH)pv, -1, (PCNZWCH)v38, -1) == 2 )
    {
      v40 = hkey;
      hkey = 0LL;
      *(_QWORD *)v3 = v40;
      operator delete(v38);
      if ( hkey )
        RegCloseKey(hkey);
      if ( _InterlockedDecrement((volatile signed __int32 *)v18 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 - 3) + 8LL))(*((_QWORD *)v18 - 3));
      v34 = pv;
      if ( pv )
        goto LABEL_107;
      goto LABEL_108;
    }
    operator delete(v38);
    if ( hkey )
      RegCloseKey(hkey);
    if ( _InterlockedDecrement((volatile signed __int32 *)v18 - 2) <= 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 - 3) + 8LL))(*((_QWORD *)v18 - 3));
    ++v14;
  }
}

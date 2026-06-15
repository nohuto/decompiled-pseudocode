/*
 * XREFs of ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x18003E79C
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUHKEY__@@@Z @ 0x18003CCF8 (--$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@M.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015A88 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015FAC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016084 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016F0C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18001A438 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001E1BC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180022D24 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180037D60 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x18003CF20 (--1-$unique_ptr@GU-$default_delete@G@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@Upropstoreinfo_tag@@U?$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ @ 0x18003CF44 (--1-$unique_ptr@Upropstoreinfo_tag@@U-$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ.c)
 *     ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x18003D8A0 (-Create@-$CComSafeArray@M$03@ATL@@QEAAJKJ@Z.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x18003FC74 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x18004002C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     memcpy_0 @ 0x180048B1C (memcpy_0.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::LoadPropertyStore(CAudioSessionPropertyStore *this)
{
  CAudioSessionPropertyStore *v1; // r13
  unsigned int v2; // r12d
  DWORD v3; // r14d
  unsigned int v4; // eax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  RPC_STATUS v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  SIZE_T v10; // rax
  void *v11; // rsi
  _QWORD *v12; // rdi
  DWORD i; // ecx
  unsigned int v14; // eax
  char *v15; // rax
  char *v16; // r14
  unsigned __int64 v17; // rdx
  __int64 v18; // xmm0_8
  unsigned __int64 v19; // r13
  HRESULT v20; // r15d
  char *v21; // rdx
  char *v22; // rbx
  SAFEARRAY *v23; // rbx
  LPVOID v24; // rax
  unsigned __int16 *v25; // r15
  int v26; // eax
  LPVOID v27; // rax
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rdx
  const char *v31; // r15
  int v32; // eax
  LPVOID v33; // rax
  int v34; // eax
  BSTR v35; // rax
  bool v36; // sf
  __int64 v37; // rdx
  unsigned int v38; // edi
  __int64 v39; // rdx
  SAFEARRAY *v40; // rbx
  SAFEARRAY *v41; // rbx
  void *v43; // [rsp+68h] [rbp-A0h] BYREF
  void *v44; // [rsp+70h] [rbp-98h] BYREF
  char *v45; // [rsp+78h] [rbp-90h] BYREF
  SAFEARRAY *psa; // [rsp+80h] [rbp-88h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+88h] [rbp-80h] BYREF
  DWORD cchName; // [rsp+8Ch] [rbp-7Ch] BYREF
  DWORD cbData; // [rsp+90h] [rbp-78h] BYREF
  HKEY phkResult; // [rsp+98h] [rbp-70h] BYREF
  DWORD cbMaxValueLen; // [rsp+A0h] [rbp-68h] BYREF
  DWORD v52; // [rsp+A4h] [rbp-64h]
  DWORD v53; // [rsp+A8h] [rbp-60h]
  DWORD cValues; // [rsp+ACh] [rbp-5Ch] BYREF
  char *v55; // [rsp+B0h] [rbp-58h] BYREF
  SIZE_T cb; // [rsp+B8h] [rbp-50h] BYREF
  SIZE_T v57; // [rsp+C0h] [rbp-48h] BYREF
  CAudioSessionPropertyStore *v58; // [rsp+C8h] [rbp-40h]
  GUID pclsid; // [rsp+D0h] [rbp-38h] BYREF
  WCHAR Name[104]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v1 = this;
  v58 = this;
  v2 = 0;
  v3 = 0;
LABEL_2:
  v53 = v3;
  cchName = 100;
  v4 = RegEnumKeyExW(*((HKEY *)v1 + 7), v3, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
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
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  phkResult = 0LL;
  v7 = RpcImpersonateClient(0LL);
  v6 = v7;
  if ( v7 && v7 != 1725 )
  {
    v36 = v7 < 0;
    if ( v7 > 0 )
    {
      v6 = (unsigned __int16)v7 | 0x80070000;
      v36 = 1;
    }
    if ( v36 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x366,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)v6);
    goto LABEL_85;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &phkResult,
    0LL);
  v8 = RegOpenKeyExW(*((HKEY *)v1 + 7), Name, 0, 0x20019u, &phkResult);
  if ( v8 )
  {
    v38 = wil::details::in1diag3::Return_Win32(
            retaddr,
            872LL,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)v8);
    if ( !v6 )
      RpcRevertToSelf();
LABEL_84:
    v6 = v38;
    goto LABEL_85;
  }
  if ( !v6 )
    RpcRevertToSelf();
  v9 = RegQueryInfoKeyW(phkResult, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, &cbMaxValueLen, 0LL, 0LL);
  if ( v9 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           879LL,
           (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
           (const char *)v9);
    goto LABEL_85;
  }
  v10 = 2LL * ++cbMaxValueNameLen;
  if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
    v10 = -1LL;
  v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v43 = v11;
  if ( !v11 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x8007000ELL);
LABEL_80:
    std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v43);
    goto LABEL_85;
  }
  v12 = operator new[](cbMaxValueLen, (const struct std::nothrow_t *)&std::nothrow);
  v44 = v12;
  if ( !v12 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x377,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x8007000ELL);
LABEL_78:
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v44);
    goto LABEL_80;
  }
  for ( i = 0; ; i = v52 + 1 )
  {
    v52 = i;
    if ( i >= cValues
      || (cchName = cbMaxValueNameLen,
          cbData = cbMaxValueLen,
          v14 = RegEnumValueW(phkResult, i, (LPWSTR)v11, &cchName, 0LL, 0LL, (LPBYTE)v12, &cbData),
          v14 == 259) )
    {
      Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v44);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v43);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkResult);
      v3 = v53 + 1;
      goto LABEL_2;
    }
    if ( v14 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             897LL,
             (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
             (const char *)v14);
      goto LABEL_78;
    }
    v15 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    v45 = v15;
    if ( !v15 )
    {
      v30 = 900LL;
LABEL_74:
      v6 = -2147024882;
      v29 = 2147942414LL;
LABEL_75:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)v29);
      std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>((void **)&v45);
      goto LABEL_78;
    }
    *((_QWORD *)v15 + 6) = *((_QWORD *)v1 + 6);
    *((_DWORD *)v15 + 4) = _o__wtoi(v11);
    *(GUID *)v16 = pclsid;
    v18 = v12[2];
    *(_OWORD *)(v16 + 24) = *(_OWORD *)v12;
    *((_QWORD *)v16 + 5) = v18;
    if ( *((_WORD *)v16 + 12) == 8 )
    {
      v35 = SysAllocString((const OLECHAR *)((char *)v12 + *((_QWORD *)v16 + 4)));
      *((_QWORD *)v16 + 4) = v35;
      if ( !v35 )
      {
        v30 = 981LL;
        goto LABEL_74;
      }
      goto LABEL_47;
    }
    if ( *((_WORD *)v16 + 12) != 30 )
      break;
    v31 = (char *)v12 + *((_QWORD *)v16 + 4);
    v32 = StringCbLengthA(v31, v17, &v57);
    v6 = v32;
    if ( v32 < 0 )
    {
      v29 = (unsigned int)v32;
      v30 = 989LL;
      goto LABEL_75;
    }
    v33 = CoTaskMemAlloc(v57);
    if ( !v33 )
    {
      v30 = 992LL;
      goto LABEL_74;
    }
    *((_QWORD *)v16 + 4) = v33;
    v34 = StringCchCopyA(0LL, v57, v31);
    v6 = v34;
    if ( v34 < 0 )
    {
      v29 = (unsigned int)v34;
      v30 = 995LL;
      goto LABEL_75;
    }
LABEL_47:
    v45 = 0LL;
    *((_QWORD *)v1 + 6) = v16;
    std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>((void **)&v45);
  }
  if ( *((_WORD *)v16 + 12) == 31 )
  {
    v25 = (unsigned __int16 *)((char *)v12 + *((_QWORD *)v16 + 4));
    v26 = StringCbLengthW(v25, 0x7FFFFFFFuLL, &cb);
    v6 = v26;
    if ( v26 < 0 )
    {
      v29 = (unsigned int)v26;
      v30 = 965LL;
      goto LABEL_75;
    }
    v27 = CoTaskMemAlloc(cb);
    if ( !v27 )
    {
      v30 = 968LL;
      goto LABEL_74;
    }
    *((_QWORD *)v16 + 4) = v27;
    v28 = StringCbCopyW(0LL, cb, (char *)v25);
    v6 = v28;
    if ( v28 < 0 )
    {
      v29 = (unsigned int)v28;
      v30 = 971LL;
      goto LABEL_75;
    }
    goto LABEL_47;
  }
  if ( *((_WORD *)v16 + 12) == 65 || *((_WORD *)v16 + 12) == 70 )
  {
    v24 = CoTaskMemAlloc(*((unsigned int *)v16 + 8));
    if ( !v24 )
    {
      v30 = 915LL;
      goto LABEL_74;
    }
    *((_QWORD *)v16 + 5) = v24;
    memcpy_0(0LL, (char *)v12 + (_QWORD)v24, *((unsigned int *)v16 + 8));
    goto LABEL_47;
  }
  if ( *((_WORD *)v16 + 12) != 8196 )
    goto LABEL_47;
  v19 = ((unsigned __int64)cbData - 24) >> 2;
  if ( (((_BYTE)cbData - 24) & 3) != 0 )
  {
    v38 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A9,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80070057LL);
LABEL_58:
    std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>((void **)&v45);
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v44);
    std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v43);
    goto LABEL_84;
  }
  v55 = (char *)v12 + *((_QWORD *)v16 + 4);
  psa = 0LL;
  v20 = ATL::CComSafeArray<float,4>::Create(&psa, v19);
  if ( v20 >= 0 )
  {
    v21 = v55;
    while ( 1 )
    {
      if ( v2 >= v19 )
      {
        v23 = psa;
        SafeArrayUnlock(psa);
        *((_QWORD *)v16 + 4) = v23;
        v1 = v58;
        v2 = 0;
        goto LABEL_47;
      }
      v22 = v21 + 4;
      if ( v21 + 4 < v21 )
        break;
      if ( v22 < (char *)v12 )
      {
        v38 = -2147024362;
        v39 = 948LL;
        goto LABEL_55;
      }
      if ( v22 - (char *)v12 > (unsigned __int64)cbData )
      {
        v38 = -2147024809;
        v39 = 950LL;
        goto LABEL_55;
      }
      LODWORD(v55) = *(_DWORD *)v21;
      v20 = ATL::CComSafeArray<float,4>::SetAt(&psa, v2, &v55);
      if ( v20 < 0 )
      {
        v37 = 953LL;
        goto LABEL_62;
      }
      v21 = v22;
      ++v2;
    }
    v38 = -2147024362;
    v39 = 946LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)v38);
    v40 = psa;
    if ( psa && SafeArrayUnlock(psa) >= 0 )
      SafeArrayDestroy(v40);
    goto LABEL_58;
  }
  v37 = 941LL;
LABEL_62:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v37,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
    (const char *)(unsigned int)v20);
  v41 = psa;
  if ( psa )
  {
    if ( SafeArrayUnlock(psa) >= 0 )
      SafeArrayDestroy(v41);
  }
  std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>((void **)&v45);
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v44);
  std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v43);
  v6 = v20;
LABEL_85:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkResult);
  return v6;
}

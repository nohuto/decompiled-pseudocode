/*
 * XREFs of ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18003F0E4
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18003E678 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F700 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180012944 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015A88 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015B50 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016084 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016F0C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001E1BC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x18003CF20 (--1-$unique_ptr@GU-$default_delete@G@std@@@std@@QEAA@XZ.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18003D904 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18003DC8C (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18003E5A4 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18003FBC0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall OpenSessionKey(struct IAudioSessionInfo *a1, HKEY a2, HKEY *a3)
{
  HKEY v3; // r12
  HKEY v4; // r13
  RPC_STATUS v6; // eax
  RPC_STATUS *v7; // rbx
  unsigned int v8; // ebx
  bool v9; // zf
  __int64 (__fastcall *v11)(struct IAudioSessionInfo *, BYTE **); // rdi
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // r14d
  __int64 v15; // r15
  const unsigned __int16 *v16; // rdi
  unsigned int ValueW; // eax
  DWORD i; // r14d
  int v19; // r14d
  __int64 v20; // rdx
  HKEY v21; // r15
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  SIZE_T v24; // rax
  void *v25; // rax
  unsigned int v26; // eax
  HKEY v27; // rax
  ATL::CAtlException *v28; // rbx
  ATL::CAtlException *v29; // rbx
  ATL::CAtlException *v30; // rbx
  DWORD cbData; // [rsp+28h] [rbp-B0h]
  HKEY hkey; // [rsp+40h] [rbp-98h] BYREF
  BYTE *lpData; // [rsp+48h] [rbp-90h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-88h] BYREF
  _DWORD v35[3]; // [rsp+54h] [rbp-84h] BYREF
  unsigned int v36; // [rsp+60h] [rbp-78h]
  LPCWSTR lpSubKey; // [rsp+68h] [rbp-70h] BYREF
  RPC_STATUS *v38; // [rsp+70h] [rbp-68h]
  char v39; // [rsp+78h] [rbp-60h]
  ATL::CAtlException *v40; // [rsp+80h] [rbp-58h] BYREF
  ATL::CAtlException *v41; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v42; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  HKEY hKey; // [rsp+F0h] [rbp+18h] BYREF
  RPC_STATUS v46; // [rsp+F8h] [rbp+20h] BYREF

  hKey = (HKEY)a3;
  v3 = (HKEY)a3;
  v4 = a2;
  *a3 = 0LL;
  v6 = RpcImpersonateClient(0LL);
  v46 = v6;
  v7 = &v46;
  v38 = &v46;
  v39 = 1;
  if ( v6 && v6 != 1725 )
  {
    if ( v6 > 0 )
      v8 = (unsigned __int16)v6 | 0x80070000;
    else
      v8 = v6;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)v8);
    v9 = v46 == 0;
    goto LABEL_7;
  }
  lpData = 0LL;
  v11 = *(__int64 (__fastcall **)(struct IAudioSessionInfo *, BYTE **))(*(_QWORD *)a1 + 144LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpData,
    0LL);
  v12 = v11(a1, &lpData);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v12);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpData);
    if ( !v46 )
      RpcRevertToSelf();
    return v13;
  }
  try
  {
    v36 = 0;
    v36 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash((unsigned __int16 *)lpData);
  }
  catch ( ATL::CAtlException *v40 )
  {
    v28 = v40;
    if ( *(_DWORD *)v40 == -1073741571 )
      _o__resetstkoflw();
    v35[0] = *(_DWORD *)v28;
    v8 = v35[0];
    if ( v35[0] < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)v35[0]);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpData);
      v9 = v46 == 0;
      goto LABEL_7;
    }
    v3 = hKey;
    v4 = a2;
    v7 = v38;
  }
  v14 = 0;
  v35[0] = 0;
  v15 = -1LL;
  while ( 1 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
    try
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (__int64)&lpSubKey,
        (__int64)L"%x_%d",
        v36,
        v14);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v29 = v41;
      if ( *(_DWORD *)v41 == -1073741571 )
        _o__resetstkoflw();
      v35[1] = *(_DWORD *)v29;
      v8 = v35[1];
      if ( v35[1] >= 0 )
      {
        v15 = -1LL;
        v3 = hKey;
        v4 = a2;
        v7 = v38;
        v14 = v35[0];
        goto LABEL_23;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)v35[1]);
LABEL_21:
      ATL::CStringData::Release((ATL::CStringData *)(lpSubKey - 12));
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpData);
      v9 = *v38 == 0;
LABEL_7:
      if ( v9 )
        RpcRevertToSelf();
      return v8;
    }
LABEL_23:
    hkey = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &hkey,
      0LL);
    v16 = lpSubKey;
    ValueW = RegOpenKeyExW(v4, lpSubKey, 0, 0x2001Fu, &hkey);
    if ( ValueW == 2 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hkey);
      ATL::CStringData::Release((ATL::CStringData *)(v16 - 12));
      for ( i = 0; ; ++i )
      {
        pcbData = i;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
        try
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
            (__int64)&lpSubKey,
            (__int64)L"%x_%d",
            v36,
            i);
        }
        catch ( ATL::CAtlException *v42 )
        {
          v30 = v42;
          if ( *(_DWORD *)v42 == -1073741571 )
            _o__resetstkoflw();
          v35[1] = *(_DWORD *)v30;
          v8 = v35[1];
          if ( v35[1] < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x145,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)v35[1]);
            goto LABEL_21;
          }
          v15 = -1LL;
          v3 = hKey;
          v4 = a2;
          v7 = v38;
          i = pcbData;
        }
        hkey = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &hkey,
          0LL);
        v16 = lpSubKey;
        if ( RegOpenKeyExW(v4, lpSubKey, 0, 0x20019u, &hkey) )
          break;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hkey);
        ATL::CStringData::Release((ATL::CStringData *)(v16 - 12));
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hkey);
      hKey = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &hKey,
        0LL);
      v19 = CreateLowRightsRegistryKey(v4, v16, 131103, &hKey);
      if ( v19 < 0 )
      {
        v20 = 338LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v19);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
LABEL_57:
        ATL::CStringData::Release((ATL::CStringData *)(v16 - 12));
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpData);
        if ( !*v7 )
          RpcRevertToSelf();
        return (unsigned int)v19;
      }
      do
        ++v15;
      while ( *(_WORD *)&lpData[2 * v15] );
      cbData = 2 * v15 + 2;
      v21 = hKey;
      v19 = RegSetValueExW(hKey, 0LL, 0, 1u, lpData, cbData);
      if ( v19 < 0 )
      {
        v20 = 342LL;
        goto LABEL_33;
      }
      hKey = 0LL;
      *(_QWORD *)v3 = v21;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
LABEL_50:
      ATL::CStringData::Release((ATL::CStringData *)(v16 - 12));
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpData);
      if ( !*v7 )
        RpcRevertToSelf();
      return 0LL;
    }
    if ( ValueW )
    {
      v22 = 300LL;
      goto LABEL_40;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    if ( ValueW )
    {
      v22 = 303LL;
LABEL_40:
      v19 = wil::details::in1diag3::Return_Win32(
              retaddr,
              v22,
              (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)ValueW);
LABEL_56:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hkey);
      goto LABEL_57;
    }
    v23 = ((unsigned __int64)pcbData >> 1) + 1;
    v24 = 2 * v23;
    if ( !is_mul_ok(v23, 2uLL) )
      v24 = -1LL;
    v25 = operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)&v35[1] = v25;
    if ( !v25 )
    {
      v19 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x132,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_55;
    }
    v26 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, v25, &pcbData);
    if ( v26 )
    {
      v19 = wil::details::in1diag3::Return_Win32(
              retaddr,
              308LL,
              (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)v26);
LABEL_55:
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>((void **)&v35[1]);
      goto LABEL_56;
    }
    if ( CompareStringW(0x7Fu, 1u, (PCNZWCH)lpData, -1, *(PCNZWCH *)&v35[1], -1) == 2 )
    {
      v27 = hkey;
      hkey = 0LL;
      *(_QWORD *)v3 = v27;
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>((void **)&v35[1]);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hkey);
      goto LABEL_50;
    }
    std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>((void **)&v35[1]);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hkey);
    ATL::CStringData::Release((ATL::CStringData *)(v16 - 12));
    v35[0] = ++v14;
  }
}

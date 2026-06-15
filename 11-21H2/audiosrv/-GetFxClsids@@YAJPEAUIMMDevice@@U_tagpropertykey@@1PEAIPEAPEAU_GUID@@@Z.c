/*
 * XREFs of ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180049CB0
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004875C (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180049314 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180021120 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x18004A074 (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180055AB8 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800C8FE4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DA73C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x1801515AC (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall GetFxClsids(
        struct IMMDevice *a1,
        struct _tagpropertykey *a2,
        struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  unsigned int v8; // r15d
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  GUID *v14; // rbx
  int v15; // eax
  int v16; // eax
  GUID **unique_cotaskmem; // rax
  void *v18; // rcx
  unsigned int v19; // esi
  __int64 v20; // r14
  HRESULT v21; // eax
  GUID *v22; // rsi
  unsigned int v23; // r14d
  int v24; // eax
  __int64 v25; // rcx
  OLECHAR *v26; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  GUID **v31; // rax
  void *v32; // rcx
  HRESULT v33; // eax
  CONFIGRET v34; // eax
  DWORD v35; // eax
  CONFIGRET v36; // eax
  DWORD v37; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-E0h]
  int phkResulta; // [rsp+20h] [rbp-E0h]
  const char *ulFlags; // [rsp+28h] [rbp-D8h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  DEVNODE pdnDevInst; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v44; // [rsp+98h] [rbp-68h] BYREF
  PROPVARIANT v45[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-50h]
  GUID *v47; // [rsp+B8h] [rbp-48h]
  PROPVARIANT pvar[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-30h]
  HKEY hKey; // [rsp+D8h] [rbp-28h] BYREF
  GUID rguid; // [rsp+E0h] [rbp-20h] BYREF
  GUID v52; // [rsp+F0h] [rbp-10h] BYREF
  int v53; // [rsp+100h] [rbp+0h]
  OLECHAR sz[40]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR SubKey[80]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v8 = 0;
  *a4 = 0;
  *a5 = 0LL;
  v44 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 **))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
         &v44);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v9,
      phkResult);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v10,
      phkResulta);
    goto LABEL_36;
  }
  v42 = 0LL;
  v11 = *v44;
  v42 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v11 + 40))(v44, 0LL, &v42);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12,
      phkResult);
    v13 = v42;
    goto LABEL_34;
  }
  v13 = v42;
  if ( !v42 )
  {
LABEL_33:
    v10 = 0;
    goto LABEL_34;
  }
  *(_OWORD *)v45 = 0LL;
  v46 = 0LL;
  v14 = 0LL;
  v47 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v42 + 40LL))(
          v42,
          a2,
          v45);
  v10 = v15;
  if ( v15 < 0 )
  {
    v29 = (unsigned int)v15;
    v30 = 177LL;
    goto LABEL_72;
  }
  if ( !LOWORD(v45[0]) )
  {
    if ( !a3->pid )
    {
      v28 = *(_QWORD *)&a3->fmtid.Data1;
      if ( !*(_QWORD *)&a3->fmtid.Data1 )
        v28 = *(_QWORD *)a3->fmtid.Data4;
      if ( !v28 )
        goto LABEL_32;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v42 + 40LL))(
            v42,
            a3,
            v45);
    v10 = v16;
    if ( v16 < 0 )
    {
      v29 = (unsigned int)v16;
      v30 = 192LL;
      goto LABEL_72;
    }
    if ( !LOWORD(v45[0]) )
    {
LABEL_32:
      *a5 = v14;
      *a4 = v8;
      PropVariantClear(v45);
      v13 = v42;
      goto LABEL_33;
    }
    if ( LOWORD(v45[0]) != 4127 )
    {
      LODWORD(ulFlags) = LOWORD(v45[0]);
      v10 = -2147023092;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xC3,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007070CLL,
        (int)"0x%08X",
        ulFlags);
      goto LABEL_73;
    }
    v8 = (unsigned int)v45[1];
    if ( !LODWORD(v45[1]) )
    {
      v10 = -2147024883;
      v30 = 196LL;
LABEL_71:
      v29 = v10;
      goto LABEL_72;
    }
    unique_cotaskmem = (GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv);
    v14 = *unique_cotaskmem;
    *unique_cotaskmem = 0LL;
    v47 = v14;
    v18 = pv;
    pv = 0LL;
    if ( v18 )
      CoTaskMemFree(v18);
    if ( v14 )
    {
      v19 = 0;
      if ( v8 )
      {
        v20 = 0LL;
        while ( 1 )
        {
          v21 = CLSIDFromString(*(LPCOLESTR *)(v46 + v20), &v14[v19]);
          v10 = v21;
          if ( v21 < 0 )
            break;
          ++v19;
          v20 += 8LL;
          if ( v19 >= v8 )
            goto LABEL_18;
        }
        v29 = (unsigned int)v21;
        v30 = 203LL;
LABEL_72:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v29,
          phkResult);
        goto LABEL_73;
      }
      goto LABEL_32;
    }
    v30 = 200LL;
LABEL_70:
    v10 = -2147024882;
    goto LABEL_71;
  }
  if ( LOWORD(v45[0]) != 31 )
  {
    LODWORD(ulFlags) = LOWORD(v45[0]);
    v10 = -2147023092;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xB7,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007070CLL,
      (int)"0x%08X",
      ulFlags);
    goto LABEL_73;
  }
  v8 = 1;
  v31 = (GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv);
  v14 = *v31;
  *v31 = 0LL;
  v47 = v14;
  v32 = pv;
  pv = 0LL;
  if ( v32 )
    CoTaskMemFree(v32);
  if ( !v14 )
  {
    v30 = 187LL;
    goto LABEL_70;
  }
  v33 = CLSIDFromString((LPCOLESTR)v45[1], v14);
  v10 = v33;
  if ( v33 < 0 )
  {
    v29 = (unsigned int)v33;
    v30 = 188LL;
    goto LABEL_72;
  }
LABEL_18:
  v22 = v14;
  v23 = 0;
  while ( 1 )
  {
    v52 = *v22;
    v53 = 100;
    *(_OWORD *)pvar = 0LL;
    v49 = 0LL;
    if ( v42 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, GUID *, PROPVARIANT *))(*(_QWORD *)v42 + 40LL))(v42, &v52, pvar);
      v10 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDC,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v24,
          phkResult);
        goto LABEL_67;
      }
    }
    if ( LOWORD(pvar[0]) != 31 )
      break;
    v34 = CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)pvar[1], 0);
    v35 = CM_MapCrToWin32Err(v34, 0x507u);
    if ( v35 )
    {
      v10 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xE3,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)v35,
              phkResult);
      goto LABEL_67;
    }
    pv = 0LL;
    v36 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, (PHKEY)&pv, 1u);
    v37 = CM_MapCrToWin32Err(v36, 0x507u);
    if ( v37 )
    {
      v10 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xE7,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)v37,
              phkResult);
      goto LABEL_64;
    }
    rguid = *v22;
    if ( !IsAPOClsidRegistered((HKEY)pv, &rguid) )
    {
      LODWORD(ulFlags) = v14[v23].Data1;
      v10 = -2005139398;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0xED,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x887C003ALL,
        (int)"Missing device relative APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
        ulFlags,
        v14[v23].Data2,
        v14[v23].Data3,
        v14[v23].Data4[0],
        v14[v23].Data4[1],
        v14[v23].Data4[2],
        v14[v23].Data4[3],
        v14[v23].Data4[4],
        v14[v23].Data4[5],
        v14[v23].Data4[6],
        v14[v23].Data4[7]);
LABEL_64:
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&pv);
      goto LABEL_67;
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&pv);
LABEL_31:
    PropVariantClear(pvar);
    ++v23;
    ++v22;
    if ( v23 >= v8 )
      goto LABEL_32;
  }
  rguid = *v22;
  if ( StringFromGUID2(&rguid, sz, 39) > 0 )
  {
    v25 = 39LL;
    v26 = sz;
    while ( *v26 )
    {
      ++v26;
      if ( !--v25 )
        goto LABEL_66;
    }
    if ( v25 == 1
      && (int)StringCchPrintfW(SubKey, 75LL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", sz) >= 0
      && !RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hKey) )
    {
      RegCloseKey(hKey);
      goto LABEL_31;
    }
  }
LABEL_66:
  LODWORD(ulFlags) = v14[v23].Data1;
  v10 = -2005139398;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0xF5,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x887C003ALL,
    (int)"Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
    ulFlags,
    v14[v23].Data2,
    v14[v23].Data3,
    v14[v23].Data4[0],
    v14[v23].Data4[1],
    v14[v23].Data4[2],
    v14[v23].Data4[3],
    v14[v23].Data4[4],
    v14[v23].Data4[5],
    v14[v23].Data4[6],
    v14[v23].Data4[7],
    pv);
LABEL_67:
  PropVariantClear(pvar);
LABEL_73:
  if ( v14 )
    CoTaskMemFree(v14);
  PropVariantClear(v45);
  v13 = v42;
LABEL_34:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_36:
  if ( v44 )
    (*(void (__fastcall **)(__int64 *))(*v44 + 16))(v44);
  return v10;
}

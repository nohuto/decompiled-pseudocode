/*
 * XREFs of ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x1800235C4
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180022BF0 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180004494 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x180023A68 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180023B8C (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF09C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D8670 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x180169550 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetFxClsidsFromPropertyStore(
        struct IPropertyStore *a1,
        struct _tagpropertykey *a2,
        struct _tagpropertykey *a3,
        const unsigned __int16 *a4,
        unsigned int *a5,
        struct _GUID **a6)
{
  const unsigned __int16 *v6; // r15
  GUID *v9; // rbx
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  __int64 v16; // rax
  GUID **v17; // rax
  void *v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // r15
  HRESULT v21; // eax
  HRESULT v22; // r14d
  unsigned int v23; // edi
  GUID *v24; // r14
  int v25; // eax
  unsigned int v26; // r15d
  GUID **unique_cotaskmem; // rax
  void *v28; // rcx
  HRESULT v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  WCHAR *v33; // r12
  CONFIGRET v34; // eax
  DWORD v35; // eax
  CONFIGRET v36; // eax
  DWORD v37; // eax
  unsigned int phkDevice; // [rsp+20h] [rbp-F0h]
  const char *ulFlags; // [rsp+28h] [rbp-E8h]
  int Data2; // [rsp+30h] [rbp-E0h]
  int v41; // [rsp+30h] [rbp-E0h]
  int Data3; // [rsp+38h] [rbp-D8h]
  int v43; // [rsp+38h] [rbp-D8h]
  int v44; // [rsp+40h] [rbp-D0h]
  int v45; // [rsp+40h] [rbp-D0h]
  int v46; // [rsp+48h] [rbp-C8h]
  int v47; // [rsp+48h] [rbp-C8h]
  int v48; // [rsp+50h] [rbp-C0h]
  int v49; // [rsp+50h] [rbp-C0h]
  int v50; // [rsp+58h] [rbp-B8h]
  int v51; // [rsp+58h] [rbp-B8h]
  int v52; // [rsp+60h] [rbp-B0h]
  int v53; // [rsp+60h] [rbp-B0h]
  int v54; // [rsp+68h] [rbp-A8h]
  int v55; // [rsp+68h] [rbp-A8h]
  int v56; // [rsp+70h] [rbp-A0h]
  int v57; // [rsp+70h] [rbp-A0h]
  int v58; // [rsp+78h] [rbp-98h]
  int v59; // [rsp+78h] [rbp-98h]
  LPVOID pv; // [rsp+90h] [rbp-80h] BYREF
  DEVNODE pdnDevInst; // [rsp+98h] [rbp-78h] BYREF
  GUID *v62; // [rsp+A0h] [rbp-70h] BYREF
  PROPVARIANT v63[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-58h]
  PROPVARIANT pvar[2]; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-40h]
  const unsigned __int16 *v67; // [rsp+D8h] [rbp-38h]
  struct _GUID **v68; // [rsp+E0h] [rbp-30h]
  unsigned int *v69; // [rsp+E8h] [rbp-28h]
  GUID rguid; // [rsp+F0h] [rbp-20h] BYREF
  GUID v71; // [rsp+100h] [rbp-10h] BYREF
  int v72; // [rsp+110h] [rbp+0h]
  OLECHAR sz[40]; // [rsp+120h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+B8h]

  v6 = a4;
  v67 = a4;
  v69 = a5;
  v68 = a6;
  *a5 = 0;
  *a6 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v66 = 0LL;
  v9 = 0LL;
  v62 = 0LL;
  v10 = 0;
  v11 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
          a1,
          a2,
          pvar);
  v12 = v11;
  if ( v11 < 0 )
  {
    v31 = (unsigned int)v11;
    v32 = 332LL;
    goto LABEL_63;
  }
  v13 = LOWORD(pvar[0]);
  if ( LOWORD(pvar[0]) )
  {
    if ( LOWORD(pvar[0]) != 31 )
    {
      v30 = 338LL;
      goto LABEL_42;
    }
    v10 = 1;
    unique_cotaskmem = (GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv, 1LL);
    v9 = *unique_cotaskmem;
    *unique_cotaskmem = 0LL;
    v62 = v9;
    v28 = pv;
    pv = 0LL;
    if ( v28 )
      CoTaskMemFree(v28);
    if ( !v9 )
    {
      v32 = 342LL;
      goto LABEL_61;
    }
    v29 = CLSIDFromString((LPCOLESTR)pvar[1], v9);
    v12 = v29;
    if ( v29 < 0 )
    {
      v31 = (unsigned int)v29;
      v32 = 343LL;
LABEL_63:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)v31,
        phkDevice);
      goto LABEL_38;
    }
LABEL_22:
    v23 = 0;
    v24 = v9;
    while ( 1 )
    {
      *(_OWORD *)v63 = 0LL;
      v64 = 0LL;
      if ( v6 )
      {
        v33 = (WCHAR *)v6;
      }
      else
      {
        v71 = *v24;
        v72 = 100;
        v25 = ((__int64 (__fastcall *)(struct IPropertyStore *, GUID *, PROPVARIANT *))a1->lpVtbl->GetValue)(
                a1,
                &v71,
                v63);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x17B,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)(unsigned int)v25,
            phkDevice);
          PropVariantClear(v63);
          v12 = v26;
          goto LABEL_38;
        }
        if ( LOWORD(v63[0]) != 31 || (v33 = (WCHAR *)v63[1]) == 0LL )
        {
          rguid = *v24;
          if ( StringFromGUID2(&rguid, sz, 39) <= 0 || !IsAPOClsidRegistered(HKEY_CLASSES_ROOT, sz) )
          {
            v58 = v9[v23].Data4[7];
            v56 = v9[v23].Data4[6];
            v54 = v9[v23].Data4[5];
            v52 = v9[v23].Data4[4];
            v50 = v9[v23].Data4[3];
            v48 = v9[v23].Data4[2];
            v46 = v9[v23].Data4[1];
            v44 = v9[v23].Data4[0];
            Data3 = v9[v23].Data3;
            Data2 = v9[v23].Data2;
            LODWORD(ulFlags) = v9[v23].Data1;
            v12 = -2005139398;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x19F,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
              (const char *)0x887C003ALL,
              (unsigned __int64)"Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
              ulFlags,
              Data2,
              Data3,
              v44,
              v46,
              v48,
              v50,
              v52,
              v54,
              v56,
              v58);
LABEL_37:
            PropVariantClear(v63);
            goto LABEL_38;
          }
          goto LABEL_28;
        }
      }
      v34 = CM_Locate_DevNodeW(&pdnDevInst, v33, 0);
      v35 = CM_MapCrToWin32Err(v34, 0x507u);
      if ( v35 )
      {
        v12 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x18D,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
                (const char *)v35,
                phkDevice);
        goto LABEL_37;
      }
      pv = 0LL;
      v36 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, (PHKEY)&pv, 1u);
      v37 = CM_MapCrToWin32Err(v36, 0x507u);
      if ( v37 )
      {
        v12 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x191,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
                (const char *)v37,
                phkDevice);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&pv);
        goto LABEL_37;
      }
      rguid = *v24;
      if ( !IsAPOClsidRegistered((HKEY)pv, &rguid) )
      {
        v59 = v9[v23].Data4[7];
        v57 = v9[v23].Data4[6];
        v55 = v9[v23].Data4[5];
        v53 = v9[v23].Data4[4];
        v51 = v9[v23].Data4[3];
        v49 = v9[v23].Data4[2];
        v47 = v9[v23].Data4[1];
        v45 = v9[v23].Data4[0];
        v43 = v9[v23].Data3;
        v41 = v9[v23].Data2;
        LODWORD(ulFlags) = v9[v23].Data1;
        v12 = -2005139398;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x197,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x887C003ALL,
          (unsigned __int64)"Missing device relative APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%0"
                            "2X} deviceId: %ws",
          ulFlags,
          v41,
          v43,
          v45,
          v47,
          v49,
          v51,
          v53,
          v55,
          v57,
          v59,
          v33);
        if ( pv )
          RegCloseKey((HKEY)pv);
        goto LABEL_37;
      }
      if ( pv )
        RegCloseKey((HKEY)pv);
LABEL_28:
      PropVariantClear(v63);
      ++v23;
      ++v24;
      if ( v23 >= v10 )
        goto LABEL_6;
      v6 = v67;
    }
  }
  if ( !a3->pid )
  {
    v16 = *(_QWORD *)&a3->fmtid.Data1;
    if ( !*(_QWORD *)&a3->fmtid.Data1 )
      v16 = *(_QWORD *)a3->fmtid.Data4;
    if ( !v16 )
      goto LABEL_6;
  }
  v14 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
          a1,
          a3,
          pvar);
  v12 = v14;
  if ( v14 < 0 )
  {
    v31 = (unsigned int)v14;
    v32 = 347LL;
    goto LABEL_63;
  }
  v13 = LOWORD(pvar[0]);
  if ( LOWORD(pvar[0]) )
  {
    if ( LOWORD(pvar[0]) == 4127 )
    {
      v10 = (unsigned int)pvar[1];
      if ( !LODWORD(pvar[1]) )
      {
        v12 = -2147024883;
        v32 = 351LL;
LABEL_62:
        v31 = v12;
        goto LABEL_63;
      }
      v17 = (GUID **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv, LODWORD(pvar[1]));
      v9 = *v17;
      *v17 = 0LL;
      v62 = v9;
      v18 = pv;
      pv = 0LL;
      if ( v18 )
        CoTaskMemFree(v18);
      if ( v9 )
      {
        v19 = 0;
        if ( !v10 )
          goto LABEL_6;
        v20 = 0LL;
        while ( 1 )
        {
          v21 = CLSIDFromString(*(LPCOLESTR *)(v20 + v66), &v9[v19]);
          v22 = v21;
          if ( v21 < 0 )
            break;
          ++v19;
          v20 += 8LL;
          if ( v19 >= v10 )
          {
            v6 = v67;
            goto LABEL_22;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x166,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v21,
          phkDevice);
        v12 = v22;
LABEL_38:
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v62);
        goto LABEL_7;
      }
      v32 = 355LL;
LABEL_61:
      v12 = -2147024882;
      goto LABEL_62;
    }
    v30 = 350LL;
LABEL_42:
    LODWORD(ulFlags) = v13;
    v12 = -2147023092;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v30,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)0x8007070CLL,
      (unsigned __int64)"0x%08X",
      ulFlags);
    goto LABEL_38;
  }
LABEL_6:
  *v68 = v9;
  *v69 = v10;
  v12 = 0;
LABEL_7:
  PropVariantClear(pvar);
  return v12;
}

/*
 * XREFs of ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180019B60
 * Callers:
 *     ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x180042C28 (-BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$ComPtr@UIGam.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800436D0 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18001362C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=106
__int64 __fastcall JsonDocumentFromGameConfigValues(
        int a1,
        HSTRING a2,
        int a3,
        char a4,
        bool a5,
        bool a6,
        UINT32 length,
        PCNZWCH sourceString,
        HSTRING *a9)
{
  HRESULT v13; // eax
  int v14; // ebx
  HSTRING v15; // rcx
  int v16; // eax
  HRESULT v17; // eax
  int ActivationFactory; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v24; // rdi
  HRESULT v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64, __int64 *); // rdi
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v31; // rdi
  HRESULT v32; // eax
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, __int64, __int64 *); // rsi
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v38; // rdi
  HRESULT v39; // eax
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, __int64, __int64 *); // rdi
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v45; // rdi
  HRESULT v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 (__fastcall *v49)(__int64, __int64, __int64 *); // rdi
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 (__fastcall *v52)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v53; // rdi
  HRESULT v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 (__fastcall *v57)(__int64, __int64, __int64 *); // rdi
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 (__fastcall *v60)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v61; // rdi
  HRESULT v62; // eax
  __int64 v63; // rbx
  __int64 (__fastcall *v64)(__int64, __int64, __int64 *); // rdi
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 (__fastcall *v67)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v68; // rdi
  HRESULT v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rbx
  __int64 (__fastcall *v72)(__int64, __int64, __int64 *); // rdi
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 (__fastcall *v75)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v76; // rdi
  HRESULT v77; // eax
  HRESULT v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rbx
  __int64 (__fastcall *v81)(__int64, HSTRING, __int64 *); // rdi
  __int64 v82; // rcx
  __int64 v83; // rbx
  __int64 (__fastcall *v84)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v85; // rdi
  HRESULT v86; // eax
  __int64 v87; // rcx
  HSTRING v88; // rbx
  __int64 (__fastcall *v89)(HSTRING, GUID *, __int64 *); // rdi
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  HSTRING v94; // rcx
  _BYTE v96[8]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v97; // [rsp+38h] [rbp-61h] BYREF
  __int64 v98; // [rsp+40h] [rbp-59h] BYREF
  __int64 v99; // [rsp+48h] [rbp-51h] BYREF
  HSTRING v100; // [rsp+50h] [rbp-49h] BYREF
  HSTRING v101[2]; // [rsp+58h] [rbp-41h] BYREF
  HSTRING *v102; // [rsp+68h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  HSTRING string; // [rsp+88h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]

  v101[1] = a2;
  v102 = a9;
  v100 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
  if ( v13 < 0 )
    goto LABEL_107;
  v100 = 0LL;
  v14 = RoActivateInstance(string, v101);
  if ( v14 >= 0 )
  {
    if ( *(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v15 = v101[0];
      v100 = v101[0];
      goto LABEL_8;
    }
    v14 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))v101[0])(
            v101[0],
            &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3,
            &v100);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v101[0] + 16LL))(v101[0]);
  }
  v15 = v100;
LABEL_8:
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_103;
  }
  v99 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v15)(
          v15,
          &GUID_c9d9a725_786b_5113_b4b7_9b61764c220b,
          &v99);
  v14 = v16;
  if ( v16 >= 0 )
  {
    v98 = 0LL;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
    if ( v17 < 0 )
    {
LABEL_108:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
      goto LABEL_109;
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v98);
    v14 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25F,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_99:
      v92 = v98;
      if ( v98 )
      {
        v98 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
      }
      goto LABEL_101;
    }
    v97 = 0LL;
    v96[0] = 0;
    if ( a3 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v98 + 72LL))(v98, v19, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 614LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v20);
        goto LABEL_97;
      }
      v22 = v99;
      v23 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
      v24 = v97;
      string = 0LL;
      v25 = WindowsCreateStringReference(L"MaxCpuCount", 0xBu, &hstringHeader, &string);
      if ( v25 < 0 )
      {
LABEL_109:
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
        __debugbreak();
      }
      v20 = v23(v22, string, v24, v96);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 615LL;
        goto LABEL_21;
      }
    }
    if ( a4 )
    {
      v26 = v98;
      v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v98 + 64LL);
      v28 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      LOBYTE(v19) = !a5;
      v20 = v27(v26, v19, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 620LL;
        goto LABEL_21;
      }
      v29 = v99;
      v30 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
      v31 = v97;
      string = 0LL;
      v32 = WindowsCreateStringReference(L"AffinitizeToExclusiveCpus", 0x19u, &hstringHeader, &string);
      if ( v32 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32);
        __debugbreak();
      }
      v20 = v30(v29, string, v31, v96);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 621LL;
        goto LABEL_21;
      }
    }
    if ( a6 )
    {
      v33 = v98;
      v34 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v98 + 64LL);
      v35 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      LOBYTE(v19) = a6;
      v20 = v34(v33, v19, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 626LL;
        goto LABEL_21;
      }
      v36 = v99;
      v37 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
      v38 = v97;
      string = 0LL;
      v39 = WindowsCreateStringReference(L"AutoGameModeEnabled", 0x13u, &hstringHeader, &string);
      if ( v39 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39);
        __debugbreak();
      }
      v20 = v37(v36, string, v38, v96);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 627LL;
        goto LABEL_21;
      }
    }
    if ( a1 )
    {
      v40 = v98;
      v41 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v98 + 72LL);
      v42 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      v20 = v41(v40, v19, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 632LL;
        goto LABEL_21;
      }
      v43 = v99;
      v44 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
      v45 = v97;
      string = 0LL;
      v46 = WindowsCreateStringReference(L"PercentGpuTimeAllocatedToGame", 0x1Du, &hstringHeader, &string);
      if ( v46 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v46);
        __debugbreak();
      }
      v20 = v44(v43, string, v45, v96);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 633LL;
        goto LABEL_21;
      }
      v48 = v98;
      v49 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v98 + 72LL);
      v50 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
      }
      v20 = v49(v48, v47, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 635LL;
        goto LABEL_21;
      }
      v51 = v99;
      v52 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
      v53 = v97;
      string = 0LL;
      v54 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToGame", 0x1Fu, &hstringHeader, &string);
      if ( v54 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v54);
        __debugbreak();
      }
      v20 = v52(v51, string, v53, v96);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 636LL;
        goto LABEL_21;
      }
      v56 = v98;
      v57 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v98 + 72LL);
      v58 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      }
      v20 = v57(v56, v55, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 638LL;
        goto LABEL_21;
      }
      v59 = v99;
      v60 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
      v61 = v97;
      string = 0LL;
      v62 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToSystemCompositor", 0x2Bu, &hstringHeader, &string);
      if ( v62 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v62);
        __debugbreak();
      }
      v20 = v60(v59, string, v61, v96);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 639LL;
        goto LABEL_21;
      }
    }
    if ( a2 )
    {
      v63 = v98;
      v64 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v98 + 72LL);
      v65 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
      }
      v20 = v64(v63, v19, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 647LL;
        goto LABEL_21;
      }
      v66 = v99;
      v67 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
      v68 = v97;
      string = 0LL;
      v69 = WindowsCreateStringReference(L"CpuExclusivityMaskLow", 0x15u, &hstringHeader, &string);
      if ( v69 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v69);
        __debugbreak();
      }
      v20 = v67(v66, string, v68, v96);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 648LL;
        goto LABEL_21;
      }
      v71 = v98;
      v72 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v98 + 72LL);
      v73 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
      }
      v20 = v72(v71, v70, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 650LL;
        goto LABEL_21;
      }
      v74 = v99;
      v75 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
      v76 = v97;
      string = 0LL;
      v77 = WindowsCreateStringReference(L"CpuExclusivityMaskHigh", 0x16u, &hstringHeader, &string);
      if ( v77 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v77);
        JUMPOUT(0x18001A768LL);
      }
      v20 = v75(v74, string, v76, v96);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 651LL;
        goto LABEL_21;
      }
    }
    if ( !sourceString || !length )
      goto LABEL_88;
    v101[0] = 0LL;
    WindowsDeleteString(0LL);
    v101[0] = 0LL;
    v78 = WindowsCreateString(sourceString, length, v101);
    v14 = v78;
    if ( v78 < 0 )
    {
      v79 = 657LL;
LABEL_86:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v79,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v78);
      WindowsDeleteString(v101[0]);
      goto LABEL_97;
    }
    v80 = v98;
    v81 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v98 + 80LL);
    v82 = v97;
    if ( v97 )
    {
      v97 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
    }
    v78 = v81(v80, v101[0], &v97);
    v14 = v78;
    if ( v78 < 0 )
    {
      v79 = 659LL;
      goto LABEL_86;
    }
    v83 = v99;
    v84 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v99 + 80LL);
    v85 = v97;
    string = 0LL;
    v86 = WindowsCreateStringReference(L"RelatedProcessNames", 0x13u, &hstringHeader, &string);
    if ( v86 >= 0 )
    {
      v78 = v84(v83, string, v85, v96);
      v14 = v78;
      if ( v78 < 0 )
      {
        v79 = 660LL;
        goto LABEL_86;
      }
      WindowsDeleteString(v101[0]);
LABEL_88:
      v87 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
      }
      v88 = v100;
      v89 = **(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v100;
      v90 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
      }
      v20 = v89(v88, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v97);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 665LL;
        goto LABEL_21;
      }
      v20 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v97 + 56LL))(v97, v102);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 666LL;
        goto LABEL_21;
      }
      v14 = 0;
LABEL_97:
      v91 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 16LL))(v91);
      }
      goto LABEL_99;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v86);
LABEL_107:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    goto LABEL_108;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25B,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v16);
LABEL_101:
  v93 = v99;
  if ( v99 )
  {
    v99 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
  }
LABEL_103:
  v94 = v100;
  if ( v100 )
  {
    v100 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v94 + 16LL))(v94);
  }
  return (unsigned int)v14;
}

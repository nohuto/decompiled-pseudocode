/*
 * XREFs of ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18003CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x18003CEB4 (-InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z.c)
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1800405A8 (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInpu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800E6D3C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x18019A3E8 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputRouter::RegisterInputHost(_QWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int64 i; // rdx
  __int64 v13; // r9
  _QWORD *v14; // rax
  int v15; // eax
  DWMInputRouter *v16; // r14
  int v17; // eax
  unsigned int v18; // ebx
  struct IInputTarget *v19; // rbx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v21; // ebx
  unsigned int v22; // edi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // [rsp+20h] [rbp-50h]
  int v36; // [rsp+20h] [rbp-50h]
  int v37; // [rsp+20h] [rbp-50h]
  int v38; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v40; // [rsp+38h] [rbp-38h] BYREF
  struct IInputTarget *v41; // [rsp+40h] [rbp-30h] BYREF
  struct IInputTarget *v42; // [rsp+48h] [rbp-28h] BYREF
  __int64 v43; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v44[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v39 = *(_DWORD *)a2;
  v8 = 0xCBF29CE484222325uLL;
  v9 = 0xCBF29CE484222325uLL;
  v10 = 0LL;
  v11 = 0x100000001B3LL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v39 + v10++) ^ (unsigned __int64)v9);
  while ( v10 < 4 );
  v38 = *(_DWORD *)(a2 + 4);
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v38 + i) ^ (unsigned __int64)v8);
  v13 = *(_QWORD *)(a1[7] + 16 * (a1[10] & (v9 ^ v8)) + 8);
  if ( v13 != a1[5] )
  {
    while ( !(unsigned __int8)operator==(a2, v13 + 16, v11) )
    {
      if ( v28 == v30 )
        goto LABEL_6;
      v13 = *(_QWORD *)(v28 + 8);
    }
    if ( v28 && v28 != v29 )
      return 0LL;
  }
LABEL_6:
  v41 = 0LL;
  v14 = malloc(0x88uLL);
  if ( v14 )
  {
    v14[8] = 0LL;
    v14[9] = 0LL;
    *((_DWORD *)v14 + 16) = 1;
    *v14 = &DWMInputTarget::`vftable'{for `IInputTarget'};
    v14[1] = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
    v14[2] = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
    v14[3] = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
    v14[4] = &DWMInputTarget::`vftable'{for `IInputTarget2'};
    v14[5] = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
    v14[6] = &DWMInputTarget::`vftable'{for `IInputSiteTarget'};
    v14[7] = &DWMInputTarget::`vftable'{for `RefCountedObject'};
    *((_OWORD *)v14 + 5) = *(_OWORD *)a2;
    *((_OWORD *)v14 + 6) = *(_OWORD *)(a2 + 16);
    *((_OWORD *)v14 + 7) = *(unsigned __int64 *)(a2 + 32);
    *((_DWORD *)v14 + 32) = a3;
    *((_DWORD *)v14 + 33) = a4;
    v41 = (struct IInputTarget *)v14;
    v43 = 0LL;
    v15 = ((__int64 (__fastcall *)(_QWORD *, GUID *, __int64 *))DWMInputTarget::`vftable'{for `IInputTarget'})(
            v14,
            &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f,
            &v43);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2EB,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v15,
        v35);
    v16 = (DWMInputRouter *)(a1 - 7);
    (*(void (__fastcall **)(_QWORD *, __int64))(*(a1 - 7) + 88LL))(a1 - 7, v43);
    v17 = DWMInputRouter::InformTargetOfAttachedDevices((DWMInputRouter *)(a1 - 7), v41);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v17,
        v35);
    }
    else
    {
      v19 = v41;
      v41 = 0LL;
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Try_emplace<tagMsgRoutingInfo const &,>(
                               a1 + 4,
                               v44,
                               a2)
                + 56LL) = v19;
      v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[27];
      if ( !v20 )
      {
LABEL_15:
        v26 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v41 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v41 + 16LL))(v41);
        return 0LL;
      }
      v21 = *(_DWORD *)a2;
      v22 = *(_DWORD *)(a2 + 4);
      v38 = 0;
      v40 = 0LL;
      v23 = (**v20)(v20, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v40);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x309,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v23,
          v35);
      v24 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 32LL))(v40, &v38);
      if ( v24 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x30B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v24,
          v35);
      if ( v21 != v38 )
      {
LABEL_13:
        v25 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        goto LABEL_15;
      }
      v42 = 0LL;
      v39 = 0;
      v44[0] = 0LL;
      v31 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v40 + 48LL))(v40, &v39);
      if ( v31 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x317,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v31,
          v35);
      v32 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v40 + 64LL))(v40, v44);
      if ( v32 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x319,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v32,
          v35);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v42);
      v33 = DWMInputRouter::CreateAndRegisterTarget(v16, v21, v22, v39, v44[0], &v42);
      v18 = v33;
      if ( v33 >= 0 )
      {
        v34 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct IInputTarget *))(*(_QWORD *)v16 + 80LL))(v16, v42);
        if ( v34 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x323,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v34,
            v36);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v42);
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x320,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v33,
        v36);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v42);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v40);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v43);
  }
  else
  {
    v18 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x8007000ELL,
      v35);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x8007000ELL,
      v37);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v41);
  return v18;
}

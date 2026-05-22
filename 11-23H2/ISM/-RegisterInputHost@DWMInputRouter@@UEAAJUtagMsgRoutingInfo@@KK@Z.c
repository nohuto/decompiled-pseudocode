/*
 * XREFs of ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18001C3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180013DDC (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInpu.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001A970 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x18001C10C (-InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1801B8758 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputRouter::RegisterInputHost(_QWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 i; // rcx
  __int64 v13; // r9
  __int64 v14; // r9
  _QWORD *v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  struct IInputTarget *v19; // rbx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v21; // ebx
  unsigned int v22; // esi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // r11
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+20h] [rbp-50h]
  int v33; // [rsp+20h] [rbp-50h]
  int v34; // [rsp+20h] [rbp-50h]
  int v35; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-3Ch] BYREF
  struct IInputTarget *v37; // [rsp+38h] [rbp-38h] BYREF
  __int64 v38; // [rsp+40h] [rbp-30h] BYREF
  struct IInputTarget *v39; // [rsp+48h] [rbp-28h] BYREF
  __int64 v40; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v41[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v36 = *(_DWORD *)a2;
  v8 = 0xCBF29CE484222325uLL;
  v9 = 0xCBF29CE484222325uLL;
  v10 = 0LL;
  v11 = 0x100000001B3LL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v36 + v10++) ^ (unsigned __int64)v9);
  while ( v10 < 4 );
  v35 = *(_DWORD *)(a2 + 4);
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v35 + i) ^ (unsigned __int64)v8);
  v13 = *(_QWORD *)(a1[7] + 16 * (a1[10] & (v9 ^ v8)) + 8);
  if ( v13 == a1[5] )
  {
LABEL_6:
    v14 = 0LL;
  }
  else
  {
    while ( !operator==(a2, v13 + 16, v11, v13) )
    {
      if ( v14 == v27 )
        goto LABEL_6;
      v13 = *(_QWORD *)(v14 + 8);
    }
  }
  if ( v14 && v14 != a1[5] )
    return 0LL;
  v37 = 0LL;
  v15 = malloc(0x88uLL);
  if ( v15 )
  {
    v15[8] = 0LL;
    *((_DWORD *)v15 + 19) = 0;
    *((_DWORD *)v15 + 16) = 1;
    *v15 = &DWMInputTarget::`vftable'{for `IInputTarget'};
    v15[1] = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
    v15[2] = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
    v15[3] = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
    v15[4] = &DWMInputTarget::`vftable'{for `IInputTarget2'};
    v15[5] = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
    v15[6] = &DWMInputTarget::`vftable'{for `IInputSiteTarget'};
    v15[7] = &DWMInputTarget::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v15 + 18) = 0;
    *((_OWORD *)v15 + 5) = *(_OWORD *)a2;
    *((_OWORD *)v15 + 6) = *(_OWORD *)(a2 + 16);
    *((_OWORD *)v15 + 7) = *(unsigned __int64 *)(a2 + 32);
    *((_DWORD *)v15 + 32) = a3;
    *((_DWORD *)v15 + 33) = a4;
    v37 = (struct IInputTarget *)v15;
    v40 = 0LL;
    v16 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v15)(
            v15,
            &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f,
            &v40);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x30B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v16,
        v32);
    (*(void (__fastcall **)(_QWORD *, __int64))(*(a1 - 7) + 88LL))(a1 - 7, v40);
    v17 = DWMInputRouter::InformTargetOfAttachedDevices((DWMInputRouter *)(a1 - 7), v37);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x315,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v17,
        v32);
    }
    else
    {
      v19 = v37;
      v37 = 0LL;
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Try_emplace<tagMsgRoutingInfo const &,>(
                               (__int64)(a1 + 4),
                               (__int64)v41,
                               (int *)a2)
                + 56LL) = v19;
      v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[27];
      if ( !v20 )
      {
LABEL_16:
        v25 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        if ( v37 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v37 + 16LL))(v37);
        return 0LL;
      }
      v21 = *(_DWORD *)a2;
      v22 = *(_DWORD *)(a2 + 4);
      v35 = 0;
      v38 = 0LL;
      v23 = (**v20)(v20, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v38);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x329,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v23,
          v32);
      v24 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 32LL))(v38, &v35);
      if ( v24 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x32B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v24,
          v32);
      if ( v21 != v35 )
      {
LABEL_15:
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v38);
        goto LABEL_16;
      }
      v39 = 0LL;
      v36 = 0;
      v41[0] = 0LL;
      v28 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 48LL))(v38, &v36);
      if ( v28 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x337,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v28,
          v32);
      v29 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v38 + 64LL))(v38, v41);
      if ( v29 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x339,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v29,
          v32);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v39);
      v30 = DWMInputRouter::CreateAndRegisterTarget((DWMInputRouter *)(a1 - 7), v21, v22, v36, v41[0], &v39);
      v18 = v30;
      if ( v30 >= 0 )
      {
        v31 = (*(__int64 (__fastcall **)(_QWORD *, struct IInputTarget *))(*(a1 - 7) + 80LL))(a1 - 7, v39);
        if ( v31 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x343,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v31,
            v33);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v39);
        goto LABEL_15;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x340,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v30,
        v33);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v39);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v38);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v40);
  }
  else
  {
    v18 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x8007000ELL,
      v32);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x308,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x8007000ELL,
      v34);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v37);
  return v18;
}

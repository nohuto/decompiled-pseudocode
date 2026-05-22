/*
 * XREFs of ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180002840
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18004E6D0 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180029FAC (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BB84 (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D1CC (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18004E090 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x1800891A4 (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x18008AC00 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180097384 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800E3980 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800E6D20 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x180144B98 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180193148 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18019A4A8 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x18019C4DC (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x18019D124 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 */

// Hidden C++ exception states: #wind=14
struct IInputTarget **__fastcall DWMInputRouter::GetTargetFromInputSite(
        _QWORD *a1,
        struct IInputTarget **a2,
        _QWORD **a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD **v8; // r12
  LegacyInputSinkData *v11; // r13
  unsigned int v12; // edi
  __int64 v13; // rbx
  struct IInputTarget *v14; // rcx
  unsigned __int64 v15; // r12
  DWORD v16; // r14d
  _QWORD *v17; // rbx
  __int64 **v18; // rcx
  __int64 *i; // rax
  struct IInputTarget *v20; // rdi
  char *v21; // rax
  char *v22; // rbx
  struct InputSystemServerConnection *v23; // rax
  __int64 v24; // rax
  __int64 *InputSiteFromId; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rcx
  void (__fastcall ***v32)(_QWORD, GUID *, struct IInputTarget **); // rdi
  void (__fastcall *v33)(_QWORD, GUID *, struct IInputTarget **); // rbx
  __int128 v34; // xmm1
  bool v35; // zf
  int v36; // eax
  int v37; // eax
  struct InputSystemServerConnection **v38; // rax
  struct InputSystemServerConnection *v39; // rcx
  struct InputSiteManager *InputSiteManager; // rax
  _QWORD *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rax
  const struct _LUID *Luid; // rax
  __int64 v45; // rax
  struct IInputTarget **v46; // [rsp+20h] [rbp-E0h]
  int v47; // [rsp+20h] [rbp-E0h]
  _QWORD *v48; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD **v51; // [rsp+48h] [rbp-B8h] BYREF
  int v52; // [rsp+50h] [rbp-B0h]
  DWORD dwProcessId; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h]
  struct IInputTarget *v57; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *j; // [rsp+78h] [rbp-88h] BYREF
  _QWORD **v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+88h] [rbp-78h] BYREF
  struct IInputTarget **v61; // [rsp+90h] [rbp-70h]
  __int128 v62; // [rsp+98h] [rbp-68h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-58h]
  __int128 v64; // [rsp+B8h] [rbp-48h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int128 v66; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+F0h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v8 = a3;
  v51 = a3;
  v48 = a1;
  v61 = a2;
  *a2 = 0LL;
  v52 = 1;
  if ( !*((_BYTE *)*a3 + 480) )
  {
LABEL_86:
    v45 = InputSiteTarget::Create(&v51, v8);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(a2, v45);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v51);
    return a2;
  }
  v11 = (LegacyInputSinkData *)(*a3 + 6);
  if ( *a7 )
  {
    if ( *((_BYTE *)*a3 + 56) >= 2u )
      std::_Throw_bad_variant_access();
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a7 + 40LL))(*a7, *(_QWORD *)v11) )
    {
      v32 = (void (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*a7;
      v33 = **(void (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*a7;
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
      v33(v32, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a2);
      goto LABEL_42;
    }
  }
  if ( (a4 & 0x1000028) != 0 )
  {
    v13 = 168LL;
    v12 = 3;
  }
  else if ( (a4 & 0x10) != 0 )
  {
    v13 = 232LL;
    v12 = 4;
  }
  else if ( (a4 & 2) != 0 )
  {
    v12 = 1;
    v13 = 40LL;
  }
  else
  {
    if ( (a4 & 4) == 0 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        (const char *)v46);
    v13 = 104LL;
    v12 = 2;
  }
  if ( !*((_BYTE *)v11 + v13 + 56) )
  {
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    memset_0(&v66, 0, 0x40uLL);
    if ( *((_BYTE *)v11 + 8) >= 2u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputQueueAndTransform(*(_QWORD *)v11, v12, &v62, &v66);
    v34 = v63;
    v35 = *((_BYTE *)v11 + v13 + 56) == 0;
    *(_OWORD *)((char *)v11 + v13) = v62;
    *(_OWORD *)((char *)v11 + v13 + 16) = v34;
    *(_QWORD *)&v34 = v65;
    *(_OWORD *)((char *)v11 + v13 + 32) = v64;
    *(_QWORD *)((char *)v11 + v13 + 48) = v34;
    if ( v35 )
      *((_BYTE *)v11 + v13 + 56) = 1;
  }
  if ( (unsigned int)(*(_DWORD *)((char *)v11 + v13) - 3) <= 1 )
  {
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
    v48 = *v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v48);
    v66 = *(_OWORD *)((char *)v11 + v13 + 16);
    v67 = *(_OWORD *)((char *)v11 + v13 + 32);
    v68 = *(_QWORD *)((char *)v11 + v13 + 48);
    DWMInputRouter::CreateAndRegisterTarget(a1, &v66, &v48, a2);
    goto LABEL_42;
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 && *(_DWORD *)((char *)v11 + v13) == 2 )
  {
    GetWindowThreadProcessId(*(HWND *)(a5 + 80), &dwProcessId);
    v14 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = *(_QWORD *)(a5 + 80);
    v16 = dwProcessId;
    v17 = v48;
    v18 = (__int64 **)v48[12];
    for ( i = *v18; ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v18 )
      {
        v20 = 0LL;
        goto LABEL_19;
      }
      if ( *((_DWORD *)i + 4) == dwProcessId )
        break;
    }
    v20 = (struct IInputTarget *)i[7];
LABEL_19:
    v57 = v20;
    if ( v20 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v20 + 8LL))(v20);
      v36 = DWMFocusedInputTarget::Create(v20, 0, 0, v15, a2);
      if ( v36 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A5,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v36,
          v47);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v57);
        goto LABEL_38;
      }
    }
    else
    {
      *a2 = 0LL;
      v21 = (char *)malloc(0x50uLL);
      v22 = v21;
      if ( v21 )
        memset_0(v21, 0, 0x50uLL);
      v59 = (_QWORD **)v22;
      if ( !v22 )
      {
        v22 = 0LL;
        goto LABEL_32;
      }
      *((_DWORD *)v22 + 10) = 1;
      *(_QWORD *)v22 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
      *((_QWORD *)v22 + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
      *((_QWORD *)v22 + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
      *((_QWORD *)v22 + 3) = &DWMLegacyInputTarget::`vftable'{for `IInputSiteTarget'};
      *((_QWORD *)v22 + 4) = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v22 + 12) = v16;
      *(_QWORD *)(v22 + 52) = 0LL;
      *((_QWORD *)v22 + 8) = v15;
      *((_QWORD *)v22 + 9) = 0LL;
      v23 = ISMStatics::s_inputSystemBamoConnection;
      if ( !ISMStatics::s_inputSystemBamoConnection )
      {
        v49 = 0LL;
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v49);
        v37 = CoreUICreate(&v49);
        if ( v37 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2A,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
            (const char *)(unsigned int)v37,
            (int)v46);
        v38 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((int)&v60);
        v39 = *v38;
        *v38 = 0LL;
        ISMStatics::s_inputSystemBamoConnection = v39;
        Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v60);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v49);
        v23 = ISMStatics::s_inputSystemBamoConnection;
      }
      v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v23 + 29) + 8LL) + 152LL))(*((_QWORD *)v23 + 29) + 8LL);
      InputSiteFromId = (__int64 *)InputSiteManager::GetInputSiteFromId(v24, &v54, 1LL, *((_QWORD *)v22 + 8));
      v26 = 0LL;
      if ( &j != (_QWORD **)InputSiteFromId )
      {
        v26 = *InputSiteFromId;
        *InputSiteFromId = 0LL;
      }
      v27 = *((_QWORD *)v22 + 9);
      *((_QWORD *)v22 + 9) = v26;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v28 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      if ( !*((_QWORD *)v22 + 9) )
      {
        InputSiteManager = ISMStatics::GetInputSiteManager();
        v41 = (_QWORD *)*((_QWORD *)InputSiteManager + 7);
        for ( j = (_QWORD *)*((_QWORD *)InputSiteManager + 8); v41 != j; ++v41 )
        {
          InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>(*v41, &v55);
          v42 = v55;
          v56 = v55;
          if ( v55 )
          {
            if ( BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v55 + 8)) == *((_QWORD *)v22 + 8) )
            {
              Microsoft::WRL::ComPtr<InputSite>::operator=(v22 + 72, *v41);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)(v56 + 16) + 8LL))(v56 + 16);
              break;
            }
            v42 = v56;
          }
          if ( v42 )
          {
            v55 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v42 + 16) + 8LL))(v42 + 16);
          }
        }
      }
LABEL_32:
      if ( v22 )
      {
        *a2 = (struct IInputTarget *)v22;
        v29 = 0;
      }
      else
      {
        v29 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
          (const char *)0x8007000ELL,
          (int)v46);
      }
      if ( v29 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3AE,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v29,
          (int)v46);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v57);
        v17 = v48;
LABEL_38:
        v50 = 0LL;
        if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))*a2)(
               *a2,
               &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
               &v50) >= 0 )
        {
          Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
          v59 = &v48;
          v8 = v51;
          v48 = *v51;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v48);
          v43 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v50 + 72LL))(v50, &v62);
          v66 = *(_OWORD *)v43;
          v67 = *(_OWORD *)(v43 + 16);
          v68 = *(_QWORD *)(v43 + 32);
          DWMInputRouter::CreateAndRegisterTarget(v17, &v66, &v48, a2);
        }
        else
        {
          v8 = v51;
        }
        v30 = v50;
        if ( v50 )
        {
          v50 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        goto LABEL_42;
      }
      v17 = v48;
    }
    if ( v20 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v20 + 16LL))(v20);
    goto LABEL_38;
  }
LABEL_42:
  if ( !*a2 )
    goto LABEL_86;
  if ( *(_BYTE *)(a5 + 88) )
  {
    Luid = LegacyInputSinkData::GetLuid(v11);
    if ( (unsigned __int8)operator==(Luid, a6) )
    {
      v48 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(a2, &v48) >= 0 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v48 + 80LL))(v48, *(unsigned int *)(a5 + 92));
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v48);
    }
  }
  if ( !*a2 )
    goto LABEL_86;
  return a2;
}

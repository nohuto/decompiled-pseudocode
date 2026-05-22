/*
 * XREFs of ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180023410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180002564 (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x1800146BC (--$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@-$unordered_map@W4GameInputGamepadButton.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18019244C (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1801994E4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall InputStateManager::OnTargetWithFocusChanged(
        InputStateManager *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *),
        struct IInputTarget *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r8d
  char v15; // bl
  int v16; // eax
  int v17; // eax
  int v18; // edx
  _QWORD *v19; // r10
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  _QWORD *i; // rdi
  __int64 (__fastcall *v28)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v29; // eax
  int v30; // eax
  __int64 (__fastcall *v31)(struct IInputTarget *, GUID *, WINBOOL *); // rbx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 *v35; // rcx
  __int16 v37; // ax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  ULONG v39; // [rsp+20h] [rbp-59h]
  int v40; // [rsp+30h] [rbp-49h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-41h] BYREF
  WINBOOL v42[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v43; // [rsp+48h] [rbp-31h] BYREF
  __int64 v44; // [rsp+50h] [rbp-29h] BYREF
  LPVOID v45; // [rsp+58h] [rbp-21h] BYREF
  int v46; // [rsp+60h] [rbp-19h]
  LPVOID Context; // [rsp+68h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v6 = *((_QWORD *)this + 8);
  v7 = *((_QWORD *)this + 9);
  if ( v6 == v7 )
  {
LABEL_7:
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 40LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    v14 = 0;
    v40 = 0;
    v15 = 1;
    if ( a3 )
    {
      v44 = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
             a3,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v44) >= 0 )
      {
        LODWORD(v43) = 0;
        v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 32LL))(v44, &v40);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xEA,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controlle"
                          "rnavigationmanager.cpp",
            (const char *)(unsigned int)v16,
            v39);
        v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 48LL))(v44, &v43);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xEC,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controlle"
                          "rnavigationmanager.cpp",
            (const char *)(unsigned int)v17,
            v39);
        v15 = (_DWORD)v43 != 0;
      }
      v12 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v14 = v40;
    }
    if ( *(_BYTE *)(v13 + 228) != v15 )
    {
      *(_BYTE *)(v13 + 228) = v15;
      fPending[0] = 8;
      v37 = 196;
      if ( !v15 )
        v37 = 27;
      LOWORD(v42[0]) = v37;
      std::unordered_map<enum GameInputGamepadButtons,unsigned short>::_Insert_or_assign<enum GameInputGamepadButtons const &,unsigned short &>(
        v12,
        (__int64)&v48,
        fPending,
        v42);
      v14 = v40;
    }
    v18 = *(_DWORD *)(v13 + 224);
    if ( v18 != v14 )
    {
      v19 = (_QWORD *)(*(_QWORD *)(v13 + 152)
                     + 16
                     * (*(_QWORD *)(v13 + 176) & (0x100000001B3LL
                                                * (HIBYTE(*(_DWORD *)(v13 + 224)) ^ (0x100000001B3LL
                                                                                   * ((0x100000001B3LL
                                                                                     * (BYTE1(v18) ^ (0x100000001B3LL * ((unsigned __int8)v18 ^ 0xCBF29CE484222325uLL)))) ^ BYTE2(v18)))))));
      v20 = v19[1];
      v21 = *(_QWORD *)(v13 + 136);
      if ( v20 == v21 )
      {
LABEL_18:
        v20 = 0LL;
      }
      else
      {
        while ( v18 != *(_DWORD *)(v20 + 16) )
        {
          if ( v20 == *v19 )
            goto LABEL_18;
          v20 = *(_QWORD *)(v20 + 8);
        }
      }
      if ( v20 && v20 != v21 )
      {
        *(_BYTE *)(*(_QWORD *)(v20 + 24) + 88LL) = 1;
        v21 = *(_QWORD *)(v13 + 136);
        v14 = v40;
      }
      *(_DWORD *)(v13 + 224) = v14;
      v22 = *(_QWORD *)(v13 + 152);
      v23 = *(_QWORD *)(v22
                      + 16
                      * ((0x100000001B3LL
                        * (*(unsigned __int8 *)(v13 + 227) ^ (0x100000001B3LL
                                                            * (*(unsigned __int8 *)(v13 + 226) ^ (0x100000001B3LL
                                                                                                * (*(unsigned __int8 *)(v13 + 225) ^ (0x100000001B3LL * ((unsigned __int8)v14 ^ 0xCBF29CE484222325uLL)))))))) & *(_QWORD *)(v13 + 176))
                      + 8);
      if ( v23 == v21 )
      {
LABEL_21:
        v23 = 0LL;
      }
      else
      {
        while ( v14 != *(_DWORD *)(v23 + 16) )
        {
          if ( v23 == *(_QWORD *)(v22
                                + 16
                                * ((0x100000001B3LL
                                  * (*(unsigned __int8 *)(v13 + 227) ^ (0x100000001B3LL
                                                                      * (*(unsigned __int8 *)(v13 + 226) ^ (0x100000001B3LL * (*(unsigned __int8 *)(v13 + 225) ^ (0x100000001B3LL * ((unsigned __int8)v14 ^ 0xCBF29CE484222325uLL)))))))) & *(_QWORD *)(v13 + 176))) )
            goto LABEL_21;
          v23 = *(_QWORD *)(v23 + 8);
        }
      }
      if ( !v23 || v23 == v21 )
      {
        Context = 0LL;
        if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
        {
          v45 = &`InputETW::Instance'::`2'::wrapper;
          Context = &qword_180268F98;
          qword_180268F98 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
          qword_180268FB0 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
          v46 = 0;
          wil::details::static_lazy<InputETW>::Completer::~Completer(&v45);
        }
        v24 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v24 && *v24 > 1u )
        {
          v45 = 0LL;
          if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, v42, &v45) && v42[0] )
          {
            v48.Ptr = (ULONGLONG)&`InputETW::Instance'::`2'::wrapper;
            v45 = &qword_180268F98;
            qword_180268F98 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
            qword_180268FB0 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
            v48.Size = 0;
            wil::details::static_lazy<InputETW>::Completer::~Completer(&v48);
          }
          v25 = *((_QWORD *)v45 + 1);
          if ( *(_DWORD *)v25 > 5u
            && (*(_BYTE *)(v25 + 16) & 1) != 0
            && (*(_QWORD *)(v25 + 24) & 1LL) == *(_QWORD *)(v25 + 24) )
          {
            tlgWriteTransfer_EventWriteTransfer(v25, (int)&dword_180228145, 0, 0, 2u, &v48);
          }
        }
        v26 = *(_QWORD **)(v13 + 72);
        for ( i = (_QWORD *)*v26; i != v26; i = (_QWORD *)*i )
          ControllerProcessor::UpdateNavigationState(i[3], 2LL, 0LL);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v13 + 8) + 32LL))(v13 + 8, 0LL);
      }
      else
      {
        ControllerNavigationManager::SetCurrentStateWithClient(
          (ControllerNavigationManager *)v13,
          *(struct BamoControllerNavigationClientProxy **)(v23 + 24));
      }
    }
    fPending[0] = 0;
    v40 = 0;
    *((_DWORD *)this + 45) = -1;
    if ( a2 )
    {
      v43 = 0LL;
      v28 = **a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v43);
      v29 = v28((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v43);
      if ( v29 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x274,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v29,
          v39);
        v35 = &v43;
        goto LABEL_46;
      }
      v30 = (*(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v43 + 32LL))(v43, fPending);
      if ( v30 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x278,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v30,
          v39);
        v35 = &v43;
        goto LABEL_46;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v43);
    }
    if ( !a3 )
      return 0LL;
    LODWORD(v43) = 0;
    *(_QWORD *)v42 = 0LL;
    v31 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a3;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v42);
    v32 = v31(a3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v42);
    if ( v32 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x287,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v32,
        v39);
    }
    else
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v42 + 32LL))(*(_QWORD *)v42, &v40);
      if ( v33 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x28C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v33,
          v39);
      }
      else
      {
        v34 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v42 + 48LL))(*(_QWORD *)v42, &v43);
        if ( v34 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x290,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
            (const char *)(unsigned int)v34,
            v39);
        }
        else if ( (_DWORD)v43 )
        {
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          ViewHelper::GetWindowForViewId(&v45, (__int64)ViewHierarchy);
          if ( v45 )
          {
            *((_DWORD *)this + 45) = -1;
            winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v45);
          }
        }
      }
    }
    v35 = (__int64 *)v42;
LABEL_46:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v35);
    return 0LL;
  }
  while ( 1 )
  {
    *(_QWORD *)fPending = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, WINBOOL *))(v6 + 8))(
           *(_QWORD *)(v6 + 8),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           fPending) < 0 )
    {
      v10 = *(_QWORD *)fPending;
      if ( !*(_QWORD *)fPending )
        goto LABEL_6;
LABEL_5:
      *(_QWORD *)fPending = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      goto LABEL_6;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**(_QWORD **)fPending + 24LL))(
           *(_QWORD *)fPending,
           (struct IInputTarget *)a2,
           a3);
    v9 = v8;
    if ( v8 < 0 )
      break;
    v10 = *(_QWORD *)fPending;
    if ( *(_QWORD *)fPending )
      goto LABEL_5;
LABEL_6:
    v6 += 16LL;
    if ( v6 == v7 )
      goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D0,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v8,
    v39);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
  return v9;
}

/*
 * XREFs of ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180015680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180001DF0 (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x18000A8D0 (-SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18017321C (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017A0C4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
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
  __int64 v12; // rsi
  char v13; // bl
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 i; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 j; // rcx
  _QWORD *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *k; // rdi
  __int64 (__fastcall *v32)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v33; // eax
  int v34; // eax
  __int64 (__fastcall *v35)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 *v39; // rcx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  ULONG v42; // [rsp+20h] [rbp-59h]
  __int64 v43; // [rsp+30h] [rbp-49h] BYREF
  __int64 v44; // [rsp+38h] [rbp-41h] BYREF
  WINBOOL v45[2]; // [rsp+40h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-31h] BYREF
  __int64 v47; // [rsp+50h] [rbp-29h] BYREF
  LPVOID v48; // [rsp+58h] [rbp-21h] BYREF
  int v49; // [rsp+60h] [rbp-19h]
  LPVOID Context; // [rsp+68h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v6 = *((_QWORD *)this + 8);
  v7 = *((_QWORD *)this + 9);
  if ( v6 == v7 )
  {
LABEL_7:
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 40LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
    LODWORD(v43) = 0;
    v13 = 1;
    if ( a3 )
    {
      v47 = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
             a3,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v47) >= 0 )
      {
        LODWORD(v44) = 0;
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v47 + 32LL))(v47, &v43);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xEA,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controlle"
                          "rnavigationmanager.cpp",
            (const char *)(unsigned int)v14,
            v42);
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v47 + 48LL))(v47, &v44);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xEC,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controlle"
                          "rnavigationmanager.cpp",
            (const char *)(unsigned int)v15,
            v42);
        v13 = (_DWORD)v44 != 0;
      }
      v16 = v47;
      if ( v47 )
      {
        v47 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    if ( *(_BYTE *)(v12 + 228) != v13 )
    {
      *(_BYTE *)(v12 + 228) = v13;
      v17 = ControllerProcessor::SetControllerVirtualKeyMappings(v13);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF6,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllern"
                        "avigationmanager.cpp",
          (const char *)(unsigned int)v17,
          v42);
    }
    if ( *(_DWORD *)(v12 + 224) != (_DWORD)v43 )
    {
      v18 = 0xCBF29CE484222325uLL;
      v19 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 4; ++i )
        v19 = 0x100000001B3LL * (*(unsigned __int8 *)(i + v12 + 224) ^ (unsigned __int64)v19);
      v21 = (_QWORD *)(*(_QWORD *)(v12 + 152) + 16 * (*(_QWORD *)(v12 + 176) & v19));
      v22 = v21[1];
      v23 = *(_QWORD *)(v12 + 136);
      if ( v22 != v23 )
      {
        while ( *(_DWORD *)(v12 + 224) != *(_DWORD *)(v22 + 16) )
        {
          if ( v22 == *v21 )
            goto LABEL_20;
          v22 = *(_QWORD *)(v22 + 8);
        }
        if ( v22 && v22 != v23 )
          *(_BYTE *)(*(_QWORD *)(v22 + 24) + 88LL) = 1;
      }
LABEL_20:
      *(_DWORD *)(v12 + 224) = v43;
      for ( j = 0LL; j < 4; ++j )
        v18 = 0x100000001B3LL * (*(unsigned __int8 *)(j + v12 + 224) ^ (unsigned __int64)v18);
      v25 = (_QWORD *)(*(_QWORD *)(v12 + 152) + 16 * (*(_QWORD *)(v12 + 176) & v18));
      v26 = v25[1];
      v27 = *(_QWORD *)(v12 + 136);
      if ( v26 == v27 )
        goto LABEL_23;
      while ( *(_DWORD *)(v12 + 224) != *(_DWORD *)(v26 + 16) )
      {
        if ( v26 == *v25 )
          goto LABEL_23;
        v26 = *(_QWORD *)(v26 + 8);
      }
      if ( !v26 || v26 == v27 )
      {
LABEL_23:
        Context = 0LL;
        if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
        {
          v48 = &`InputETW::Instance'::`2'::wrapper;
          Context = &qword_180242E40;
          qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
          qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
          v49 = 0;
          wil::details::static_lazy<InputETW>::Completer::~Completer(&v48);
        }
        v28 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v28 && *v28 > 1u )
        {
          v48 = 0LL;
          if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, v45, &v48) && v45[0] )
          {
            v51.Ptr = (ULONGLONG)&`InputETW::Instance'::`2'::wrapper;
            v48 = &qword_180242E40;
            qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
            qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
            v51.Size = 0;
            wil::details::static_lazy<InputETW>::Completer::~Completer(&v51);
          }
          v29 = *((_QWORD *)v48 + 1);
          if ( *(_DWORD *)v29 > 5u
            && (*(_BYTE *)(v29 + 16) & 1) != 0
            && (*(_QWORD *)(v29 + 24) & 1LL) == *(_QWORD *)(v29 + 24) )
          {
            tlgWriteTransfer_EventWriteTransfer(v29, (int)&dword_180205C66, 0, 0, 2u, &v51);
          }
        }
        v30 = *(_QWORD **)(v12 + 72);
        for ( k = (_QWORD *)*v30; k != v30; k = (_QWORD *)*k )
          ControllerProcessor::UpdateNavigationState(k[3], 2LL, 0LL);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v12 + 8) + 32LL))(v12 + 8, 0LL);
      }
      else
      {
        ControllerNavigationManager::SetCurrentStateWithClient(
          (ControllerNavigationManager *)v12,
          *(struct BamoControllerNavigationClientProxy **)(v26 + 24));
      }
    }
    v45[0] = 0;
    fPending = 0;
    *((_DWORD *)this + 45) = -1;
    if ( a2 )
    {
      v44 = 0LL;
      v32 = **a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v44);
      v33 = v32((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v44);
      if ( v33 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x274,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v33,
          v42);
        v39 = &v44;
        goto LABEL_46;
      }
      v34 = (*(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v44 + 32LL))(v44, v45);
      if ( v34 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x278,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v34,
          v42);
        v39 = &v44;
        goto LABEL_46;
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v44);
    }
    if ( !a3 )
      return 0LL;
    LODWORD(v44) = 0;
    v43 = 0LL;
    v35 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v43);
    v36 = v35(a3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v43);
    if ( v36 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x287,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v36,
        v42);
    }
    else
    {
      v37 = (*(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v43 + 32LL))(v43, &fPending);
      if ( v37 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x28C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v37,
          v42);
      }
      else
      {
        v38 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 48LL))(v43, &v44);
        if ( v38 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x290,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
            (const char *)(unsigned int)v38,
            v42);
        }
        else if ( (_DWORD)v44 )
        {
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          ViewHelper::GetWindowForViewId(&v48, (__int64)ViewHierarchy);
          if ( v48 )
          {
            *((_DWORD *)this + 45) = -1;
            winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v48);
          }
        }
      }
    }
    v39 = &v43;
LABEL_46:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v39);
    return 0LL;
  }
  while ( 1 )
  {
    *(_QWORD *)v45 = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, WINBOOL *))(v6 + 8))(
           *(_QWORD *)(v6 + 8),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           v45) < 0 )
    {
      v10 = *(_QWORD *)v45;
      if ( !*(_QWORD *)v45 )
        goto LABEL_6;
LABEL_5:
      *(_QWORD *)v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      goto LABEL_6;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**(_QWORD **)v45 + 24LL))(
           *(_QWORD *)v45,
           (struct IInputTarget *)a2,
           a3);
    v9 = v8;
    if ( v8 < 0 )
      break;
    v10 = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 )
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
    v42);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v45);
  return v9;
}

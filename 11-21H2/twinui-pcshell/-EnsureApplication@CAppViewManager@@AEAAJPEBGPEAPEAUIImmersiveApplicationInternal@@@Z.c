/*
 * XREFs of ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F5B6C
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x1802F5750 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18006DFA0 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800E8B48 (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x1802F4DEC (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1802F7864 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802FC39C (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::EnsureApplication(
        CAppViewManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplicationInternal **a3)
{
  int ViewForSwitchInternal; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  RTL_SRWLOCK *v12; // rbx
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v21; // [rsp+30h] [rbp-29h] BYREF
  __int64 v22; // [rsp+38h] [rbp-21h] BYREF
  struct IIAMServiceProvider *v23; // [rsp+40h] [rbp-19h] BYREF
  int v24[2]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v25[8]; // [rsp+50h] [rbp-9h] BYREF
  char *v26; // [rsp+58h] [rbp-1h]
  __int64 v27; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF
  HSTRING v29; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  *(_QWORD *)v24 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v24);
  ViewForSwitchInternal = CAppViewManager::_GetViewForSwitchInternal(this, 0LL, a2);
  v7 = ViewForSwitchInternal;
  if ( ViewForSwitchInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForSwitchInternal);
    goto LABEL_29;
  }
  v21 = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v24;
  v9 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v24;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v10 = v9(v8, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v21);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C6,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_5:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    goto LABEL_29;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))this + 15))(
          *((_QWORD *)this + 15),
          &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
          &v23);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CF,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
    goto LABEL_5;
  }
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v25,
    v23);
  if ( (int)v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D1,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v26);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v27);
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64, struct IImmersiveApplicationInternal **))(**((_QWORD **)this + 15) + 168LL))(
          *((_QWORD *)this + 15),
          a2,
          v27,
          a3);
  if ( v13 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v24 + 384LL))(*(_QWORD *)v24);
    if ( v16 )
    {
      LOBYTE(v15) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 552LL))(*a3, v15);
      if ( v12 )
        ReleaseSRWLockExclusive(v12);
      CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
      v22 = 0LL;
      v17 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v22);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v17 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v22, v16, 0LL);
        v7 = v17;
        if ( v17 >= 0 )
        {
          v29 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"InitialPositionIsForDrag",
            0x19u,
            0x18u);
          v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                  v29,
                  v19,
                  1);
          v7 = v17;
          if ( v17 >= 0 )
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 152LL))(
                    *((_QWORD *)this + 15),
                    *a3,
                    v22,
                    0LL,
                    0LL);
            v7 = v17;
            if ( v17 >= 0 )
            {
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
              v7 = 0;
              goto LABEL_29;
            }
            v18 = 1008LL;
          }
          else
          {
            v18 = 1004LL;
          }
        }
        else
        {
          v18 = 1000LL;
        }
      }
      else
      {
        v18 = 998LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      goto LABEL_5;
    }
    v13 = -2147418113;
    v14 = 987LL;
  }
  else
  {
    v14 = 982LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v13);
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v25);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v7 = v13;
LABEL_29:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v24);
  return v7;
}

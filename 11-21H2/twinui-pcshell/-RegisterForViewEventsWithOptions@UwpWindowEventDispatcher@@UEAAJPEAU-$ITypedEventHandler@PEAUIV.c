/*
 * XREFs of ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1803F0790
 * Callers:
 *     ?RegisterForViewEvents@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1803F0700 (-RegisterForViewEvents@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3CA4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1801214A8 (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x1803DD264 (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 *     ??$make_shared@UViewEventRegistration@@$$V@std@@YA?AV?$shared_ptr@UViewEventRegistration@@@0@XZ @ 0x1803DE000 (--$make_shared@UViewEventRegistration@@$$V@std@@YA-AV-$shared_ptr@UViewEventRegistration@@@0@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 UwpWindowEventDispatcher::RegisterForViewEventsWithOptions(RTL_SRWLOCK *a1, __int64 a2, ...)
{
  HSTRING v2; // r12
  HSTRING v3; // r13
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  Windows::Internal::String *v9; // rdi
  __int64 v10; // rax
  int AgileReference; // ebx
  __int64 v12; // rcx
  HSTRING **Ptr; // r15
  PCWSTR v14; // rax
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rdi
  UINT32 v17; // ebx
  const WCHAR *v18; // rax
  HSTRING *v19; // rcx
  char *v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // r9
  const char *v23; // r9
  __int64 v24; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-68h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-68h]
  INT32 result[2]; // [rsp+30h] [rbp-58h] BYREF
  PCWSTR v28; // [rsp+38h] [rbp-50h] BYREF
  RTL_SRWLOCK *v29; // [rsp+40h] [rbp-48h] BYREF
  Windows::Internal::String *v30; // [rsp+48h] [rbp-40h] BYREF
  std::_Ref_count_base *v31; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  HSTRING v33; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  HSTRING v35; // [rsp+A8h] [rbp+20h] BYREF
  va_list va1; // [rsp+A8h] [rbp+20h]
  __int64 v37; // [rsp+B0h] [rbp+28h]
  _QWORD *v38; // [rsp+B8h] [rbp+30h]
  va_list va2; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v33 = va_arg(va1, HSTRING);
  va_copy(va2, va1);
  v35 = va_arg(va2, HSTRING);
  v37 = va_arg(va2, _QWORD);
  v38 = va_arg(va2, _QWORD *);
  v2 = v35;
  v3 = v33;
  try
  {
    std::make_shared<ViewEventRegistration,>(&v30);
    if ( !v30 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x800,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        v6);
    v7 = Windows::Internal::String::Initialize((HSTRING *)v30, (HSTRING *)va);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x801,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        bIgnoreCase);
    v8 = Windows::Internal::String::Initialize((HSTRING *)v30 + 1, (HSTRING *)va1);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x802,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        bIgnoreCase);
    *((_DWORD *)v30 + 4) = v37;
    v9 = v30;
    v10 = 0LL;
    *(_QWORD *)result = 0LL;
    AgileReference = 0;
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)result);
      AgileReference = RoGetAgileReference(0LL, &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, a2, result);
      v10 = *(_QWORD *)result;
    }
    *(_QWORD *)result = 0LL;
    v12 = *((_QWORD *)v9 + 3);
    *((_QWORD *)v9 + 3) = v10;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)result);
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x804,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)AgileReference,
        bIgnoreCase);
    wil::AcquireSRWLockExclusive(&v29, a1 + 56);
    Ptr = (HSTRING **)a1[50].Ptr;
    v14 = (PCWSTR)a1[51].Ptr;
    v28 = v14;
    while ( Ptr != (HSTRING **)v14 )
    {
      StringLen = WindowsGetStringLen(*(HSTRING *)v30);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)v30, 0LL);
      v17 = WindowsGetStringLen(**Ptr);
      v18 = WindowsGetStringRawBuffer(**Ptr, 0LL);
      if ( CompareStringOrdinal(v18, v17, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty((*Ptr)[1])
          || WindowsIsStringEmpty(*((HSTRING *)v30 + 1))
          || (v19 = *Ptr, result[0] = 0, WindowsCompareStringOrdinal(v19[1], *((HSTRING *)v30 + 1), result), !result[0]) )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x821,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)0x80070057LL,
            bIgnoreCasea);
        }
      }
      Ptr += 2;
      v14 = v28;
    }
    v20 = (char *)a1[49].Ptr;
    a1[49].Ptr = v20 + 1;
    *((_QWORD *)v30 + 4) = v20;
    v21 = a1[51].Ptr;
    if ( v21 == a1[52].Ptr )
    {
      std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        &a1[50].Ptr,
        (_QWORD *)a1[51].Ptr,
        &v30);
    }
    else
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        v21,
        &v30);
      *(_QWORD *)(v22 + 8) += 16LL;
    }
    *v38 = *((_QWORD *)v30 + 4);
    v28 = WindowsGetStringRawBuffer(v2, 0LL);
    *(_QWORD *)result = WindowsGetStringRawBuffer(v3, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
      (__int64 *)result,
      (__int64 *)&v28);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v29);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    v24 = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x82F,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v23);
  }
  return v24;
}

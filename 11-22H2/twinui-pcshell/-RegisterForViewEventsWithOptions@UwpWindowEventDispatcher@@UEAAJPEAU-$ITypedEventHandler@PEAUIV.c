/*
 * XREFs of ?RegisterForViewEventsWithOptions@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18009B9C0
 * Callers:
 *     ?RegisterForViewEvents@UwpWindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x18009AD30 (-RegisterForViewEvents@UwpWindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??$make_shared@UViewEventRegistration@@$$V@std@@YA?AV?$shared_ptr@UViewEventRegistration@@@0@XZ @ 0x18009BD3C (--$make_shared@UViewEventRegistration@@$$V@std@@YA-AV-$shared_ptr@UViewEventRegistration@@@0@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x18009CEC0 (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1800ADF38 (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UwpWindowEventDispatcher::RegisterForViewEventsWithOptions(
        RTL_SRWLOCK *a1,
        __int64 a2,
        HSTRING a3,
        HSTRING a4,
        int a5,
        _QWORD *a6)
{
  const char *v10; // r9
  HSTRING *v11; // rbx
  HRESULT v12; // edi
  HSTRING v13; // rcx
  __int64 v14; // rdi
  HRESULT v15; // ebx
  HSTRING v16; // rcx
  __int64 v17; // rdi
  HSTRING v18; // rax
  int AgileReference; // ebx
  __int64 v20; // rcx
  HSTRING **Ptr; // r12
  HSTRING **v22; // rax
  UINT32 StringLen; // r14d
  const WCHAR *StringRawBuffer; // rsi
  UINT32 v25; // edi
  const WCHAR *v26; // rax
  HSTRING *v27; // rcx
  char *v28; // rcx
  _QWORD *v29; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-68h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-68h]
  HSTRING newString; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v34[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v35; // [rsp+48h] [rbp-40h] BYREF
  std::_Ref_count_base *v36; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  std::make_shared<ViewEventRegistration,>(&v35);
  v11 = (HSTRING *)v35;
  if ( !v35 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x837,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      v10);
  v12 = WindowsDuplicateString(a3, &newString);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x838,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v12,
      bIgnoreCase);
  v13 = *v11;
  *v11 = newString;
  WindowsDeleteString(v13);
  v14 = v35;
  v15 = WindowsDuplicateString(a4, &newString);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x839,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      bIgnoreCase);
  v16 = *(HSTRING *)(v14 + 8);
  *(_QWORD *)(v14 + 8) = newString;
  WindowsDeleteString(v16);
  *(_DWORD *)(v35 + 16) = a5;
  v17 = v35;
  v18 = 0LL;
  newString = 0LL;
  AgileReference = 0;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&newString);
    AgileReference = RoGetAgileReference(0LL, &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, a2, &newString);
    v18 = newString;
  }
  newString = 0LL;
  v20 = *(_QWORD *)(v17 + 24);
  *(_QWORD *)(v17 + 24) = v18;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&newString);
  if ( AgileReference < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x83B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)AgileReference,
      bIgnoreCase);
  AcquireSRWLockExclusive(a1 + 58);
  v34[1] = a1 + 58;
  Ptr = (HSTRING **)a1[52].Ptr;
  v22 = (HSTRING **)a1[53].Ptr;
  v34[0] = v22;
  while ( Ptr != v22 )
  {
    StringLen = WindowsGetStringLen(*(HSTRING *)v35);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)v35, 0LL);
    v25 = WindowsGetStringLen(**Ptr);
    v26 = WindowsGetStringRawBuffer(**Ptr, 0LL);
    if ( CompareStringOrdinal(v26, v25, StringRawBuffer, StringLen, 1) == 2 )
    {
      if ( WindowsIsStringEmpty((*Ptr)[1])
        || WindowsIsStringEmpty(*(HSTRING *)(v35 + 8))
        || (v27 = *Ptr,
            LODWORD(newString) = 0,
            WindowsCompareStringOrdinal(v27[1], *(HSTRING *)(v35 + 8), (INT32 *)&newString),
            !(_DWORD)newString) )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x858,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)0x80070057LL,
          bIgnoreCasea);
      }
    }
    Ptr += 2;
    v22 = (HSTRING **)v34[0];
  }
  v28 = (char *)a1[51].Ptr;
  a1[51].Ptr = v28 + 1;
  *(_QWORD *)(v35 + 32) = v28;
  v29 = a1[53].Ptr;
  if ( v29 == a1[54].Ptr )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
      &a1[52],
      a1[53].Ptr,
      &v35);
  }
  else
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v29,
      &v35);
    a1[53].Ptr = (char *)a1[53].Ptr + 16;
  }
  *a6 = *(_QWORD *)(v35 + 32);
  v34[0] = WindowsGetStringRawBuffer(a4, 0LL);
  newString = (HSTRING)WindowsGetStringRawBuffer(a3, 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
    &newString,
    v34);
  if ( a1 != (RTL_SRWLOCK *)-464LL )
    ReleaseSRWLockExclusive(a1 + 58);
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  return 0LL;
}

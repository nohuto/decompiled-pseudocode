/*
 * XREFs of ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1804C8630
 * Callers:
 *     ?RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1804C85A0 (-RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@Vie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??$make_shared@UViewEventRegistration@@$$V@std@@YA?AV?$shared_ptr@UViewEventRegistration@@@0@XZ @ 0x18009BD3C (--$make_shared@UViewEventRegistration@@$$V@std@@YA-AV-$shared_ptr@UViewEventRegistration@@@0@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x18009CEC0 (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1800ADF38 (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800EBDE4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 WindowEventDispatcher::RegisterForViewEventsWithOptions(__int64 a1, __int64 a2, ...)
{
  const char *v4; // r9
  int v5; // eax
  int v6; // eax
  Windows::Internal::String *v7; // rdi
  __int64 v8; // rax
  int AgileReference; // ebx
  __int64 v10; // rcx
  HSTRING **v11; // r12
  const WCHAR *v12; // rax
  UINT32 StringLen; // r14d
  const WCHAR *StringRawBuffer; // rsi
  UINT32 v15; // edi
  const WCHAR *v16; // rax
  HSTRING *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  const char *v20; // r9
  __int64 v21; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-68h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-68h]
  INT32 result[2]; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v25[2]; // [rsp+38h] [rbp-50h] BYREF
  Windows::Internal::String *v26; // [rsp+48h] [rbp-40h] BYREF
  std::_Ref_count_base *v27; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  HSTRING v29; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  HSTRING string; // [rsp+A8h] [rbp+20h] BYREF
  va_list stringa; // [rsp+A8h] [rbp+20h]
  __int64 v33; // [rsp+B0h] [rbp+28h]
  _QWORD *v34; // [rsp+B8h] [rbp+30h]
  va_list va2; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(stringa, a2);
  va_start(va, a2);
  v29 = va_arg(stringa, HSTRING);
  va_copy(va2, stringa);
  string = va_arg(va2, HSTRING);
  v33 = va_arg(va2, _QWORD);
  v34 = va_arg(va2, _QWORD *);
  try
  {
    std::make_shared<ViewEventRegistration,>(&v26);
    if ( !v26 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x728,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v4);
    v5 = Windows::Internal::String::Initialize((HSTRING *)v26, (HSTRING *)va);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x729,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        bIgnoreCase);
    v6 = Windows::Internal::String::Initialize((HSTRING *)v26 + 1, (HSTRING *)stringa);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x72A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        bIgnoreCase);
    *((_DWORD *)v26 + 4) = v33;
    v7 = v26;
    v8 = 0LL;
    *(_QWORD *)result = 0LL;
    AgileReference = 0;
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)result);
      AgileReference = RoGetAgileReference(0LL, &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, a2, result);
      v8 = *(_QWORD *)result;
    }
    *(_QWORD *)result = 0LL;
    v10 = *((_QWORD *)v7 + 3);
    *((_QWORD *)v7 + 3) = v8;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)result);
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x72C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)AgileReference,
        bIgnoreCase);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 448));
    v25[1] = (const WCHAR *)(a1 + 448);
    v11 = *(HSTRING ***)(a1 + 400);
    v12 = *(const WCHAR **)(a1 + 408);
    v25[0] = v12;
    while ( v11 != (HSTRING **)v12 )
    {
      StringLen = WindowsGetStringLen(*(HSTRING *)v26);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)v26, 0LL);
      v15 = WindowsGetStringLen(**v11);
      v16 = WindowsGetStringRawBuffer(**v11, 0LL);
      if ( CompareStringOrdinal(v16, v15, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty((*v11)[1])
          || WindowsIsStringEmpty(*((HSTRING *)v26 + 1))
          || (v17 = *v11, result[0] = 0, WindowsCompareStringOrdinal(v17[1], *((HSTRING *)v26 + 1), result), !result[0]) )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x749,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)0x80070057LL,
            bIgnoreCasea);
        }
      }
      v11 += 2;
      v12 = v25[0];
    }
    v18 = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a1 + 392) = v18 + 1;
    *((_QWORD *)v26 + 4) = v18;
    v19 = *(_QWORD **)(a1 + 408);
    if ( v19 == *(_QWORD **)(a1 + 416) )
    {
      std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        (__int64 *)(a1 + 400),
        *(_QWORD *)(a1 + 408),
        &v26);
    }
    else
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v19,
        &v26);
      *(_QWORD *)(a1 + 408) += 16LL;
    }
    *v34 = *((_QWORD *)v26 + 4);
    v25[0] = WindowsGetStringRawBuffer(string, 0LL);
    *(_QWORD *)result = WindowsGetStringRawBuffer(v29, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
      (const WCHAR **)result,
      v25);
    if ( a1 != -448 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 448));
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    v21 = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x757,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v20);
  }
  return v21;
}

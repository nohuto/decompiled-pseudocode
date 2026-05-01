/*
 * XREFs of ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1804C80C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x1800A2154 (--$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$Q.c)
 *     ??$copy_to@UIObjectArray@@@?$com_ptr_t@UIObjectCollection@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIObjectArray@@@Z @ 0x1800A23E4 (--$copy_to@UIObjectArray@@@-$com_ptr_t@UIObjectCollection@@Uerr_exception_policy@wil@@@wil@@QEBA.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     wil::details::ScopeExitFn__lambda_93ebf80ac66e1414c5401c7bf7d7a101___::_ScopeExitFn__lambda_93ebf80ac66e1414c5401c7bf7d7a101___ @ 0x1801F3850 (wil--details--ScopeExitFn__lambda_93ebf80ac66e1414c5401c7bf7d7a101___--_ScopeExitFn__lambda_93eb.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804C2A24 (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804CD444 (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  RTL_SRWLOCK *v4; // r14
  RTL_SRWLOCK *v5; // rbx
  struct _GUID *i; // rdx
  HSTRING *v7; // r13
  char v8; // al
  int v9; // eax
  _QWORD *p_Ptr; // r12
  __int64 j; // rdi
  const WCHAR *StringRawBuffer; // r15
  __int64 v13; // rcx
  const WCHAR *v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // r15
  _QWORD *v16; // rax
  int v17; // eax
  const char *v18; // r9
  int v19; // eax
  const char *v20; // r9
  __int64 result; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-D8h]
  void *v23; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-B8h] BYREF
  PCWSTR v26; // [rsp+48h] [rbp-B0h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, _QWORD *); // [rsp+60h] [rbp-98h] BYREF
  __int64 v29; // [rsp+68h] [rbp-90h]
  _QWORD *v30; // [rsp+70h] [rbp-88h]
  RTL_SRWLOCK *v31; // [rsp+78h] [rbp-80h]
  RTL_SRWLOCK *v32; // [rsp+80h] [rbp-78h]
  RTL_SRWLOCK *v33; // [rsp+88h] [rbp-70h]
  __int64 *v34; // [rsp+90h] [rbp-68h] BYREF
  char v35; // [rsp+98h] [rbp-60h]
  _BYTE v36[8]; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v37[8]; // [rsp+A8h] [rbp-50h] BYREF
  _QWORD v38[9]; // [rsp+B0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  PCWSTR v40; // [rsp+100h] [rbp+8h] BYREF
  _QWORD *v41; // [rsp+110h] [rbp+18h]
  int v42; // [rsp+118h] [rbp+20h] BYREF

  v41 = a3;
  v40 = (PCWSTR)this;
  v4 = this;
  v32 = this;
  *a3 = 0LL;
  v5 = this + 55;
  AcquireSRWLockExclusive(this + 55);
  try
  {
    v33 = v5;
    if ( LOBYTE(v4[58].Ptr) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7A9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x8007139FLL,
        bIgnoreCase);
    *(_OWORD *)v27 = 0LL;
    for ( i = (struct _GUID *)v4[49].Ptr; ; ++i )
    {
      if ( i == v4[50].Ptr )
      {
        v7 = (HSTRING *)v27[0];
        goto LABEL_11;
      }
      if ( *(_QWORD *)(*(_QWORD *)&i->Data1 + 32LL) == a2.value )
        break;
    }
    std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v27, i);
    v7 = (HSTRING *)v27[0];
    if ( v27[0] )
    {
      v8 = 0;
      goto LABEL_12;
    }
LABEL_11:
    v8 = 1;
LABEL_12:
    if ( v8 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7B6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x80070490LL,
        bIgnoreCase);
    v23 = 0LL;
    v9 = CEnumerableObjectCollection::CreateInstance((__int64)retaddr, i, &v23);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7BB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        bIgnoreCase);
    p_Ptr = &v4[45].Ptr;
    v26 = (PCWSTR)&v4[45];
    v31 = v4 + 45;
    for ( j = ((char *)v4[46].Ptr - (char *)v4[45].Ptr) >> 3; ; --j )
    {
      v29 = j;
      if ( !j )
        break;
      StringRawBuffer = WindowsGetStringRawBuffer(v7[1], 0LL);
      v13 = *(_QWORD *)(*p_Ptr + 8 * j - 8);
      v14 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 280LL))(v13);
      if ( CompareStringOrdinal(v14, -1, StringRawBuffer, -1, 0) == 2 )
      {
        v28 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*p_Ptr + 8 * j - 8);
        v15 = v28;
        if ( v28 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v28)[1])(v28);
        std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
          v31,
          v36,
          *p_Ptr - 8LL + 8 * j);
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
          &v28,
          &v24);
        v34 = &v24;
        v35 = 1;
        v16 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
                v38,
                v27);
        try
        {
          v30 = v16;
          v25 = v15;
          if ( v15 )
          {
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[1])(v15);
            v16 = v30;
          }
          WindowEventDispatcher::CacheWindowWrapper((__int64 *)&v4[-4], (__int64 *)&v25, v16, (const char *)1);
          v17 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v23 + 40LL))(v23, v24);
          if ( v17 >= 0 )
          {
            v35 = 0;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x7D7,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v17);
            std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
              &v4[42],
              v37,
              (char *)v32[43].Ptr - 8);
          }
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x7E1,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            v18);
          v4 = (RTL_SRWLOCK *)v40;
          v5 = v33;
          v7 = (HSTRING *)v27[0];
          j = v29;
          p_Ptr = v26;
        }
        wil::details::ScopeExitFn__lambda_93ebf80ac66e1414c5401c7bf7d7a101___::_ScopeExitFn__lambda_93ebf80ac66e1414c5401c7bf7d7a101___(&v34);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
      }
    }
    v42 = 0;
    v19 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v23 + 24LL))(v23, &v42);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7E6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v19);
    v40 = WindowsGetStringRawBuffer(v7[1], 0LL);
    v26 = WindowsGetStringRawBuffer(*v7, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RecoveringViews<unsigned int &,unsigned short const *,unsigned short const *>(
      &v42,
      (__int64 *)&v26,
      (__int64 *)&v40);
    wil::com_ptr_t<IObjectCollection,wil::err_exception_policy>::copy_to<IObjectArray>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v23,
      v41);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    if ( v27[1] )
      std::_Ref_count_base::_Decref(v27[1]);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v40) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x7ED,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                     v20);
    return (unsigned int)v40;
  }
  return result;
}

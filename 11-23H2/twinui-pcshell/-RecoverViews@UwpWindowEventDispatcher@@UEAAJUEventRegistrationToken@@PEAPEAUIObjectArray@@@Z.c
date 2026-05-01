/*
 * XREFs of ?RecoverViews@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1800A21E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x1800A2154 (--$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$Q.c)
 *     ??$copy_to@UIObjectArray@@@?$com_ptr_t@UIObjectCollection@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIObjectArray@@@Z @ 0x1800A23E4 (--$copy_to@UIObjectArray@@@-$com_ptr_t@UIObjectCollection@@Uerr_exception_policy@wil@@@wil@@QEBA.c)
 *     ?CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800ADE28 (-CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowWrapperInternal@@@Z @ 0x18016B094 (--0-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowW.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801933F8 (-erase@-$vector@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall UwpWindowEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  RTL_SRWLOCK *v5; // rbx
  struct _GUID *i; // rdx
  HSTRING *v7; // rdi
  char v8; // al
  int v9; // eax
  RTL_SRWLOCK *v10; // r12
  __int64 v11; // r15
  int v12; // eax
  __int64 v14; // rcx
  const WCHAR *v15; // rax
  _QWORD *v16; // rdi
  int v17; // eax
  int v18; // [rsp+20h] [rbp-C8h]
  int v19; // [rsp+20h] [rbp-C8h]
  void *v20; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-A8h] BYREF
  LPCWCH lpString2; // [rsp+48h] [rbp-A0h]
  PCWSTR v24; // [rsp+50h] [rbp-98h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v26[8]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v27; // [rsp+70h] [rbp-78h]
  RTL_SRWLOCK *v28; // [rsp+78h] [rbp-70h]
  RTL_SRWLOCK *v29; // [rsp+80h] [rbp-68h]
  RTL_SRWLOCK *v30; // [rsp+88h] [rbp-60h]
  __int64 *v31; // [rsp+90h] [rbp-58h]
  char v32; // [rsp+98h] [rbp-50h]
  _BYTE v33[8]; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v34[8]; // [rsp+A8h] [rbp-40h] BYREF
  _QWORD v35[7]; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+F0h] [rbp+8h] BYREF
  struct IObjectArray **v38; // [rsp+100h] [rbp+18h]
  int v39; // [rsp+108h] [rbp+20h] BYREF

  v38 = a3;
  StringRawBuffer = (PCWSTR)this;
  v28 = this;
  *a3 = 0LL;
  v5 = this + 57;
  AcquireSRWLockExclusive(this + 57);
  v29 = v5;
  if ( LOBYTE(this[60].Ptr) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8BA,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8007139FLL,
      v18);
  *(_OWORD *)v25 = 0LL;
  for ( i = (struct _GUID *)this[51].Ptr; ; ++i )
  {
    if ( i == this[52].Ptr )
    {
      v7 = (HSTRING *)v25[0];
      goto LABEL_20;
    }
    if ( *(_QWORD *)(*(_QWORD *)&i->Data1 + 32LL) == a2.value )
      break;
  }
  std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v25, i);
  v7 = (HSTRING *)v25[0];
  if ( v25[0] )
  {
    v8 = 0;
    goto LABEL_7;
  }
LABEL_20:
  v8 = 1;
LABEL_7:
  if ( v8 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v18);
  v20 = 0LL;
  v9 = CEnumerableObjectCollection::CreateInstance((int)retaddr, i, &v20);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8CC,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      v18);
  v10 = this + 47;
  v30 = this + 47;
  v24 = (PCWSTR)&this[47];
  v11 = ((char *)this[48].Ptr - (char *)this[47].Ptr) >> 3;
  v27 = v11;
  if ( v11 )
  {
    lpString2 = WindowsGetStringRawBuffer(v7[1], 0LL);
    v14 = *((_QWORD *)v10->Ptr + v11 - 1);
    v15 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 280LL))(v14);
    if ( CompareStringOrdinal(v15, -1, lpString2, -1, 0) == 2 )
    {
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
        &v22,
        *((_QWORD *)v10->Ptr + v11 - 1));
      std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::erase(
        &this[47],
        v33,
        (char *)v10->Ptr + 8 * v11 - 8);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &v22,
        &v21);
      v31 = &v21;
      v32 = 1;
      v16 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
              v35,
              v25);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
        v26,
        v22);
      UwpWindowEventDispatcher::CacheWindowWrapper(&this[-4], v26, v16, 1LL);
      v17 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v20 + 40LL))(v20, v21);
      if ( v17 >= 0 )
      {
        v32 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8E8,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v17,
          v19);
        std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::erase(
          &this[44],
          v34,
          (char *)v28[45].Ptr - 8);
      }
      JUMPOUT(0x1802F6095LL);
    }
    JUMPOUT(0x1802F60C2LL);
  }
  v39 = 0;
  v12 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v20 + 24LL))(v20, &v39);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v12,
      v18);
  StringRawBuffer = WindowsGetStringRawBuffer(v7[1], 0LL);
  v24 = WindowsGetStringRawBuffer(*v7, 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_RecoveringViews<unsigned int &,unsigned short const *,unsigned short const *>(
    &v39,
    (__int64 *)&v24,
    (__int64 *)&StringRawBuffer);
  wil::com_ptr_t<IObjectCollection,wil::err_exception_policy>::copy_to<IObjectArray>(&v20, v38);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  if ( v25[1] )
    std::_Ref_count_base::_Decref(v25[1]);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 0LL;
}

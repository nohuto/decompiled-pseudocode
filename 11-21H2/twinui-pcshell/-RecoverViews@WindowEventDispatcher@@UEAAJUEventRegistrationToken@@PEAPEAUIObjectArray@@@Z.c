/*
 * XREFs of ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180122EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180099E78 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18009A174 (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180122458 (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     ??$copy_to@UIObjectArray@@@?$com_ptr_t@UIObjectCollection@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIObjectArray@@@Z @ 0x180123080 (--$copy_to@UIObjectArray@@@-$com_ptr_t@UIObjectCollection@@Uerr_exception_policy@wil@@@wil@@QEBA.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x1801250AC (--$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$Q.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8BCC (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  struct _GUID *i; // rdx
  HSTRING *v7; // r12
  char v8; // al
  int v9; // eax
  __int64 j; // rbx
  int v11; // eax
  const WCHAR *StringRawBuffer; // r14
  RTL_SRWLOCK *v14; // r15
  __int64 v15; // rcx
  const WCHAR *v16; // rax
  PVOID Ptr; // rax
  __int64 *v18; // r14
  char v19; // r15
  _QWORD *v20; // rax
  int v21; // eax
  int v22; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-C8h]
  void *v24; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-B0h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-A8h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v28[2]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD *v29; // [rsp+68h] [rbp-80h]
  __int64 *v30; // [rsp+70h] [rbp-78h]
  char v31; // [rsp+78h] [rbp-70h]
  RTL_SRWLOCK *v32; // [rsp+80h] [rbp-68h]
  RTL_SRWLOCK *v33; // [rsp+88h] [rbp-60h] BYREF
  __int64 v34; // [rsp+90h] [rbp-58h] BYREF
  __int64 v35; // [rsp+98h] [rbp-50h] BYREF
  __int64 v36[9]; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  PCWSTR v38; // [rsp+F0h] [rbp+8h] BYREF
  PCWSTR v39; // [rsp+100h] [rbp+18h] BYREF
  int v40; // [rsp+108h] [rbp+20h] BYREF

  v39 = (PCWSTR)a3;
  v38 = (PCWSTR)this;
  v32 = this;
  *a3 = 0LL;
  wil::AcquireSRWLockExclusive(&v33, this + 55);
  if ( LOBYTE(this[58].Ptr) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7A9,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x8007139FLL,
      bIgnoreCase);
  *(_OWORD *)v27 = 0LL;
  for ( i = (struct _GUID *)this[49].Ptr; ; ++i )
  {
    if ( i == this[50].Ptr )
    {
      v7 = (HSTRING *)v27[0];
      goto LABEL_19;
    }
    if ( *(_QWORD *)(*(_QWORD *)&i->Data1 + 32LL) == a2.value )
      break;
  }
  std::shared_ptr<ViewEventRegistration>::operator=(v27, i);
  v7 = (HSTRING *)v27[0];
  if ( v27[0] )
  {
    v8 = 0;
    goto LABEL_7;
  }
LABEL_19:
  v8 = 1;
LABEL_7:
  if ( v8 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      bIgnoreCase);
  v24 = 0LL;
  v9 = CEnumerableObjectCollection::CreateInstance((int)retaddr, i, &v24);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7BB,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      bIgnoreCase);
  for ( j = ((char *)this[46].Ptr - (char *)this[45].Ptr) >> 3; ; --j )
  {
    v28[1] = j;
    if ( !j )
      break;
    StringRawBuffer = WindowsGetStringRawBuffer(v7[1], 0LL);
    v14 = this + 45;
    v15 = *((_QWORD *)this[45].Ptr + j - 1);
    v16 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 280LL))(v15);
    if ( CompareStringOrdinal(v16, -1, StringRawBuffer, -1, 0) == 2 )
    {
      Ptr = v14->Ptr;
      v28[0] = *((_QWORD *)v14->Ptr + j - 1);
      v18 = (__int64 *)v28[0];
      if ( v28[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28[0] + 8LL))(v28[0]);
        Ptr = v14->Ptr;
      }
      std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
        (__int64)&this[45],
        &v34,
        (__int64)Ptr + 8 * j - 8);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        v28,
        &v25);
      v30 = &v25;
      v19 = 1;
      v31 = 1;
      v20 = std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
              v36,
              v27);
      v29 = v20;
      v26 = v18;
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64 *))(*v18 + 8))(v18);
        v20 = v29;
      }
      WindowEventDispatcher::CacheWindowWrapper((__int64)&this[-4], &v26, v20, (const char *)1);
      v21 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v24 + 40LL))(v24, v25);
      if ( v21 >= 0 )
      {
        v19 = 0;
        v31 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7D7,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v21);
        std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
          (__int64)&this[42],
          &v35,
          (__int64)v32[43].Ptr - 8);
      }
      if ( v19 )
      {
        v31 = 0;
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 344LL))(v25, 0LL);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7D0,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v22);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v25);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v28);
    }
  }
  v40 = 0;
  v11 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v24 + 24LL))(v24, &v40);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7E6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v11);
  v38 = WindowsGetStringRawBuffer(v7[1], 0LL);
  v39 = WindowsGetStringRawBuffer(*v7, 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_RecoveringViews<unsigned int &,unsigned short const *,unsigned short const *>(
    &v40,
    &v39,
    &v38);
  wil::com_ptr_t<IObjectCollection,wil::err_exception_policy>::copy_to<IObjectArray>(&v24, a3);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v24);
  if ( v27[1] )
    std::_Ref_count_base::_Decref(v27[1]);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v33);
  return 0LL;
}

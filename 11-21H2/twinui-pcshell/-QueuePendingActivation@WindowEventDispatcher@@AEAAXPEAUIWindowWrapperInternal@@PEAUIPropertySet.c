/*
 * XREFs of ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18005A394
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180094910 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003B154 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendin.c)
 *     ??$?0AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18003B178 (--$-0AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_e.c)
 *     ??$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180059DB0 (--$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005AB38 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___ @ 0x18005B060 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x18005B178 (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x18005B200 (-GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@She.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005B2DC (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18009C284 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x1800C3858 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1803E5930 (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall WindowEventDispatcher::QueuePendingActivation(
        RTL_SRWLOCK *this,
        struct IWindowWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  _QWORD *v8; // rax
  const char *v9; // r9
  _QWORD *v10; // rdi
  unsigned __int64 *v11; // r8
  int ActivationId; // eax
  const unsigned __int16 *v13; // rax
  int v14; // eax
  PVOID Ptr; // rbx
  int (__fastcall *v16)(PVOID, _QWORD, __int64 *); // r14
  const struct _GUID *v17; // r8
  HWND v18; // rbx
  __int64 v19; // rbx
  LPVOID v20; // rcx
  __int64 v21; // rbx
  int v22; // edx
  int v23; // ecx
  int v24; // r9d
  _QWORD *v25; // rbx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  int ppv; // [rsp+20h] [rbp-49h]
  LPVOID *ppva; // [rsp+20h] [rbp-49h]
  LPVOID v31; // [rsp+30h] [rbp-39h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-31h] BYREF
  __int64 v33; // [rsp+40h] [rbp-29h] BYREF
  __int64 v34; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-19h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v36; // [rsp+58h] [rbp-11h] BYREF
  RTL_SRWLOCK *v37; // [rsp+60h] [rbp-9h] BYREF
  __int64 v38[2]; // [rsp+68h] [rbp-1h] BYREF
  GUID v39; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v36 = a3;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  if ( v8 )
  {
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *v8 = &CRefCountedObject<WindowEventDispatcher::PendingActivationData>::`vftable';
    *((_DWORD *)v8 + 10) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  v35 = v10;
  if ( !v10 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x8E6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(v10 + 4, a3);
  v34 = v10[4];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
  ActivationId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
                   (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v34,
                   (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v10 + 1),
                   v11);
  if ( ActivationId < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8ED,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)ActivationId,
      ppv);
  v13 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 272LL))(a2);
  if ( v13 )
    v14 = Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)(v10 + 2), v13);
  else
    v14 = -2147467261;
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8EF,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14,
      ppv);
  v33 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0LL);
  Ptr = this[42].Ptr;
  if ( Ptr )
  {
    v16 = *(int (__fastcall **)(PVOID, _QWORD, __int64 *))(*(_QWORD *)Ptr + 48LL);
    v33 = 0LL;
    if ( v16(Ptr, 0LL, &v33) >= 0 )
    {
      v39 = GUID_NULL;
      if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v33 + 32LL))(v33, &v39) >= 0 )
        Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
          (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v34,
          (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v39,
          v17);
    }
  }
  if ( a4 )
  {
    AcquireSRWLockShared(this + 59);
    *(_QWORD *)&v39.Data1 = this + 59;
    v18 = (HWND)(*(int (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v39);
    v31 = 0LL;
    dwProcessId = 0;
    if ( GetWindowThreadProcessId(v18, &dwProcessId) )
    {
      v31 = 0LL;
      if ( CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v31) >= 0
        && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v31 + 24LL))(v31, dwProcessId, 0x100000LL) >= 0 )
      {
        v19 = v10[3];
        v20 = v31;
        v10[3] = v31;
        if ( v20 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 8LL))(v20);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v21 = v10[1];
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(&v39, this);
        v37 = this;
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
          v38,
          *(_QWORD *)&v39.Data1);
        v38[1] = v21;
        Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___(
          v23,
          v22,
          HIDWORD(this[62].Ptr),
          v24,
          (__int64)ppva,
          (__int64)&v37);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v38);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v39);
      }
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v31);
  }
  wil::AcquireSRWLockExclusive(&v31, &this[59]);
  v25 = this[63].Ptr;
  if ( this[64].Ptr == (PVOID)0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
    &v39,
    (__int64)&this[63],
    (__int64 *)&v35);
  ++this[64].Ptr;
  v26 = (_QWORD *)v25[1];
  **(_QWORD **)v39.Data4 = v25;
  *(_QWORD *)(*(_QWORD *)v39.Data4 + 8LL) = v26;
  v27 = *(_QWORD *)v39.Data4;
  *(_QWORD *)v39.Data4 = 0LL;
  v25[1] = v27;
  *v26 = v27;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>((__int64)&v39);
  v28 = (__int64)v35;
  *(_QWORD *)&v39.Data1 = WindowsGetStringRawBuffer((HSTRING)v35[2], 0LL);
  ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *>(
    (__int64 *)(v28 + 8),
    (__int64 *)&v39);
  ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded<Windows::Foundation::Collections::IPropertySet * &>(&v36);
  while ( this[64].Ptr > (PVOID)0x80 )
    WindowEventDispatcher::QueuePendingActivationForDestruction(
      (WindowEventDispatcher *)this,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this[63].Ptr + 16LL) + 8LL));
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v31);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v35);
}

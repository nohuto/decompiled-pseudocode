/*
 * XREFs of ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1804C7810
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z @ 0x18006B878 (--0-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUnknown@@@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804B6B34 (--$-0AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uer.c)
 *     ??$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1804B9F7C (--$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dd5757d6d511917eda89b6b9685db73c___ @ 0x1804BA0B4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_dd5757d6d511917eda89b6b9685db73c___.c)
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804BA348 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1804BC95C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendin.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804BD01C (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x1804C3E5C (-GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@She.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1804C7CEC (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x1804C9AA8 (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall WindowEventDispatcher::QueuePendingActivation(
        WindowEventDispatcher *this,
        struct IWindowWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  _QWORD *v8; // rax
  const char *v9; // r9
  __int64 v10; // rdi
  unsigned __int64 *v11; // r8
  int ActivationId; // eax
  const unsigned __int16 *v13; // rax
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rax
  const struct _GUID *v17; // r8
  HWND v18; // rbx
  __int64 v19; // rbx
  LPVOID v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rbx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  int ppv; // [rsp+20h] [rbp-49h]
  LPVOID *ppva; // [rsp+20h] [rbp-49h]
  LPVOID v32; // [rsp+30h] [rbp-39h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-31h] BYREF
  __int64 v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  __int64 v36; // [rsp+50h] [rbp-19h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v37; // [rsp+58h] [rbp-11h] BYREF
  WindowEventDispatcher *v38; // [rsp+60h] [rbp-9h] BYREF
  __int64 v39[2]; // [rsp+68h] [rbp-1h] BYREF
  GUID v40; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v37 = a3;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v8;
  if ( v8 )
  {
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *v8 = &CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>::`vftable';
    *((_DWORD *)v8 + 10) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v36 = v10;
  if ( !v10 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x8E6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(v10 + 32),
    (__int64)a3);
  v35 = *(_QWORD *)(v10 + 32);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
  ActivationId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
                   (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v35,
                   (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v10 + 8),
                   v11);
  if ( ActivationId < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8ED,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)ActivationId,
      ppv);
  v13 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 272LL))(a2);
  if ( v13 )
    v14 = Windows::Internal::String::_InitializeHelper((HSTRING *)(v10 + 16), v13);
  else
    v14 = -2147467261;
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8EF,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14,
      ppv);
  v34 = 0LL;
  v15 = (__int64 *)*((_QWORD *)this + 42);
  if ( v15 )
  {
    v16 = *v15;
    v34 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v16 + 48))(v15, &v34) >= 0 )
    {
      v40 = GUID_NULL;
      if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v34 + 32LL))(v34, &v40) >= 0 )
        Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
          (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v35,
          (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v40,
          v17);
    }
  }
  if ( a4 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 59);
    *(_QWORD *)&v40.Data1 = (char *)this + 472;
    v18 = (HWND)(*(int (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
    if ( this != (WindowEventDispatcher *)-472LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 59);
    v32 = 0LL;
    dwProcessId = 0;
    if ( GetWindowThreadProcessId(v18, &dwProcessId) )
    {
      v32 = 0LL;
      if ( CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v32) >= 0
        && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v32 + 24LL))(v32, dwProcessId, 0x100000LL) >= 0 )
      {
        v19 = *(_QWORD *)(v10 + 24);
        v20 = v32;
        *(_QWORD *)(v10 + 24) = v32;
        if ( v20 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 8LL))(v20);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v21 = *(_QWORD *)(v10 + 8);
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
          &v40,
          (__int64)this);
        v38 = this;
        wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
          v39,
          *(__int64 *)&v40.Data1);
        v39[1] = v21;
        Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dd5757d6d511917eda89b6b9685db73c___(
          v23,
          v22,
          *((_DWORD *)this + 125),
          v24,
          (volatile signed __int32 *)ppva,
          &v38);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v39);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v40);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 59);
  v32 = (char *)this + 472;
  v25 = *((_QWORD *)this + 63);
  if ( *((_QWORD *)this + 64) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>(
    &v40,
    (__int64)this + 504,
    &v36);
  ++*((_QWORD *)this + 64);
  v26 = *(_QWORD **)(v25 + 8);
  **(_QWORD **)v40.Data4 = v25;
  *(_QWORD *)(*(_QWORD *)v40.Data4 + 8LL) = v26;
  v27 = *(_QWORD *)v40.Data4;
  *(_QWORD *)v40.Data4 = 0LL;
  *(_QWORD *)(v25 + 8) = v27;
  *v26 = v27;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>((__int64)&v40);
  v28 = v36;
  *(_QWORD *)&v40.Data1 = WindowsGetStringRawBuffer(*(HSTRING *)(v36 + 16), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *>(
    (__int64 *)(v28 + 8),
    (__int64 *)&v40);
  ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded<Windows::Foundation::Collections::IPropertySet * &>(
    &v37,
    v29);
  while ( *((_QWORD *)this + 64) > 0x80uLL )
    WindowEventDispatcher::QueuePendingActivationForDestruction(
      this,
      *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 63) + 16LL) + 8LL));
  if ( this != (WindowEventDispatcher *)-472LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 59);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
}

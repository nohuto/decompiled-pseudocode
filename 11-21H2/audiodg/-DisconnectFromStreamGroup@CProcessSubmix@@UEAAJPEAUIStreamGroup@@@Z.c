/*
 * XREFs of ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x14002B860
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmix::DisconnectFromStreamGroup(CProcessSubmix *this, struct IStreamGroup *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v9 = 0LL;
  v10 = v2;
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v9);
  v5 = (**(__int64 (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a2)(
         a2,
         &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16, v9);
    v6 = 0;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v10);
  return v6;
}

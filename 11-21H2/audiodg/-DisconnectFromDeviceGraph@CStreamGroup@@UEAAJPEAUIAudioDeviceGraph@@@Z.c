/*
 * XREFs of ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x14002A380
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamGroup::DisconnectFromDeviceGraph(CStreamGroup *this, struct IAudioDeviceGraph *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  bool v5; // zf
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v5 = *((_BYTE *)this + 337) == 0;
  v11 = v2;
  if ( v5 )
  {
    v10 = 0LL;
    wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v10);
    v6 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, __int64 *))a2)(
           a2,
           &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a,
           &v10);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v6);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
      goto LABEL_5;
    }
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 3) + 112LL))((char *)this + 24, v10);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
  }
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)this + 41);
  v7 = 0;
LABEL_5:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
  return v7;
}

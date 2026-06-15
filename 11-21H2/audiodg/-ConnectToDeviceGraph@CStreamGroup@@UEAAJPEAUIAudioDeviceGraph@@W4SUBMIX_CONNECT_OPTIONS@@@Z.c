/*
 * XREFs of ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140007870
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x14001DA98 (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamGroup::ConnectToDeviceGraph(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 v3; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1 + 200;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v14 = 0LL;
  v15 = v3;
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v14);
  v7 = (**a2)(a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 231LL;
LABEL_10:
    v11 = (unsigned int)v7;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
    v8 = -2005139410;
    v10 = 234LL;
    v11 = 2289827886LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)v11,
      v12);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 337) )
  {
    wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(a1 + 328, v14);
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 24) + 224LL))(a1 + 24, v14, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 239LL;
    goto LABEL_10;
  }
LABEL_5:
  v8 = 0;
LABEL_6:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  return v8;
}

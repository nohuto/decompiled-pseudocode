/*
 * XREFs of ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14001D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::AddPipe(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v14 = v4;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( !v5 )
    goto LABEL_2;
  v13 = 0LL;
  v8 = (**v5)(v5, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v13);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 1294LL;
LABEL_10:
    v10 = (unsigned int)v8;
    goto LABEL_11;
  }
  if ( *((_DWORD *)this + 64) )
  {
    v6 = -2147418113;
    v10 = 2147549183LL;
    v9 = 1298LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v10,
      v11);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v13 + 24LL))(v13, a2);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 1299LL;
    goto LABEL_10;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
LABEL_2:
  v6 = 0;
LABEL_3:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  return v6;
}

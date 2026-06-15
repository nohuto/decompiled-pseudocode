/*
 * XREFs of ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140008860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140008288 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::AddPipe(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v18; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v19 = v4;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( !v5 )
    goto LABEL_17;
  v18 = 0LL;
  v6 = (**v5)(v5, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, (__int64 *)&v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = *((_DWORD *)this + 64);
    if ( g_UseNewStreamManagementCodePath )
    {
      v12 = v10 == 2;
      v13 = *v18;
      if ( v12 )
        v14 = (*(__int64 (__fastcall **)(__int64 *, struct CPipeInstance *))(v13 + 32))(v18, a2);
      else
        v14 = (*(__int64 (__fastcall **)(__int64 *, struct CPipeInstance *))(v13 + 24))(v18, a2);
      v7 = v14;
      if ( v14 < 0 )
      {
        v9 = 1283LL;
        goto LABEL_14;
      }
    }
    else
    {
      if ( v10 )
      {
        v7 = -2147418113;
        v9 = 1275LL;
LABEL_14:
        v8 = v7;
        goto LABEL_15;
      }
      v11 = (*(__int64 (__fastcall **)(__int64 *, struct CPipeInstance *))(*v18 + 24))(v18, a2);
      v7 = v11;
      if ( v11 < 0 )
      {
        v8 = (unsigned int)v11;
        v9 = 1277LL;
        goto LABEL_15;
      }
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v18);
LABEL_17:
    v7 = 0;
    goto LABEL_18;
  }
  v8 = (unsigned int)v6;
  v9 = 1268LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v8,
    v16);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v18);
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return v7;
}

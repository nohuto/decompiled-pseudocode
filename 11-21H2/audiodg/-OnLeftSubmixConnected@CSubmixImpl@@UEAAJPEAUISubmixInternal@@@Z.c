/*
 * XREFs of ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14001CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCChildSubmixInstance@@PEAV312@1@Z @ 0x140029878 (-NewNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _BYTE *v5; // rax
  _BYTE *v6; // rdi
  char *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h]
  _BYTE *v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _BYTE *v15; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+10h] BYREF
  _BYTE *v17; // [rsp+70h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v18 = v4;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
  {
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x558,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      v12);
  }
  else
  {
    v5 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( !v5 )
      JUMPOUT(0x1400478E8LL);
    *(_QWORD *)v5 = a2;
    v5[8] = 0;
    v17 = v5;
    v13 = v5;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    v7 = (char *)this + 120;
    v15 = v6;
    v9 = ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::NewNode(
           (char *)this + 120,
           &v15,
           v8,
           *((_QWORD *)this + 15),
           v13);
    if ( *((_QWORD *)this + 15) )
      *(_QWORD *)(*(_QWORD *)v7 + 8LL) = v9;
    else
      *((_QWORD *)this + 16) = v9;
    *(_QWORD *)v7 = v9;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v16);
    operator delete(0LL);
    v10 = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
  return v10;
}

/*
 * XREFs of ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140023670
 * Callers:
 *     <none>
 * Callees:
 *     ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x140009E08 (-FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002378C (-FreeNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::OnLeftSubmixDisconnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct ISubmixInternal **ChildSubmix; // rsi
  __int64 **v6; // r9
  __int64 *i; // rdx
  __int64 *v8; // rax
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x566,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      v11);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147549183LL;
  }
  else
  {
    ChildSubmix = CSubmixImpl::FindChildSubmix(this, a2);
    if ( ChildSubmix )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v6 = (__int64 **)((char *)this + 120);
      for ( i = (__int64 *)*((_QWORD *)this + 15); i && (struct ISubmixInternal **)i[2] != ChildSubmix; i = (__int64 *)*i )
        ;
      if ( !i )
        ATL::AtlThrowImpl(-2147467259);
      v8 = (__int64 *)*i;
      if ( i == *v6 )
        *v6 = v8;
      else
        *(_QWORD *)i[1] = v8;
      v9 = i[1];
      if ( i == *((__int64 **)this + 16) )
        *((_QWORD *)this + 16) = v9;
      else
        *(_QWORD *)(*i + 8) = v9;
      ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::FreeNode((char *)this + 120);
      if ( this != (CSubmixImpl *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      operator delete(ChildSubmix);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}

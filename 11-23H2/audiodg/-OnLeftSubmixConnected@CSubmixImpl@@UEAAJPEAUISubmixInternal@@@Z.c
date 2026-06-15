/*
 * XREFs of ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140007B10
 * Callers:
 *     <none>
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCChildSubmixInstance@@PEAV312@1@Z @ 0x1400060F0 (-NewNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _BYTE *v5; // rax
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  unsigned int v11; // edi
  int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  char *v16; // [rsp+78h] [rbp+10h]
  char *v17; // [rsp+80h] [rbp+18h]
  _BYTE *v18; // [rsp+88h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v16 = (char *)this + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
  {
    v11 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x549,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      v12);
  }
  else
  {
    v5 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = (__int64)v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = a2;
      v5[8] = 0;
      v18 = v5;
      v17 = (char *)this + 32;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v15 = v6;
      v8 = ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::NewNode(
             (__int64)this + 120,
             &v15,
             v7,
             *((_QWORD *)this + 15));
      v9 = *((_QWORD *)this + 15);
      if ( v9 )
        *(_QWORD *)(v9 + 8) = v8;
      else
        *((_QWORD *)this + 16) = v8;
      *((_QWORD *)this + 15) = v8;
      if ( this != (CSubmixImpl *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      operator delete(0LL);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      v13);
    operator delete(0LL);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}

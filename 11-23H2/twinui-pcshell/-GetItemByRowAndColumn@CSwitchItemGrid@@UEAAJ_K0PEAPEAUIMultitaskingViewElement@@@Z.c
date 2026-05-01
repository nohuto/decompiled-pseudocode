/*
 * XREFs of ?GetItemByRowAndColumn@CSwitchItemGrid@@UEAAJ_K0PEAPEAUIMultitaskingViewElement@@@Z @ 0x180579170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemGrid::GetItemByRowAndColumn(
        CSwitchItemGrid *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct IMultitaskingViewElement **a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, struct IMultitaskingViewElement **); // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 >= *((_QWORD *)this + 77) )
    return (unsigned int)-2147024809;
  v5 = 56 * a2;
  v6 = *((_QWORD *)this + 76);
  if ( a3 >= *(_QWORD *)(v6 + v5 + 32) )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IMultitaskingViewElement **))(*(_QWORD *)(v6 + v5 + 24)
                                                                                        + 8 * a3);
    v8 = (**v7)(v7, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, a4);
    v4 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
        (const char *)(unsigned int)v8);
  }
  return v4;
}

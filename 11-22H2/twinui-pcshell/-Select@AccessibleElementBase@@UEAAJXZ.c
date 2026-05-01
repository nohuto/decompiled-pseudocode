/*
 * XREFs of ?Select@AccessibleElementBase@@UEAAJXZ @ 0x180584DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805850F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::Select(AccessibleElementBase *this)
{
  AccessibleElementBase *v1; // rbx
  int Element; // ebx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (AccessibleElementBase *)((char *)this - 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(v1, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v6);
  if ( Element >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 352LL))(v6);
    Element = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}

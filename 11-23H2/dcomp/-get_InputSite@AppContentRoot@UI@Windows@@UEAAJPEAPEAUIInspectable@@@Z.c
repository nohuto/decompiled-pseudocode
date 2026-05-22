/*
 * XREFs of ?get_InputSite@AppContentRoot@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18008C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::AppContentRoot::get_InputSite(
        Windows::UI::AppContentRoot *this,
        struct IInspectable **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, struct IInspectable **); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInspectable **))*((_QWORD *)this + 9);
  if ( !v2 )
    return 0LL;
  v3 = (**v2)(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtappcontentroot.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}

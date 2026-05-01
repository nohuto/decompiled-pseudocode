/*
 * XREFs of ?GetAppLayout@TabletModePositioner@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x180503220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::GetAppLayout(TabletModePositioner *this, struct IAppLayout **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( *((_DWORD *)this + 36) != 1 )
    return 2147947423LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct IAppLayout **))(**((_QWORD **)this + 20) + 192LL))(
         *((_QWORD *)this + 20),
         &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
         a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27B,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}

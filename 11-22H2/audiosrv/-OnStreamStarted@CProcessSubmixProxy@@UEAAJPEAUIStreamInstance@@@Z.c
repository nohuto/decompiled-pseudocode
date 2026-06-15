/*
 * XREFs of ?OnStreamStarted@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x1800482C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x180048374 (-UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::OnStreamStarted(CProcessSubmixProxy *this, struct IStreamInstance *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct IStreamInstance *))(**((_QWORD **)this + 5) + 80LL))(
         *((_QWORD *)this + 5),
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    CProcessSubmixProxy::UpdateActiveStreamCount((CProcessSubmixProxy *)((char *)this - 8), 1);
    return 0LL;
  }
}

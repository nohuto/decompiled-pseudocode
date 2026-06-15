/*
 * XREFs of ?StopStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180049EC0
 * Callers:
 *     ?StopStream@CStreamInstanceProxy@@UEAAJXZ @ 0x180049EB0 (-StopStream@CStreamInstanceProxy@@UEAAJXZ.c)
 *     ?StopStream@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x18010A210 (-StopStream@CBridgeStreamInstanceProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::StopStream(CStreamInstanceProxyImpl *this)
{
  int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 120LL))(
           *((_QWORD *)this + 3),
           *((_QWORD *)this + 2));
    if ( v2 >= 0 )
      return 0LL;
  }
  if ( ((v2 + 2147023174) & 0xFFFFFFFB) == 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF38,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}

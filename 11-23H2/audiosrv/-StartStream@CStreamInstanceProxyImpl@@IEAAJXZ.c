/*
 * XREFs of ?StartStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x18004AF80
 * Callers:
 *     ?StartStream@CStreamInstanceProxy@@UEAAJXZ @ 0x18004AF70 (-StartStream@CStreamInstanceProxy@@UEAAJXZ.c)
 *     ?StartStream@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x18010A080 (-StartStream@CBridgeStreamInstanceProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::StartStream(CStreamInstanceProxyImpl *this)
{
  int v2; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
  if ( v2 < 0 )
  {
    v4 = 3883LL;
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 112LL))(
           *((_QWORD *)this + 3),
           *((_QWORD *)this + 2));
    if ( v2 >= 0 )
      return 0LL;
    v4 = 3884LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}

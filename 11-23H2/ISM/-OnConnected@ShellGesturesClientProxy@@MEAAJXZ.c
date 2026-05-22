/*
 * XREFs of ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x18003D2C4 (--$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy.c)
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004BF1C (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004BFC0 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C3C0 (-OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ.c)
 */

__int64 __fastcall ShellGesturesClientProxy::OnConnected(ShellGesturesClientProxy *this)
{
  __int64 v2; // rcx
  ShellGesturesClientProxy *v4; // [rsp+30h] [rbp+8h] BYREF

  ShellGesturesClientProxy::OnInputSinkDataChanged(this);
  v4 = this;
  std::deque<ShellGesturesClientProxy *>::_Emplace_back_internal<ShellGesturesClientProxy * &>(v2, (__int64 *)&v4);
  ShellGesturesClientProxy::GetDesktop(this);
  ShellGesturesClientProxy::CheckCapability(this);
  return 0LL;
}

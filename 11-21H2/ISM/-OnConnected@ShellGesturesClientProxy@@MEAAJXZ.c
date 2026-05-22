/*
 * XREFs of ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18014F880
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18014F354 (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18014F544 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18014F9D0 (-OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ.c)
 *     ??$emplace_front@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAAAEAPEAVShellGesturesClientProxy@@AEAPEAV2@@Z @ 0x180150660 (--$emplace_front@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy@@V-$allo.c)
 */

__int64 __fastcall ShellGesturesClientProxy::OnConnected(ShellGesturesClientProxy *this)
{
  __int64 v2; // rcx
  ShellGesturesClientProxy *v4; // [rsp+30h] [rbp+8h] BYREF

  ShellGesturesClientProxy::OnInputSinkDataChanged(this);
  v4 = this;
  std::deque<ShellGesturesClientProxy *>::emplace_front<ShellGesturesClientProxy * &>(v2, &v4);
  ShellGesturesClientProxy::GetDesktop(this);
  ShellGesturesClientProxy::CheckCapability(this);
  return 0LL;
}

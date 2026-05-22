/*
 * XREFs of ?OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18016DB30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004C518 (-reset@-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEA.c)
 *     ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x18016FCF8 (-UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z.c)
 */

__int64 __fastcall ShellGesturesClientProxy::OnDisconnected(ShellGesturesClientProxy *this)
{
  ShellGesturesProcessor::UnregisterClient(this);
  wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::reset(
    (__int64)this + 128,
    0LL);
  return 0LL;
}

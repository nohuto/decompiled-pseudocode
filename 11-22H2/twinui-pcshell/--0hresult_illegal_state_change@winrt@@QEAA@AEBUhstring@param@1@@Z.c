/*
 * XREFs of ??0hresult_illegal_state_change@winrt@@QEAA@AEBUhstring@param@1@@Z @ 0x180735A84
 * Callers:
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180736060 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x18038CD88 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 */

winrt::hresult_illegal_state_change *__fastcall winrt::hresult_illegal_state_change::hresult_illegal_state_change(
        winrt::hresult_illegal_state_change *this,
        const struct winrt::param::hstring *a2)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_illegal_state_change, a2);
  return this;
}

/*
 * XREFs of ??1?$ComPtr@UIWindowsMessageDeliveryProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A0E84
 * Callers:
 *     _InputSiteElementProxy::OnWindowsMessageDeliveryChanged_::_1_::dtor$0 @ 0x18006D400 (_InputSiteElementProxy--OnWindowsMessageDeliveryChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IWindowsMessageDeliveryProxy>::~ComPtr<IWindowsMessageDeliveryProxy>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IWindowsMessageDeliveryProxy>::InternalRelease(a1);
}

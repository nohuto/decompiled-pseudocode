/*
 * XREFs of _lambda_eee7116e10b79d37d834622fcd258a1d_::_lambda_invoker_cdecl_ @ 0x1800A3F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4F88 (--1-$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$default_de.c)
 *     ?DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1800A5CF4 (-DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV-$.c)
 */

void __fastcall lambda_eee7116e10b79d37d834622fcd258a1d_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work)
{
  PVOID v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  v3 = Context;
  Windows::UI::Composition::Internal::SharedD3DDevicePool::DestroySharedDeviceAndSignalClients(&v3, Context, Work);
  std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(&v4);
}

/*
 * XREFs of _lambda_ba5bfaa728056e7e3dec720690f39894_::_lambda_invoker_cdecl_ @ 0x1800A3EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_ba5bfaa728056e7e3dec720690f39894_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  Windows::UI::Composition::Internal::SharedD3DDevicePool *v4; // rcx
  struct ID3D11Device *v5; // r8

  v4 = (Windows::UI::Composition::Internal::SharedD3DDevicePool *)Context[1];
  v5 = (struct ID3D11Device *)Context[2];
  *((_BYTE *)Context + 44) = 0;
  Windows::UI::Composition::Internal::SharedD3DDevicePool::OnDeviceRemoved(v4, *(struct _LUID *)Context, v5);
}

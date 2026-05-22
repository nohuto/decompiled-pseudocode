/*
 * XREFs of ??B?$com_ptr_t@UIGameInputServer@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800DBC98
 * Callers:
 *     ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180011640 (-OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801DA630 (-OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::com_ptr_t<IGameInputServer,wil::err_exception_policy>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}

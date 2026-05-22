/*
 * XREFs of ??B?$com_ptr_t@UIGameInputServer@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800CC988
 * Callers:
 *     ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180010D00 (-OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801CCDC0 (-OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::com_ptr_t<IGameInputServer,wil::err_exception_policy>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}

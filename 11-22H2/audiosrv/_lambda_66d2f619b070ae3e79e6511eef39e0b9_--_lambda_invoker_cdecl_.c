/*
 * XREFs of _lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_ @ 0x18004BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18003AD64 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 */

void __fastcall lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  int v4; // eax

  v4 = _Mtx_lock((_Mtx_t)(Context + 8));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
    JUMPOUT(0x1800B694FLL);
  }
  if ( !*(_DWORD *)Context )
    CSebNotifier::PublishSebEvent((CSebNotifier *)Context, 0);
  _Mtx_unlock((_Mtx_t)(Context + 8));
}

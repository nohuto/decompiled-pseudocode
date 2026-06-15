/*
 * XREFs of wil::details::lambda_call__lambda_540aecc7de22ad6a8f970e0eabe8691b___::_lambda_call__lambda_540aecc7de22ad6a8f970e0eabe8691b___ @ 0x1800DF1CC
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$10 @ 0x18006DCA0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$10.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_540aecc7de22ad6a8f970e0eabe8691b___::_lambda_call__lambda_540aecc7de22ad6a8f970e0eabe8691b___(
        __int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, struct ISessionInternalEvents *))(*(_QWORD *)*v1 + 160LL))(
             *v1,
             g_PolicyEventsHandler);
  }
  return result;
}

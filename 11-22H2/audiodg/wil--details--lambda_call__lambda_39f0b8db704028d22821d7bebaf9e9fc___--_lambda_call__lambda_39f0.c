/*
 * XREFs of wil::details::lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___::_lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___ @ 0x14002D520
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14006DC90 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     _lambda_39f0b8db704028d22821d7bebaf9e9fc_::operator() @ 0x14002D540 (_lambda_39f0b8db704028d22821d7bebaf9e9fc_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___::_lambda_call__lambda_39f0b8db704028d22821d7bebaf9e9fc___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_39f0b8db704028d22821d7bebaf9e9fc_::operator()();
  }
  return result;
}

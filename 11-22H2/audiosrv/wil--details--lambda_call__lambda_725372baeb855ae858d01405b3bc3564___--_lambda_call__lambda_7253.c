/*
 * XREFs of wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___ @ 0x18013BE64
 * Callers:
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18013D560 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     _PhoneCallAudio::StartSession_::_1_::dtor$2 @ 0x18013D72F (_PhoneCallAudio--StartSession_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_725372baeb855ae858d01405b3bc3564_::operator() @ 0x18013BFF4 (_lambda_725372baeb855ae858d01405b3bc3564_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_725372baeb855ae858d01405b3bc3564_::operator()();
  }
  return result;
}

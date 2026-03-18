/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C000F7CC
 * Callers:
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C000F7B0 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C00115D0 (xxxRemoteConnect.c)
 * Callees:
 *     DrvDxgkSendDisplayBrokerMessage @ 0x1C000F88C (DrvDxgkSendDisplayBrokerMessage.c)
 *     DrvSampleDisplayState @ 0x1C001F260 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___()
{
  __int64 result; // rax
  int v1; // r8d
  int v2; // eax
  _DWORD v3[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v3, 0, 0x48uLL);
  v3[10] = 1;
  v3[11] = 1;
  result = DrvSampleDisplayState(&v3[12]);
  if ( (int)result >= 0 )
  {
    v3[0] = 4718624;
    LOWORD(v3[1]) = 0x8000;
    v3[16] = gbConnected;
    v2 = (int)qword_1C02962C0;
    if ( qword_1C02962C0 )
      v2 = qword_1C02962C0();
    v3[17] = v2;
    return DrvDxgkSendDisplayBrokerMessage(0x10000, (unsigned int)v3, v1, 0, 0LL);
  }
  return result;
}

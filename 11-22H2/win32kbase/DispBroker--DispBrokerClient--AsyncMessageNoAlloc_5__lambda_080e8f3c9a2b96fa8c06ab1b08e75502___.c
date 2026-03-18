/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_080e8f3c9a2b96fa8c06ab1b08e75502___ @ 0x1C012F04C
 * Callers:
 *     ?DispBrokerAsyncRotationLockToggleKey@@YAJXZ @ 0x1C012F4D0 (-DispBrokerAsyncRotationLockToggleKey@@YAJXZ.c)
 * Callees:
 *     DrvDxgkSendDisplayBrokerMessage @ 0x1C000F88C (DrvDxgkSendDisplayBrokerMessage.c)
 *     DrvSampleDisplayState @ 0x1C001F260 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_080e8f3c9a2b96fa8c06ab1b08e75502___()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 v2; // [rsp+28h] [rbp-70h]
  _DWORD v3[16]; // [rsp+40h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[10] = 5;
  v3[11] = 1;
  result = DrvSampleDisplayState(&v3[12]);
  if ( (int)result >= 0 )
  {
    LOWORD(v3[1]) = 0x8000;
    v3[0] = 4194328;
    return DrvDxgkSendDisplayBrokerMessage(0x10000u, (__int64)v3, v1, 0LL, 0LL, v2, 0LL);
  }
  return result;
}

/*
 * XREFs of ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x180015724
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005BC60 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x18005BD80 (-OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::operator() @ 0x18042FDDC (_lambda_baaea9c5454d5217874bd274f7881db0_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char IsDeviceAcrylicCapable(void)
{
  char v0; // bl
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+50h] [rbp-18h]

  memset(v3, 0, sizeof(v3));
  v0 = 0;
  v4 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)NtDCompositionGetFrameStatistics(v3, &si128) >= 0 && si128.m128i_i32[3] )
    return si128.m128i_i32[2] == 0;
  return v0;
}

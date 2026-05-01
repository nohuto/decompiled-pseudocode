/*
 * XREFs of ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x18005F4C0
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E9D30 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x180128710 (-OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

char IsDeviceAcrylicCapable(void)
{
  char v0; // bl
  int v2; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+24h] [rbp-54h]
  _OWORD v4[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v5; // [rsp+58h] [rbp-20h]

  v2 = 37120;
  memset(v4, 0, sizeof(v4));
  v0 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = 0LL;
  if ( (int)NtDCompositionGetFrameStatistics(v4, &v2) >= 0 && si128.m128i_i32[2] )
    return si128.m128i_i32[1] == 0;
  return v0;
}

/*
 * XREFs of sub_18001AF40 @ 0x18001AF40
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180017D78 @ 0x180017D78 (sub_180017D78.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 *     sub_18005D514 @ 0x18005D514 (sub_18005D514.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18001AF40(__int64 a1, __int64 a2)
{
  __m128 *v4; // rax
  char result; // al
  __int64 v6; // rcx
  _OWORD pExceptionObject[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 316) != 5 )
  {
    sub_180010DD0(v8, (__int64)"Camera::SetProjectionMatrix() -- ProjectionType must be Custom for this to take effect");
    sub_18001C3BC(pExceptionObject, v8, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  v4 = (__m128 *)sub_18005BBB4(a1, 1LL, 2LL);
  result = sub_180017D78((__m128 *)a2, v4);
  if ( result )
  {
    pExceptionObject[0] = *(_OWORD *)a2;
    pExceptionObject[1] = *(_OWORD *)(a2 + 16);
    pExceptionObject[2] = *(_OWORD *)(a2 + 32);
    pExceptionObject[3] = *(_OWORD *)(a2 + 48);
    ((void (__fastcall *)(__int64, __int64, __int64, _OWORD *))sub_18005D514)(a1, 1LL, 2LL, pExceptionObject);
    return sub_18005D2CC(v6, 2LL);
  }
  return result;
}

/*
 * XREFs of sub_1800309CC @ 0x1800309CC
 * Callers:
 *     sub_180036A60 @ 0x180036A60 (sub_180036A60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18002F860 @ 0x18002F860 (sub_18002F860.c)
 */

__int64 __fastcall sub_1800309CC(_Cnd_t a1, _Mtx_t *a2, __int64 *a3)
{
  __int64 result; // rax
  char v6; // di
  int v7; // eax
  xtime v8; // [rsp+20h] [rbp-38h] BYREF

  if ( *a3 <= 0 )
    return 1LL;
  v6 = sub_18002F860((__int64)&v8, a3);
  if ( !Mtx_current_owns(*a2) )
  {
    std::_Throw_Cpp_error(4);
    __debugbreak();
  }
  v7 = Cnd_timedwait(a1, *a2, &v8);
  if ( v7 )
  {
    if ( v7 != 2 )
    {
      std::_Throw_C_error(v7);
      __debugbreak();
    }
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v6 )
    return 0LL;
  return result;
}

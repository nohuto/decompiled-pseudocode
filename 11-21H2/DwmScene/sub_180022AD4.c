/*
 * XREFs of sub_180022AD4 @ 0x180022AD4
 * Callers:
 *     sub_180022BC8 @ 0x180022BC8 (sub_180022BC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180022920 @ 0x180022920 (sub_180022920.c)
 *     sub_180022F90 @ 0x180022F90 (sub_180022F90.c)
 */

__int64 *__fastcall sub_180022AD4(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *result; // rax
  GUID pguid; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&pguid.Data1 = a1;
  v2 = o__aligned_malloc(160LL, 8LL);
  v3 = v2;
  if ( !v2 )
  {
    sub_180022F90(&pguid);
    throw (stdext::bad_alloc *)&pguid;
  }
  *(_QWORD *)(v2 + 152) = 64LL;
  pguid = 0LL;
  CoCreateGuid(&pguid);
  *(_QWORD *)(v3 + 144) = 0x1300000000LL;
  *(_QWORD *)(v3 + 136) = 17LL;
  memset((void *)v3, 0, 0x81uLL);
  sub_180022920((unsigned __int8 *)&pguid, 0xCuLL, v3);
  result = a1;
  *(_WORD *)(v3 + 16) = 46;
  *a1 = v3;
  return result;
}

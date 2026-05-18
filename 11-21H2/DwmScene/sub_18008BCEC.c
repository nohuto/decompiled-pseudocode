/*
 * XREFs of sub_18008BCEC @ 0x18008BCEC
 * Callers:
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_1800AB8A0 @ 0x1800AB8A0 (sub_1800AB8A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008BCEC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rdx

  v2 = a2;
  v3 = (__int64 *)(a1 + 496);
  if ( v3 != a2 )
  {
    if ( (unsigned __int64)a2[3] >= 0x10 )
      a2 = (__int64 *)*a2;
    result = (__int64)sub_180012190(v3, a2, v2[2]);
  }
  v5 = v2[3];
  if ( v5 >= 0x10 )
    result = sub_180010884((char *)*v2, v5 + 1);
  v2[2] = 0LL;
  v2[3] = 15LL;
  *(_BYTE *)v2 = 0;
  return result;
}

/*
 * XREFs of sub_18002BC44 @ 0x18002BC44
 * Callers:
 *     sub_180011740 @ 0x180011740 (sub_180011740.c)
 *     sub_18002805C @ 0x18002805C (sub_18002805C.c)
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_18002A630 @ 0x18002A630 (sub_18002A630.c)
 *     sub_180059480 @ 0x180059480 (sub_180059480.c)
 *     sub_18005BEF0 @ 0x18005BEF0 (sub_18005BEF0.c)
 *     sub_18005DF04 @ 0x18005DF04 (sub_18005DF04.c)
 *     sub_180061C80 @ 0x180061C80 (sub_180061C80.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_180079E88 @ 0x180079E88 (sub_180079E88.c)
 *     sub_18007A4B0 @ 0x18007A4B0 (sub_18007A4B0.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_18007E464 @ 0x18007E464 (sub_18007E464.c)
 *     sub_18007EEFC @ 0x18007EEFC (sub_18007EEFC.c)
 *     sub_180098B20 @ 0x180098B20 (sub_180098B20.c)
 *     sub_180098BFC @ 0x180098BFC (sub_180098BFC.c)
 *     sub_180098CD8 @ 0x180098CD8 (sub_180098CD8.c)
 *     sub_180098DB4 @ 0x180098DB4 (sub_180098DB4.c)
 *     sub_180098E90 @ 0x180098E90 (sub_180098E90.c)
 *     sub_18009A0A0 @ 0x18009A0A0 (sub_18009A0A0.c)
 *     sub_18009D8E0 @ 0x18009D8E0 (sub_18009D8E0.c)
 *     sub_18009DECC @ 0x18009DECC (sub_18009DECC.c)
 *     sub_18009E008 @ 0x18009E008 (sub_18009E008.c)
 *     sub_18009E0D0 @ 0x18009E0D0 (sub_18009E0D0.c)
 *     sub_18009F3E0 @ 0x18009F3E0 (sub_18009F3E0.c)
 *     sub_1800A3E10 @ 0x1800A3E10 (sub_1800A3E10.c)
 *     sub_1800A4060 @ 0x1800A4060 (sub_1800A4060.c)
 *     sub_1800A6640 @ 0x1800A6640 (sub_1800A6640.c)
 *     sub_1800A6A50 @ 0x1800A6A50 (sub_1800A6A50.c)
 *     sub_1800AB0F0 @ 0x1800AB0F0 (sub_1800AB0F0.c)
 *     sub_1800ADC04 @ 0x1800ADC04 (sub_1800ADC04.c)
 *     sub_1800AE960 @ 0x1800AE960 (sub_1800AE960.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     sub_1800E2680 @ 0x1800E2680 (sub_1800E2680.c)
 *     sub_1800E2B34 @ 0x1800E2B34 (sub_1800E2B34.c)
 *     sub_1800ED91C @ 0x1800ED91C (sub_1800ED91C.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EF710 @ 0x1800EF710 (sub_1800EF710.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002BC44(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rdx

  v2 = a2;
  v3 = (__int64 *)(a1 + 8);
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

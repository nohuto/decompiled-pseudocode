/*
 * XREFs of sub_140946FEC @ 0x140946FEC
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     sub_140940290 @ 0x140940290 (sub_140940290.c)
 */

__int64 __fastcall sub_140946FEC(_QWORD *a1)
{
  int v2; // edx
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]

  memset(SystemInformation, 0, sizeof(SystemInformation));
  v5 = 0LL;
  v2 = sub_140940290((__int64)a1, a1);
  if ( v2 < 0 )
  {
    v2 = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
    if ( v2 >= 0 )
      *a1 = *(_QWORD *)&SystemInformation[0] - v5;
  }
  return (unsigned int)v2;
}

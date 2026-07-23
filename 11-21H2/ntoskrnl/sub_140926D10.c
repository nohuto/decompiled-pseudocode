/*
 * XREFs of sub_140926D10 @ 0x140926D10
 * Callers:
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140926D10(__int64 a1, __int64 a2)
{
  GUID ActivityId; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5[2]; // [rsp+40h] [rbp-38h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    if ( (unsigned int)dword_140C038A0 > 5 )
      sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)&dword_14002A82C, &ActivityId, 0LL, 2u, v5);
    return 3221226755LL;
  }
  else
  {
    if ( (unsigned int)dword_140C038A0 > 5 )
      sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)&word_14002A84E, &ActivityId, 0LL, 2u, v5);
    return 0LL;
  }
}

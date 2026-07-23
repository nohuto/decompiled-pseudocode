/*
 * XREFs of sub_1409255A4 @ 0x1409255A4
 * Callers:
 *     sub_1409246D8 @ 0x1409246D8 (sub_1409246D8.c)
 * Callees:
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1409255A4(int a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // r9
  int v3; // r10d
  int v5; // [rsp+30h] [rbp-29h] BYREF
  __int64 v6; // [rsp+38h] [rbp-21h] BYREF
  __int64 v7; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  int *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  __int64 *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  if ( a1 == -1073741807 )
    return 0;
  if ( a1 != -1073741801 && a1 != -1073741670 && a1 != -1073741663 )
  {
    if ( (unsigned int)dword_140C03868 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
      {
        v6 = 1LL;
        v9 = &v6;
        v10 = 8LL;
        v11 = &v5;
        v5 = v3;
        v13 = &v7;
        v12 = 4LL;
        v7 = 0x1000000LL;
        v14 = 8LL;
        sub_1402A1A20((__int64)&dword_140C03868, (unsigned __int8 *)&byte_14002A458, v1, v2, &v8);
      }
    }
    return 0;
  }
  return 1;
}

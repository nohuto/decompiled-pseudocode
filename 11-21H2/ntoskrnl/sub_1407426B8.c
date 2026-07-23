/*
 * XREFs of sub_1407426B8 @ 0x1407426B8
 * Callers:
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 *     sub_1409194E0 @ 0x1409194E0 (sub_1409194E0.c)
 *     sub_14091C5C4 @ 0x14091C5C4 (sub_14091C5C4.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 *     sub_140919710 @ 0x140919710 (sub_140919710.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_1407426B8(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // edi
  char v5; // si
  __int64 QuadPart; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-39h] BYREF
  __int128 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h]
  int v11; // [rsp+50h] [rbp-19h]
  _OWORD v12[3]; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+88h] [rbp+1Fh] BYREF

  Interval.HighPart = -1;
  *a3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  memset(v12, 0, sizeof(v12));
  Interval.LowPart = -1000000;
  if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 1LL) )
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)word_140029EE2, 0LL, 0LL, 2u, v13);
  sub_140AB4550(v12);
  v4 = sub_140919710(&v9);
  if ( v4 >= 0 )
  {
    v10 = a2;
    v5 = 1;
    QuadPart = Interval.QuadPart;
    LOBYTE(v11) = 1;
    do
    {
      if ( v5 )
      {
        v5 = 0;
      }
      else
      {
        KeDelayExecutionThread(0, 0, &Interval);
        QuadPart *= 2LL;
        Interval.QuadPart = QuadPart;
        if ( QuadPart > -300000000 )
        {
          QuadPart = -300000000LL;
          Interval.QuadPart = -300000000LL;
        }
      }
      LODWORD(v9) = 0;
      v4 = sub_14065CE0C((__int64)&v9);
    }
    while ( v4 < 0 );
  }
  sub_140AB4580(v12);
  if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 1LL) )
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)qword_140029EC0, 0LL, 0LL, 2u, v13);
  return (unsigned int)v4;
}

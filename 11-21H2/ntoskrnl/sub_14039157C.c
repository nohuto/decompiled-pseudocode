/*
 * XREFs of sub_14039157C @ 0x14039157C
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     sub_14022DA40 @ 0x14022DA40 (sub_14022DA40.c)
 *     sub_14038B7AC @ 0x14038B7AC (sub_14038B7AC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_14039157C(LARGE_INTEGER *a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  LARGE_INTEGER v8; // [rsp+48h] [rbp+20h] BYREF

  v8.QuadPart = 0LL;
  v7 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( byte_140C4BFE1 )
    {
      if ( (_DWORD)a2 == 1 )
      {
        if ( (qword_140C4A7B8 & 1) == 0 && SystemTime.QuadPart )
        {
          if ( (qword_140C4A7B8 & 2) == 0 && !dword_140D01460 )
            ExLocalTimeToSystemTime(&SystemTime, &SystemTime);
          v2 = sub_14042A5E0(&v7, a2) - qword_140C4A658;
          if ( is_mul_ok(v2, 0x989680uLL) )
            v3 = v2 * (unsigned __int128)0x989680uLL / v7;
          else
            v3 = 10000000 * (v2 / v7) + 10000000 * (v2 % v7) / v7;
          SystemTime.QuadPart += v3;
        }
      }
      else if ( (_DWORD)a2 == 2 )
      {
        if ( (qword_140C4A7B8 & 1) != 0
          || !SystemTime.QuadPart
          || sub_14038B7AC(&v8, &v6) && SystemTime.QuadPart < v8.QuadPart )
        {
          byte_140C4C704 = 1;
        }
        else
        {
          sub_14022DA40((__int64 *)&SystemTime, v4, v5);
          SystemTime.QuadPart = 0LL;
        }
      }
    }
  }
  else if ( a1 )
  {
    SystemTime = a1[15];
    qword_140C4A658 = a1[16].QuadPart;
    qword_140C4A7B8 = a1[17].QuadPart;
  }
}

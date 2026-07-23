/*
 * XREFs of sub_1403A78F0 @ 0x1403A78F0
 * Callers:
 *     sub_1403DF720 @ 0x1403DF720 (sub_1403DF720.c)
 *     sub_1405514D0 @ 0x1405514D0 (sub_1405514D0.c)
 *     sub_1405519D0 @ 0x1405519D0 (sub_1405519D0.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140398ECC @ 0x140398ECC (sub_140398ECC.c)
 *     sub_1403A78C0 @ 0x1403A78C0 (sub_1403A78C0.c)
 *     sub_1403D7134 @ 0x1403D7134 (sub_1403D7134.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A4E360 @ 0x140A4E360 (sub_140A4E360.c)
 *     Dns_LibHeapReset @ 0x140AAB008 (Dns_LibHeapReset.c)
 *     sub_140AAB660 @ 0x140AAB660 (sub_140AAB660.c)
 *     sub_140AAB6EC @ 0x140AAB6EC (sub_140AAB6EC.c)
 *     sub_140AAB76C @ 0x140AAB76C (sub_140AAB76C.c)
 *     sub_140AABC94 @ 0x140AABC94 (sub_140AABC94.c)
 *     sub_140AAE8BC @ 0x140AAE8BC (sub_140AAE8BC.c)
 *     sub_140AAE8DC @ 0x140AAE8DC (sub_140AAE8DC.c)
 *     sub_140AAE968 @ 0x140AAE968 (sub_140AAE968.c)
 */

__int64 __fastcall sub_1403A78F0(char a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  char v7; // cl
  _OWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]

  result = 0LL;
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  if ( byte_140C547E0 && !a1 )
  {
    sub_140A4E360();
    qword_140C54D40 = 0LL;
    result = 0LL;
    byte_140C54D49 = 0;
    return result;
  }
  if ( a1 != byte_140C54D49 )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140C54D28 = a2;
      }
      else if ( !qword_140C54D28 )
      {
        return 3221225712LL;
      }
      sub_140AAB76C();
      byte_140C54905 = 0;
      byte_140C54904 = 0;
      ExWaitForRundownProtectionRelease(&RunRef);
      ExRundownCompleted(&RunRef);
      v3 = sub_140AAE8DC();
      if ( v3 < 0 )
      {
        sub_140AAE8BC();
        sub_1403D7134(3LL);
        v3 = 0;
      }
      else
      {
        byte_140C54D49 = 0;
        byte_140C54D38 = 0;
        if ( qword_140C54D30 )
        {
          sub_140AAE968();
          qword_140C54D30 = 0LL;
        }
      }
      Dns_LibHeapReset(0LL, 0LL, 0LL);
      sub_140AAB6EC();
      if ( qword_140C54D40 )
      {
        sub_14042A5E0(v5, v4);
        qword_140C54D40 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140C54D28 )
      return 3221225473LL;
    result = sub_14042A5E0(0LL, v8);
    if ( (int)result >= 0 )
    {
      qword_140C54D40 = 0LL;
      sub_140AAB660();
      v6 = sub_140398ECC((__int64)v8, 0);
      v7 = byte_140C54D49;
      v3 = v6;
      if ( v6 >= 0 )
        v7 = 1;
      byte_140C54D49 = v7;
      qword_140C54D30 = sub_140AABC94();
      if ( qword_140C54D30 )
        sub_14042A5E0(0LL, 4291217094LL);
      sub_1403A78C0();
      return (unsigned int)v3;
    }
  }
  return result;
}

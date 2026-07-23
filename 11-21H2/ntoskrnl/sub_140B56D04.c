/*
 * XREFs of sub_140B56D04 @ 0x140B56D04
 * Callers:
 *     sub_140B25898 @ 0x140B25898 (sub_140B25898.c)
 * Callees:
 *     sub_1403A78C0 @ 0x1403A78C0 (sub_1403A78C0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140AAB660 @ 0x140AAB660 (sub_140AAB660.c)
 *     sub_140AABC94 @ 0x140AABC94 (sub_140AABC94.c)
 *     sub_140AADB90 @ 0x140AADB90 (sub_140AADB90.c)
 *     sub_140AAE8BC @ 0x140AAE8BC (sub_140AAE8BC.c)
 */

__int64 __fastcall sub_140B56D04(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // ecx

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
  {
    if ( byte_140C54D48 )
      return 0LL;
    return 3221225473LL;
  }
  if ( !a2 )
  {
    sub_140AAE8BC();
    qword_140C5A8F0 = 0LL;
    sub_140AAB660();
  }
  result = sub_140AADB90(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      qword_140C54D30 = (__int64)sub_140AABC94();
      if ( qword_140C54D30 )
        sub_14042A5E0((unsigned int)dword_140D3CD68, 4291217094LL);
      v5 = sub_14042A5E0(9LL, 4LL);
      v6 = dword_140CFCEE0;
      if ( v5 < 0 )
        v6 = 2;
      dword_140CFCEE0 = v6;
    }
    byte_140C54D48 = 1;
    byte_140C54D49 = 1;
    sub_1403A78C0();
    return 0LL;
  }
  return result;
}

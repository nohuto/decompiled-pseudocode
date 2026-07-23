/*
 * XREFs of sub_1403D7134 @ 0x1403D7134
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140B25898 @ 0x140B25898 (sub_140B25898.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403D7134(int a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140C54D08;
  v3 = (unsigned int)(dword_140C54D08 - 3);
  if ( (unsigned int)v3 <= 1 )
  {
    if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 136) )
      sub_14042A5E0(0LL, v3);
    v4 = off_140C046D0;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140C54D08 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140C04790;
    qword_140C54D10 = (__int64)v4;
  }
  return result;
}

/*
 * XREFs of sub_140B1D7D0 @ 0x140B1D7D0
 * Callers:
 *     sub_140A5A5D0 @ 0x140A5A5D0 (sub_140A5A5D0.c)
 * Callees:
 *     sub_140AF9CC8 @ 0x140AF9CC8 (sub_140AF9CC8.c)
 */

__int64 __fastcall sub_140B1D7D0(__int64 a1)
{
  __int64 *i; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  qword_140C02140 = (__int64)sub_1403CCF90;
  off_140C01F58[0] = (__int64 (__fastcall *)())sub_140845F00;
  off_140C01F60 = (__int64 (__fastcall *)())sub_1405057C0;
  off_140C01C40[0] = (__int64 (__fastcall *)())sub_140908B50;
  off_140C01EA8[0] = (__int64 (__fastcall *)())sub_140398FD0;
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v2 = *((int *)i + 6);
    if ( (unsigned int)v2 <= 0x25 )
    {
      v3 = 0x2BC0400048LL;
      if ( _bittest64(&v3, v2) )
        continue;
    }
    if ( ((i[4] + i[5]) << 12) - 1 > (unsigned __int64)qword_140C4E038 )
      qword_140C4E038 = ((i[4] + i[5]) << 12) - 1;
  }
  sub_140AF9CC8(a1);
  return 0LL;
}

/*
 * XREFs of PsTlsAlloc @ 0x140852F80
 * Callers:
 *     sub_140B24668 @ 0x140B24668 (sub_140B24668.c)
 * Callees:
 *     sub_140852FB4 @ 0x140852FB4 (sub_140852FB4.c)
 */

__int64 __fastcall PsTlsAlloc(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (a2 & 0xBFFFFFFF) != 0 )
    return 3221225485LL;
  else
    return sub_140852FB4(a1, (unsigned int)(dword_140C5A580 + 2), a2, a3);
}

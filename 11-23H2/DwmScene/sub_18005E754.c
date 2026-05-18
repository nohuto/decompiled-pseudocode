/*
 * XREFs of sub_18005E754 @ 0x18005E754
 * Callers:
 *     sub_1800587AC @ 0x1800587AC (sub_1800587AC.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 *     sub_18001F588 @ 0x18001F588 (sub_18001F588.c)
 */

__int64 __fastcall sub_18005E754(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    sub_180011B80();
  v3 = sub_18001F588(a1, a2);
  if ( *a1 )
  {
    sub_18001E9BC(*a1, a1[1]);
    sub_1800100E8((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_180027524(a1, v3);
}

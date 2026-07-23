/*
 * XREFs of sub_140A976F4 @ 0x140A976F4
 * Callers:
 *     sub_140A96A2C @ 0x140A96A2C (sub_140A96A2C.c)
 * Callees:
 *     sub_14063A59C @ 0x14063A59C (sub_14063A59C.c)
 *     sub_140A976A8 @ 0x140A976A8 (sub_140A976A8.c)
 */

__int64 __fastcall sub_140A976F4(int a1)
{
  int v1; // r8d
  int v2; // r8d
  unsigned int v3; // ecx

  if ( (unsigned int)sub_14063A59C(a1, 1786137926) || (unsigned int)sub_14063A59C(v1, 1819692358) )
    return 0LL;
  v3 = qword_140C1ACE0 == &qword_140C1ACE0;
  if ( qword_140C1ACE0 != &qword_140C1ACE0 )
  {
    v3 = sub_140A976A8(v2);
    if ( v3 )
      ++dword_140D57840;
    else
      ++dword_140D5783C;
  }
  return v3;
}

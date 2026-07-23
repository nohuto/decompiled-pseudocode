/*
 * XREFs of sub_14038D2E0 @ 0x14038D2E0
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A4C960 @ 0x140A4C960 (sub_140A4C960.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14038D2E0(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( qword_140C54E00 )
  {
    v1 = a1 - 1;
    if ( !v1 )
    {
      v4 = 3LL;
      return sub_14042A5E0(v4, 0LL);
    }
    v2 = v1 - 1;
    if ( !v2 )
    {
      v4 = 4LL;
      return sub_14042A5E0(v4, 0LL);
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      v4 = 5LL;
      return sub_14042A5E0(v4, 0LL);
    }
    if ( v3 == 1 )
    {
      v4 = 7LL;
      return sub_14042A5E0(v4, 0LL);
    }
  }
  return result;
}

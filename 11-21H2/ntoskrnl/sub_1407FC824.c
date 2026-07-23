/*
 * XREFs of sub_1407FC824 @ 0x1407FC824
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1407FC824(unsigned int a1, __int64 a2)
{
  __int64 *v3; // rax
  unsigned int v4; // ecx

  if ( a1 )
  {
    v3 = (__int64 *)qword_140D06970;
    v4 = -1073741822;
    while ( v3 != &qword_140D06970 )
    {
      if ( v3[53] )
        return (unsigned int)sub_14042A5E0(a1, a2);
      v3 = (__int64 *)*v3;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}

/*
 * XREFs of sub_14095E754 @ 0x14095E754
 * Callers:
 *     sub_14095E4BC @ 0x14095E4BC (sub_14095E4BC.c)
 * Callees:
 *     sub_14095E650 @ 0x14095E650 (sub_14095E650.c)
 *     sub_14095E874 @ 0x14095E874 (sub_14095E874.c)
 *     sub_14095E9F0 @ 0x14095E9F0 (sub_14095E9F0.c)
 */

__int64 __fastcall sub_14095E754(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v10; // ebx

  if ( (int)sub_14095E9F0(a2, a5, a4, a6) >= 0 )
  {
    v10 = sub_14095E874(a1, a2, a3, a4, a5, a6);
    if ( v10 < 0 )
      sub_14095E650(a5, a4);
  }
  else
  {
    return (unsigned int)-2147483608;
  }
  return (unsigned int)v10;
}

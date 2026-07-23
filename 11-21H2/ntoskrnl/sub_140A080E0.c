/*
 * XREFs of sub_140A080E0 @ 0x140A080E0
 * Callers:
 *     sub_1406D0B60 @ 0x1406D0B60 (sub_1406D0B60.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A07EC0 @ 0x140A07EC0 (sub_140A07EC0.c)
 */

__int64 __fastcall sub_140A080E0(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( sub_140A07EC0(a1, (__int64 *)&v6) )
  {
    v4 = sub_14042A5E0(a1, a2);
    sub_1403614E0(v6);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}

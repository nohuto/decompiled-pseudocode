/*
 * XREFs of sub_140A081A8 @ 0x140A081A8
 * Callers:
 *     sub_1406A7150 @ 0x1406A7150 (sub_1406A7150.c)
 *     sub_1407E0340 @ 0x1407E0340 (sub_1407E0340.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A07EC0 @ 0x140A07EC0 (sub_140A07EC0.c)
 */

__int64 __fastcall sub_140A081A8(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v6; // [rsp+40h] [rbp+18h] BYREF

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

/*
 * XREFs of sub_1405E04A0 @ 0x1405E04A0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405E04A0(_QWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D06AA8) )
  {
    v3 = sub_14042A5E0(&v5, v2);
    if ( v3 >= 0 )
      *a1 = v5;
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140D06AA8 + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}

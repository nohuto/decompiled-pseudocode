/*
 * XREFs of sub_1405F3DFC @ 0x1405F3DFC
 * Callers:
 *     sub_14055EDD4 @ 0x14055EDD4 (sub_14055EDD4.c)
 *     sub_1405FD93C @ 0x1405FD93C (sub_1405FD93C.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405F3DFC(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B880) )
  {
    v3 = sub_14042A5E0(0LL, a2);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140C1B880 + 64));
  }
  return v3;
}

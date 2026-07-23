/*
 * XREFs of sub_1405F3CD0 @ 0x1405F3CD0
 * Callers:
 *     sub_1403B839C @ 0x1403B839C (sub_1403B839C.c)
 *     sub_14055E2F4 @ 0x14055E2F4 (sub_14055E2F4.c)
 *     sub_14055EBF8 @ 0x14055EBF8 (sub_14055EBF8.c)
 *     sub_1406AFCA8 @ 0x1406AFCA8 (sub_1406AFCA8.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405F3CD0(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx

  v2 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B880) )
  {
    v2 = sub_14042A5E0(a1, v3);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140C1B880 + 64));
  }
  return v2;
}

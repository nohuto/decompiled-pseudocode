/*
 * XREFs of sub_1405F3D28 @ 0x1405F3D28
 * Callers:
 *     sub_14055E2F4 @ 0x14055E2F4 (sub_14055E2F4.c)
 *     sub_14055E560 @ 0x14055E560 (sub_14055E560.c)
 *     sub_1405FD8C0 @ 0x1405FD8C0 (sub_1405FD8C0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405F3D28(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx

  v4 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B880) )
  {
    v4 = sub_14042A5E0(a1, a2);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140C1B880 + 64));
  }
  return v4;
}

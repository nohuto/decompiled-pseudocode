/*
 * XREFs of sub_14055F4A4 @ 0x14055F4A4
 * Callers:
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_140746B5C @ 0x140746B5C (sub_140746B5C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14055F4A4(void *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, _QWORD *a6, __int16 a7)
{
  if ( (a7 & 0x1000) != 0 )
  {
    *a4 = 0LL;
    *a5 = a1;
    *a6 = a2;
  }
  if ( (a7 & 0x400) != 0 )
  {
    memset(a1, (unsigned __int8)a7, 2 * a2);
    *a4 = 0LL;
    *a5 = a1;
    *a6 = a2;
  }
  if ( (a7 & 0x800) != 0 )
  {
    *a4 = 0LL;
    *a5 = a1;
    *a6 = a2;
  }
  return 0LL;
}

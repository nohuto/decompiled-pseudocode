/*
 * XREFs of sub_1407DB4C8 @ 0x1407DB4C8
 * Callers:
 *     sub_1407DB3F4 @ 0x1407DB3F4 (sub_1407DB3F4.c)
 *     sub_1409881B4 @ 0x1409881B4 (sub_1409881B4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1407DB4C8(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    memset(a1 + 3, 0, a2 - 24LL);
  }
  else
  {
    memset(a1, 0, a2);
    a1[1] = a1;
    *a1 = a1;
  }
  *((_DWORD *)a1 + 4) = 0;
  result = (a2 - 24) >> 4;
  *((_DWORD *)a1 + 5) = result;
  return result;
}

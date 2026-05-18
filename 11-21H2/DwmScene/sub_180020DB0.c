/*
 * XREFs of sub_180020DB0 @ 0x180020DB0
 * Callers:
 *     sub_1800209E8 @ 0x1800209E8 (sub_1800209E8.c)
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 *     sub_1800A068C @ 0x1800A068C (sub_1800A068C.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180020408 @ 0x180020408 (sub_180020408.c)
 */

const void **__fastcall sub_180020DB0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdi
  bool v5; // cf
  char *v6; // rbx
  const void **result; // rax

  v2 = a1 + 2;
  v3 = a1[2];
  if ( a2 > v3 )
  {
    v4 = a2 - v3;
    if ( a2 - v3 > a1[3] - v3 )
    {
      return sub_180020408((const void **)a1, v4, (__int64)v2, a2 - v3);
    }
    else
    {
      v5 = a1[3] < 0x10uLL;
      *v2 = a2;
      if ( !v5 )
        a1 = (_QWORD *)*a1;
      v6 = (char *)a1 + v3;
      result = (const void **)memset((char *)a1 + v3, 0, a2 - v3);
      v6[v4] = 0;
    }
  }
  else
  {
    if ( a1[3] >= 0x10uLL )
      a1 = (_QWORD *)*a1;
    *v2 = a2;
    *((_BYTE *)a1 + a2) = 0;
  }
  return result;
}

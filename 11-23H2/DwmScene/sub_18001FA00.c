/*
 * XREFs of sub_18001FA00 @ 0x18001FA00
 * Callers:
 *     sub_18001F40C @ 0x18001F40C (sub_18001F40C.c)
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18001ED20 @ 0x18001ED20 (sub_18001ED20.c)
 */

void **__fastcall sub_18001FA00(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdi
  bool v5; // cf
  char *v6; // rbx
  void **result; // rax

  v2 = a1 + 2;
  v3 = a1[2];
  if ( a2 > v3 )
  {
    v4 = a2 - v3;
    if ( a2 - v3 > a1[3] - v3 )
    {
      return sub_18001ED20((void **)a1, v4, (__int64)v2, a2 - v3);
    }
    else
    {
      v5 = a1[3] < 0x10uLL;
      *v2 = a2;
      if ( !v5 )
        a1 = (_QWORD *)*a1;
      v6 = (char *)a1 + v3;
      result = (void **)memset((char *)a1 + v3, 0, a2 - v3);
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

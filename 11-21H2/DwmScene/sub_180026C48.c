/*
 * XREFs of sub_180026C48 @ 0x180026C48
 * Callers:
 *     sub_180026C48 @ 0x180026C48 (sub_180026C48.c)
 *     sub_180027830 @ 0x180027830 (sub_180027830.c)
 *     sub_180027D00 @ 0x180027D00 (sub_180027D00.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180026C48 @ 0x180026C48 (sub_180026C48.c)
 */

__int64 __fastcall sub_180026C48(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rbx
  char *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x40uLL) )
  {
    sub_180026C48(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 5);
    if ( v7 )
    {
      sub_1800126E8(v7, *((_QWORD *)v6 + 6));
      sub_180010884(*((char **)v6 + 5), (*((_QWORD *)v6 + 7) - *((_QWORD *)v6 + 5)) & 0xFFFFFFFFFFFFFFF0uLL);
      *((_QWORD *)v6 + 5) = 0LL;
      *((_QWORD *)v6 + 6) = 0LL;
      *((_QWORD *)v6 + 7) = 0LL;
    }
  }
  return result;
}

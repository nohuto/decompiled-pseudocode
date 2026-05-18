/*
 * XREFs of sub_1800584E0 @ 0x1800584E0
 * Callers:
 *     sub_180057AF8 @ 0x180057AF8 (sub_180057AF8.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 */

void __fastcall sub_1800584E0(__int64 a1)
{
  unsigned __int64 v2; // rsi
  char *v3; // rbx
  unsigned __int64 v4; // rsi
  void *v5; // rbx

  if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 >= 0x10 )
    {
      v4 = v2 | 0xF;
      if ( v4 > 0x7FFFFFFFFFFFFFFFLL )
        v4 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v4 < *(_QWORD *)(a1 + 24) )
      {
        v5 = (void *)sub_180011088(v4 + 1);
        memcpy(v5, *(const void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
        sub_180010884(*(char **)a1, *(_QWORD *)(a1 + 24) + 1LL);
        *(_QWORD *)a1 = v5;
        *(_QWORD *)(a1 + 24) = v4;
      }
    }
    else
    {
      v3 = *(char **)a1;
      memcpy((void *)a1, *(const void **)a1, v2 + 1);
      sub_180010884(v3, *(_QWORD *)(a1 + 24) + 1LL);
      *(_QWORD *)(a1 + 24) = 15LL;
    }
  }
}

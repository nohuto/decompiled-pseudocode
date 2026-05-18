/*
 * XREFs of sub_18003372C @ 0x18003372C
 * Callers:
 *     sub_18003AFE8 @ 0x18003AFE8 (sub_18003AFE8.c)
 *     sub_18003B3FC @ 0x18003B3FC (sub_18003B3FC.c)
 *     sub_18006696C @ 0x18006696C (sub_18006696C.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 *     sub_1800F6860 @ 0x1800F6860 (sub_1800F6860.c)
 *     sub_1800F7A7C @ 0x1800F7A7C (sub_1800F7A7C.c)
 *     sub_1800F881C @ 0x1800F881C (sub_1800F881C.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001F958 @ 0x18001F958 (sub_18001F958.c)
 */

__int64 *__fastcall sub_18003372C(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  char *v5; // rsi
  __int64 v6; // rbx

  if ( a1 != a2 )
  {
    v4 = a2[2];
    if ( (unsigned __int64)a2[3] >= 8 )
      a2 = (__int64 *)*a2;
    if ( v4 > a1[3] )
    {
      sub_18001F958(a1, v4, a3, a2);
    }
    else
    {
      v5 = (char *)a1;
      if ( (unsigned __int64)a1[3] >= 8 )
        v5 = (char *)*a1;
      v6 = 2 * v4;
      a1[2] = v4;
      memmove(v5, a2, 2 * v4);
      *(_WORD *)&v5[v6] = 0;
    }
  }
  return a1;
}

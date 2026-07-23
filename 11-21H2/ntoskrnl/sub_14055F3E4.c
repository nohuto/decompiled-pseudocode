/*
 * XREFs of sub_14055F3E4 @ 0x14055F3E4
 * Callers:
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402DFEFC @ 0x1402DFEFC (sub_1402DFEFC.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_1402E04F4 @ 0x1402E04F4 (sub_1402E04F4.c)
 *     sub_14064C9B4 @ 0x14064C9B4 (sub_14064C9B4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14055F3E4(_WORD *a1, size_t a2, __int64 a3, _QWORD *a4, size_t *a5, __int16 a6)
{
  size_t v7; // rdi
  _WORD *v10; // rax

  v7 = a2 >> 1;
  if ( a2 >> 1 && (a6 & 0x1000) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  if ( (a6 & 0x400) == 0 )
  {
LABEL_7:
    if ( !v7 )
      return 0LL;
    goto LABEL_8;
  }
  memset(a1, (unsigned __int8)a6, a2);
  if ( !(_BYTE)a6 )
  {
    *a4 = a1;
    *a5 = v7;
    goto LABEL_7;
  }
  if ( !v7 )
    return 0LL;
  *a5 = 1LL;
  v10 = &a1[v7 - 1];
  *a4 = v10;
  *v10 = 0;
LABEL_8:
  if ( (a6 & 0x800) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  return 0LL;
}

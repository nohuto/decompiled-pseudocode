/*
 * XREFs of sub_1C005C1BC @ 0x1C005C1BC
 * Callers:
 *     sub_1C005C004 @ 0x1C005C004 (sub_1C005C004.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C005C1BC(_BYTE *a1, size_t a2, __int64 a3, _QWORD *a4, size_t *a5, __int16 a6)
{
  _BYTE *v10; // rax

  if ( a2 && (a6 & 0x1000) != 0 )
  {
    *a4 = a1;
    *a5 = a2;
    *a1 = 0;
  }
  if ( (a6 & 0x400) == 0 )
  {
LABEL_7:
    if ( !a2 )
      return 0LL;
    goto LABEL_8;
  }
  memset_0(a1, (unsigned __int8)a6, a2);
  if ( !(_BYTE)a6 )
  {
    *a4 = a1;
    *a5 = a2;
    goto LABEL_7;
  }
  if ( !a2 )
    return 0LL;
  *a5 = 1LL;
  v10 = &a1[a2 - 1];
  *a4 = v10;
  *v10 = 0;
LABEL_8:
  if ( (a6 & 0x800) != 0 )
  {
    *a4 = a1;
    *a5 = a2;
    *a1 = 0;
  }
  return 0LL;
}

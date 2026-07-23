/*
 * XREFs of sub_140248A04 @ 0x140248A04
 * Callers:
 *     sub_140395628 @ 0x140395628 (sub_140395628.c)
 *     sub_14051EAEC @ 0x14051EAEC (sub_14051EAEC.c)
 *     sub_1406C85A0 @ 0x1406C85A0 (sub_1406C85A0.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140A1641C @ 0x140A1641C (sub_140A1641C.c)
 *     sub_140A1A6D0 @ 0x140A1A6D0 (sub_140A1A6D0.c)
 *     sub_140A1A928 @ 0x140A1A928 (sub_140A1A928.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140248A04(_WORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int16 v8; // ax
  _WORD *v9; // rax

  v4 = a2 >> 1;
  if ( v4 - 1 > 0x7FFFFFFE )
    return 3221225485LL;
  v5 = a4 >> 1;
  if ( v5 > 0x7FFFFFFE )
  {
    *a1 = 0;
    return 3221225485LL;
  }
  v6 = v5 - v4;
  v7 = a3 - (_QWORD)a1;
  do
  {
    if ( !(v6 + v4) )
      break;
    v8 = *(_WORD *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = a1 - 1;
  if ( v4 )
    v9 = a1;
  *v9 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}

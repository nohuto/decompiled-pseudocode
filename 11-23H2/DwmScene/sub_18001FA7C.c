/*
 * XREFs of sub_18001FA7C @ 0x18001FA7C
 * Callers:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 * Callees:
 *     sub_18001EC48 @ 0x18001EC48 (sub_18001EC48.c)
 */

void __fastcall sub_18001FA7C(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rdx
  __int64 *v5; // r10
  unsigned __int64 v6; // rcx
  bool v7; // cf
  _WORD *v8; // rdi
  __int64 v9; // r9

  v3 = (unsigned __int64 *)(a1 + 2);
  v4 = a1[2];
  v5 = a1;
  if ( a2 <= v4 )
  {
    if ( (unsigned __int64)a1[3] >= 8 )
      v5 = (__int64 *)*a1;
    *v3 = a2;
LABEL_11:
    *((_WORD *)v5 + a2) = 0;
    return;
  }
  v6 = a2 - v4;
  if ( a2 - v4 <= v5[3] - v4 )
  {
    v7 = (unsigned __int64)v5[3] < 8;
    *v3 = a2;
    if ( !v7 )
      v5 = (__int64 *)*v5;
    v8 = (_WORD *)v5 + v4;
    if ( v6 )
    {
      while ( v6 )
      {
        *v8++ = 0;
        --v6;
      }
    }
    goto LABEL_11;
  }
  v9 = a2 - v4;
  LOBYTE(a2) = 0;
  sub_18001EC48(v5, v6, a2, v9);
}

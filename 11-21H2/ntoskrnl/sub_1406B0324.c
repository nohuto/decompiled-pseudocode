/*
 * XREFs of sub_1406B0324 @ 0x1406B0324
 * Callers:
 *     sub_1407795E4 @ 0x1407795E4 (sub_1407795E4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406B074C @ 0x1406B074C (sub_1406B074C.c)
 */

__int64 __fastcall sub_1406B0324(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // esi
  int v9; // ebp
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  __int64 *v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF

  v5 = 0;
  v6 = 0;
  v15 = 0LL;
  *a5 = 0;
  v9 = 1;
  if ( a3 )
  {
    v11 = (_QWORD *)(a4 + 48);
    while ( (*(_DWORD *)(v11 - 6) & 0xFF00000) == 0 )
    {
      v14 = &v15;
      v12 = sub_14042A5E0(a2, 56LL * v6 + a4 + 8);
      v5 = v12;
      if ( v12 == -1073741275 )
      {
        v5 = 0;
        v9 = 0;
      }
      else
      {
        if ( v12 )
          goto LABEL_8;
        LODWORD(v14) = *((_DWORD *)v11 - 2);
        sub_1406B074C(0LL, v15, 0LL, *((unsigned int *)v11 - 12), v14, *v11, *((_DWORD *)v11 - 1), a5);
        if ( *a5 == v5 )
          return 0LL;
      }
      ++v6;
      v11 += 7;
      if ( v6 >= a3 )
        goto LABEL_8;
    }
    v5 = -1073741811;
LABEL_8:
    if ( !v9 && !v5 )
      return (unsigned int)-1073741823;
  }
  return v5;
}

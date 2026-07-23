/*
 * XREFs of sub_1402FF310 @ 0x1402FF310
 * Callers:
 *     sub_140300190 @ 0x140300190 (sub_140300190.c)
 * Callees:
 *     sub_1402FDFE0 @ 0x1402FDFE0 (sub_1402FDFE0.c)
 *     sub_1402FE1C4 @ 0x1402FE1C4 (sub_1402FE1C4.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405781D0 @ 0x1405781D0 (sub_1405781D0.c)
 *     sub_140578254 @ 0x140578254 (sub_140578254.c)
 *     sub_140578398 @ 0x140578398 (sub_140578398.c)
 */

__int64 __fastcall sub_1402FF310(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rdi
  __int64 v10; // r8
  _DWORD *v11; // rbx
  __int16 v12; // r8
  __int16 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // edx
  _QWORD *v23; // [rsp+30h] [rbp-30h] BYREF
  _QWORD ***v24; // [rsp+38h] [rbp-28h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int128 v26; // [rsp+50h] [rbp-10h] BYREF

  v5 = qword_140C2AD50;
  v6 = *a3 | *a2 | *(_QWORD *)a1;
  v24 = (_QWORD ***)&v23;
  v23 = &v23;
  if ( (ULONG_PTR *)qword_140C2AD50 != &qword_140C2AD50 )
  {
    do
    {
      if ( *(_BYTE *)(v5 + 132) && (!*(_QWORD *)(v5 + 136) || (int)sub_140578398(v5) < 0) )
      {
        if ( *(_QWORD *)(v5 + 192) )
        {
          v20 = v24;
          v21 = (_QWORD *)(v5 + 208);
          if ( *v24 != &v23 )
            __fastfail(3u);
          *(_QWORD *)(v5 + 216) = v24;
          *v21 = &v23;
          *v20 = v21;
          v24 = (_QWORD ***)(v5 + 208);
        }
        else
        {
          v10 = *(_QWORD *)(v5 + 160);
          if ( (v6 & v10) != v10 )
          {
            v22 = dword_140D0E5E0[(unsigned int)sub_1402FE1C4((__int128 *)(v5 + 64))];
            *(_DWORD *)(v5 + 186) = 0;
            *(_WORD *)(v5 + 190) = 0;
            *(_WORD *)(v5 + 184) = v22 >> 6;
            v10 = 1LL << (v22 & 0x3F);
          }
          *(_QWORD *)(v5 + 176) = v10;
        }
      }
      v5 = *(_QWORD *)v5;
    }
    while ( (ULONG_PTR *)v5 != &qword_140C2AD50 );
    if ( v23 != &v23 )
    {
      v11 = qword_140C2AC20;
      memset(qword_140C2AC20, 0, 0x104uLL);
      *v11 = a4;
      v12 = *((_WORD *)a2 + 4);
      v13 = *(_WORD *)(a1 + 8);
      v26 = 0LL;
      WORD4(v26) = v12;
      if ( v12 == v13 )
      {
        v14 = *a2;
        v15 = *a2 & ~*(_QWORD *)a1;
      }
      else
      {
        v15 = *a2;
        v14 = *a2;
      }
      v16 = *((_WORD *)a3 + 4);
      *(_QWORD *)&v26 = v15;
      v25 = 0LL;
      WORD4(v25) = v16;
      if ( v16 == v13 )
        v17 = *a3 & ~*(_QWORD *)a1;
      else
        v17 = *a3;
      if ( v16 == v12 )
        v18 = v17 & ~v14;
      else
        v18 = v17;
      *(_QWORD *)&v25 = v18;
      sub_1402FDFE0(v11, &v23, (__int64 *)a1, (__int64 *)&v26, (__int64 *)&v25);
      if ( v23 != &v23 )
      {
        sub_140578254(&v23, a3);
        if ( v23 != &v23 )
          sub_1405781D0(&v23);
      }
    }
  }
  return 0LL;
}

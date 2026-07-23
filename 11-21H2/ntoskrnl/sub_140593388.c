/*
 * XREFs of sub_140593388 @ 0x140593388
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_14055CF10 @ 0x14055CF10 (sub_14055CF10.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14058E8F4 @ 0x14058E8F4 (sub_14058E8F4.c)
 *     sub_140592690 @ 0x140592690 (sub_140592690.c)
 *     sub_140592AA4 @ 0x140592AA4 (sub_140592AA4.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 *     sub_14059368C @ 0x14059368C (sub_14059368C.c)
 *     sub_1405A9DA4 @ 0x1405A9DA4 (sub_1405A9DA4.c)
 */

void __fastcall sub_140593388(__int64 a1, int a2, char a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned int i; // edi
  __int64 v10; // rdx
  ULONG v11; // esi
  ULONG v12; // r9d
  ULONG v13; // edx
  int v14; // r10d
  char *v15; // r11
  unsigned int v16; // edi
  unsigned int v17; // edx
  char *v18; // rdx
  __int64 j; // r8
  unsigned __int64 v20; // rax
  ULONG SizeOfBitMap; // edx
  __int64 v22; // rdi
  __int64 k; // rdi

  if ( a2 )
  {
    v8 = qword_140D06950;
    for ( i = 0; i < *(_DWORD *)qword_140D06950; ++i )
    {
      v10 = v8[2 * i + 2];
      if ( (dword_140D06880 & 0x4000) != 0 )
        sub_140592690(a1, v10, v8[2 * i + 3]);
      else
        sub_14042A5E0(a1, v10);
      v8 = qword_140D06950;
    }
  }
  else
  {
    if ( (_DWORD)dword_140D06884 )
    {
      v5 = qword_140D088C0;
      v6 = (unsigned int)dword_140D06884;
      do
      {
        sub_14042A5E0(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5++ + 8) + 184LL) + 40LL) >> 12);
        --v6;
      }
      while ( v6 );
    }
    sub_140593218(a1, 0xFFFF800000000000uLL, 0x800000000000LL);
    if ( (a3 & 1) != 0 && (dword_140C31E20 & 3) != 0 )
      sub_140593218(a1, 0LL, 0x7FFFFFFF0000LL);
    v7 = __readcr3();
    sub_14042A5E0(a1, v7 / 4096);
    if ( (a3 & 2) != 0 )
    {
      sub_140592AA4(a1);
      sub_14059368C(a1);
    }
  }
  v11 = 0;
  while ( 2 )
  {
    v12 = v11 < qword_140C51F28->SizeOfBitMap ? v11 : 0;
    v13 = qword_140C51F28->SizeOfBitMap - 1;
    v14 = ((__int64)qword_140C51F28->Buffer & 4) != 0LL ? 0x20 : 0;
    v15 = (char *)qword_140C51F28->Buffer - (((__int64)qword_140C51F28->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v16 = v14 + v13;
      if ( v13 - v12 == -1 )
        goto LABEL_18;
      v18 = &v15[8 * ((unsigned __int64)(v14 + v12) >> 6)];
      for ( j = ~*(_QWORD *)v18 | ((1LL << ((v14 + v12) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v18 )
      {
        v18 += 8;
        if ( v18 > &v15[8 * ((unsigned __int64)v16 >> 6)] )
          goto LABEL_18;
      }
      _BitScanForward64(&v20, ~j);
      v17 = v20 + ((unsigned int)((v18 - v15) >> 3) << 6);
      if ( v17 > v16 )
      {
LABEL_18:
        v17 = -1;
        goto LABEL_25;
      }
      if ( v17 != -1 )
        break;
LABEL_25:
      if ( !v12 )
        goto LABEL_30;
      SizeOfBitMap = v11 + 1;
      if ( v11 + 1 > qword_140C51F28->SizeOfBitMap )
        SizeOfBitMap = qword_140C51F28->SizeOfBitMap;
      v13 = SizeOfBitMap - 1;
      v12 = 0;
    }
    v17 -= v14;
LABEL_30:
    if ( v17 >= v11 && v17 != -1 )
    {
      v11 = v17 + 1;
      v22 = *(_QWORD *)(qword_140C51F48 + 8LL * v17);
      if ( (*(_DWORD *)(v22 + 4) & 2) != 0 )
      {
        for ( k = *(_QWORD *)(v22 + 6544); k != 0x3FFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x220000000000LL) & 0xFFFFFFFFFFLL )
          sub_14042A5E0(a1, k);
      }
      continue;
    }
    break;
  }
  sub_14058E8F4(a1);
  if ( MemoryDescriptorList )
    sub_1405A9DA4(a1);
}

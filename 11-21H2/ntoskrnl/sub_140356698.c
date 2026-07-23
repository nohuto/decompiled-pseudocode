/*
 * XREFs of sub_140356698 @ 0x140356698
 * Callers:
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 * Callees:
 *     sub_1403563F8 @ 0x1403563F8 (sub_1403563F8.c)
 *     sub_140356DBC @ 0x140356DBC (sub_140356DBC.c)
 */

char __fastcall sub_140356698(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r11
  volatile signed __int32 *v7; // r14
  int v8; // ebp
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned int *v11; // rcx
  int v12; // eax
  __int64 v13; // r11
  char v14; // al
  int v15; // eax
  volatile signed __int32 *v16; // rsi
  int v17; // eax
  __int64 v18; // r11
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int *v21; // rax

  v3 = 0;
  v4 = a2;
  if ( !a3 )
    return v3;
  v7 = (volatile signed __int32 *)(a1 + 120);
  v8 = *(_DWORD *)(a1 + 120);
  if ( v8 )
  {
    v15 = sub_140356DBC(a1 + 72, 0LL, 0LL);
    if ( v15 != 6 )
      goto LABEL_12;
  }
  if ( v4 )
  {
    v16 = (volatile signed __int32 *)(v4 + 104);
    if ( *(_DWORD *)(v4 + 104) > v3 )
    {
      v17 = sub_140356DBC(v4 + 56, 1LL, 3LL);
      v14 = sub_1403563F8(a1, v18, v18 + 56, v17, v16);
      goto LABEL_10;
    }
  }
  if ( *(_BYTE *)(a1 + 125) == 1 )
  {
    v9 = *(_DWORD *)(a1 + 180);
    v10 = v3;
    if ( v9 )
    {
      v11 = (unsigned int *)(a1 + 296);
      while ( *v11 <= v3 )
      {
        v10 = (unsigned int)(v10 + 1);
        v11 += 52;
        if ( (unsigned int)v10 >= v9 )
          goto LABEL_16;
      }
      v12 = sub_140356DBC(a1 + 208 * v10 + 248, 1LL, 3LL);
      v14 = sub_1403563F8(a1, v13 + 192, v13 + 248, v12, (volatile signed __int32 *)(v13 + 296));
      goto LABEL_10;
    }
  }
LABEL_16:
  if ( !v8 )
    return v3;
  v19 = *(_DWORD *)(a1 + 180);
  v20 = v3;
  if ( !v19 )
  {
LABEL_21:
    v15 = sub_140356DBC(a1 + 72, 4LL, 5LL);
LABEL_12:
    v14 = sub_1403563F8(a1, 0LL, a1 + 72, v15, v7);
LABEL_10:
    LOBYTE(v3) = v14;
    return v3;
  }
  v21 = (unsigned int *)(a1 + 296);
  while ( *v21 <= v3 )
  {
    ++v20;
    v21 += 52;
    if ( v20 >= v19 )
      goto LABEL_21;
  }
  return v3;
}

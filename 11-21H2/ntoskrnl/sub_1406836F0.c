/*
 * XREFs of sub_1406836F0 @ 0x1406836F0
 * Callers:
 *     sub_1406831A8 @ 0x1406831A8 (sub_1406831A8.c)
 *     sub_1406D5E88 @ 0x1406D5E88 (sub_1406D5E88.c)
 * Callees:
 *     sub_140209110 @ 0x140209110 (sub_140209110.c)
 *     sub_140675014 @ 0x140675014 (sub_140675014.c)
 *     sub_140675BB8 @ 0x140675BB8 (sub_140675BB8.c)
 *     sub_14068191C @ 0x14068191C (sub_14068191C.c)
 *     sub_1407A6508 @ 0x1407A6508 (sub_1407A6508.c)
 */

__int64 __fastcall sub_1406836F0(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // rbx
  char v7; // r14
  int v8; // ecx
  int v9; // edi
  unsigned int v10; // edi
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2[3];
  v3 = *(_QWORD *)(a1 + 2280);
  v4 = 0LL;
  v16 = 0LL;
  v7 = 0;
  if ( (v2 & 1) == 0 )
    goto LABEL_2;
  v13 = (__int64)(a2 + 4);
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(v13 + 2 * v14) );
  if ( !v14 || (v15 = sub_140675BB8(v13, v14, &v16), v4 = v16, v10 = v15, v15 >= 0) )
  {
    if ( *(_QWORD *)(v3 + 456) != v4 )
    {
      sub_1407A6508(v3 + 456, v4);
      v7 = 1;
    }
LABEL_2:
    v8 = *(_DWORD *)(v3 + 464);
    v9 = a2[1] | (unsigned __int16)(v8 & ~(unsigned __int16)*a2);
    if ( (unsigned __int16)v8 == v9 )
    {
      if ( !v7 )
      {
LABEL_4:
        v10 = 0;
        goto LABEL_5;
      }
    }
    else
    {
      v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      sub_140209110((unsigned __int64 *)(v3 + 120), (v9 & 4) != 0, v12);
      sub_140209110((unsigned __int64 *)(v3 + 416), (v9 & 8) != 0, v12);
      v4 = v16;
      *(_WORD *)(v3 + 464) = v9;
    }
    sub_14068191C(a1);
    goto LABEL_4;
  }
LABEL_5:
  if ( v4 )
    sub_140675014(qword_140C5AE28 + 56, v4);
  return v10;
}

/*
 * XREFs of sub_18000DB68 @ 0x18000DB68
 * Callers:
 *     sub_18000FDC4 @ 0x18000FDC4 (sub_18000FDC4.c)
 * Callees:
 *     sub_18000D628 @ 0x18000D628 (sub_18000D628.c)
 *     sub_18000EFDC @ 0x18000EFDC (sub_18000EFDC.c)
 *     sub_18000F768 @ 0x18000F768 (sub_18000F768.c)
 *     sub_180011254 @ 0x180011254 (sub_180011254.c)
 */

unsigned __int64 __fastcall sub_18000DB68(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const void *a4,
        size_t a5,
        int a6)
{
  char v6; // di
  int v7; // r12d
  unsigned __int64 v9; // r14
  unsigned __int64 v12; // rcx
  unsigned int v13; // r8d
  size_t v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // r15d
  __int64 v19; // r8
  char *v21; // rax
  __int16 v22; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+32h] [rbp-1Eh]
  int v24; // [rsp+34h] [rbp-1Ch]
  __int16 v25; // [rsp+38h] [rbp-18h]
  __int128 v26; // [rsp+40h] [rbp-10h]
  unsigned __int64 v27; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v22 = *(_WORD *)(a1 + 6);
  v7 = -1;
  v23 = *(_BYTE *)(a1 + 8);
  v9 = a3;
  v24 = 0;
  v25 = 0;
  v26 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v12 = (*(_QWORD *)(a1 + 32) - a3) / *(_QWORD *)(a1 + 16);
    if ( *(unsigned int *)(a2 + 4) > v12 )
      sub_180011254(a2, (unsigned int)v12);
    v13 = *(_DWORD *)(a2 + 4);
    v14 = a5;
    v15 = v9 + *(_QWORD *)(a1 + 16) * v13;
    v16 = sub_18000EFDC(a1, v9, v13, (_DWORD)a4, a5);
    v9 = v16;
    if ( v16 >= v15 )
      return v9;
    v17 = *(_QWORD *)(a1 + 32);
    v27 = v16;
    sub_18000F768(&v22, &v27, v17);
    v7 = sub_18000D628((__int64)&v22, a4, v14);
  }
  else
  {
    v18 = 0;
    if ( !*(_DWORD *)(a2 + 4) )
      return v9;
    while ( 1 )
    {
      v19 = *(_QWORD *)(a1 + 32);
      v27 = v9;
      if ( !(unsigned __int8)sub_18000F768(&v22, &v27, v19) )
        break;
      v7 = sub_18000D628((__int64)&v22, a4, a5);
      if ( v7 <= 0 )
        goto LABEL_12;
      v9 = v27;
      if ( ++v18 >= *(_DWORD *)(a2 + 4) )
        return v9;
    }
    sub_180011254(a2, v18);
  }
LABEL_12:
  if ( v7 )
    return v9;
  if ( v23 )
  {
    sub_180011254(&v22, (unsigned int)(a6 + v24));
    v21 = (char *)(a1 + 56);
LABEL_16:
    v6 = 1;
    goto LABEL_17;
  }
  v21 = (char *)(a1 + 56);
  if ( *(_BYTE *)(a1 + 56) )
    goto LABEL_16;
LABEL_17:
  *v21 = v6;
  return 0LL;
}

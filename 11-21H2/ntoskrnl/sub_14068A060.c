/*
 * XREFs of sub_14068A060 @ 0x14068A060
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 *     sub_14068A1CC @ 0x14068A1CC (sub_14068A1CC.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 */

__int64 __fastcall sub_14068A060(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rsi
  _QWORD *v10; // r8
  __int64 v11; // rdi
  int v12; // edx
  _DWORD *v13; // r14
  __int64 result; // rax
  unsigned int v15; // eax

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 )
    return 0LL;
  v6 = *(unsigned int *)(a1 + 168);
  if ( !(_DWORD)v6 || !*(_QWORD *)(a1 + 8 * v6 + 1544) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 1712);
  v8 = *(_DWORD *)(a1 + 1720);
  v9 = *(unsigned int *)(a1 + 1724);
  if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 4 )
  {
    v10 = (_QWORD *)(a1 + 1808);
  }
  else if ( (_DWORD)v6 == 5 )
  {
    v10 = (_QWORD *)(a1 + 1816);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v9 + *(unsigned int *)(a1 + 180) > *v10 )
    sub_14068EC28(a1, v6, v9 + *(unsigned int *)(a1 + 180), 1LL);
  v11 = 0LL;
  if ( !v8 )
  {
LABEL_13:
    result = sub_14068A23C(a1, *(unsigned int *)(a1 + 168));
    if ( (int)result < 0 )
      return result;
    ++*(_DWORD *)(a1 + 172);
    v15 = sub_140689DAC(*(_DWORD *)(a1 + 168));
    *(_BYTE *)(v15 + a1 + 192) = 1;
    sub_14068A1CC(v15, (unsigned int)v9);
    *a4 = v9;
    return 0LL;
  }
  v12 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    v13 = (_DWORD *)(v7 + 24 * v11);
    *v13 = v12;
    result = sub_14042A5E0(a1, *(unsigned int *)(a1 + 168));
    if ( (int)result < 0 )
      return result;
    v11 = (unsigned int)(v11 + 1);
    *(_DWORD *)(a1 + 180) += v13[4];
    v12 = *(_DWORD *)(a1 + 180);
    if ( (unsigned int)v11 >= v8 )
      goto LABEL_13;
  }
}

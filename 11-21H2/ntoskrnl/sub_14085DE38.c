/*
 * XREFs of sub_14085DE38 @ 0x14085DE38
 * Callers:
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 * Callees:
 *     sub_1403DAB6C @ 0x1403DAB6C (sub_1403DAB6C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E0320 @ 0x1405E0320 (sub_1405E0320.c)
 *     sub_1409339DC @ 0x1409339DC (sub_1409339DC.c)
 */

__int64 __fastcall sub_14085DE38(__int64 a1, int *a2, _DWORD *a3)
{
  signed int v6; // esi
  _QWORD *v7; // rdi
  __int64 v8; // r14
  int *i; // r15
  char v10; // cl
  __int64 v11; // r8

  memset(a3, 0, 0x240uLL);
  a3[129] = 1;
  a3[128] = 1;
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    if ( *(_QWORD *)a1 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    a1 = 0LL;
    a2 = dword_140D3CD18;
  }
  v6 = 0;
  v7 = a3 + 16;
  v8 = 0LL;
  for ( i = a2; ; ++i )
  {
    v10 = byte_140D07030[v8 * 8];
    if ( (v10 & 2) != 0 )
      goto LABEL_9;
    v11 = a2 ? *i : *(_QWORD *)(a1 + qword_140A39718[v8 + 3]);
    *v7 = v11;
    if ( (v10 & 1) == 0 )
      goto LABEL_9;
    if ( v11 != -1 )
      break;
    *v7 = 0LL;
    sub_1403DAB6C((__int64)&dword_140C1BF00[14 * v6], (__int64)(v7 - 8));
LABEL_9:
    ++v6;
    v7 += 16;
    ++v8;
    if ( v6 >= 4 )
      return 0LL;
  }
  if ( !v11 )
    goto LABEL_9;
  if ( sub_1405E0320(v6) )
  {
    if ( !v6 )
      sub_1409339DC();
    goto LABEL_9;
  }
  return 3221225626LL;
}

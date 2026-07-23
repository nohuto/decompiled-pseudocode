/*
 * XREFs of sub_1403C2378 @ 0x1403C2378
 * Callers:
 *     sub_1403C2FF8 @ 0x1403C2FF8 (sub_1403C2FF8.c)
 *     sub_14082A324 @ 0x14082A324 (sub_14082A324.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1403C24A0 @ 0x1403C24A0 (sub_1403C24A0.c)
 */

__int64 __fastcall sub_1403C2378(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 v6; // rsi
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // r8
  bool v9; // zf
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned int i; // r8d
  unsigned int v14; // r10d
  unsigned int j; // r9d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // cl
  ULONG ActiveProcessorCount; // eax
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  v21 = 0LL;
  sub_1403C24A0(a2, 0LL, 0LL, &v21);
  v6 = v21;
  *(_QWORD *)(a1 + 192) = v21;
  v7 = *a2;
  *(_BYTE *)(a1 + 208) = *a2;
  v8 = a2[2];
  *(_BYTE *)(a1 + 209) = v8;
  v9 = byte_140D068FB == 0;
  *(_QWORD *)(a1 + 200) = 1LL << a2[2];
  if ( v9 )
  {
    if ( v7 )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
      v7 = *(_BYTE *)(a1 + 208);
      v8 = *(_BYTE *)(a1 + 209);
      *(_BYTE *)(a1 + 4) = a2[2] % ActiveProcessorCount;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = a2[2];
    }
  }
  else
  {
    v19 = *(_BYTE *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 36) > 0xFFu )
      v19 = -1;
    *(_BYTE *)(a1 + 4) = v19;
  }
  v10 = *(unsigned int *)(a1 + 36);
  result = v8;
  v12 = v8 + (v7 << 6);
  dword_140D0E5E0[v10] = v12;
  dword_140D105E0[v12] = v10;
  for ( i = 0; i < 5; ++i )
  {
    v14 = dword_140D05350;
    for ( j = 0; j < v14; *(_QWORD *)(v16 + 8 * v18 + 16) |= result )
    {
      v16 = *(_QWORD *)(v6 + 192);
      v17 = j + i * *(unsigned __int8 *)(v6 + 185);
      v18 = 3 * v17;
      if ( !a3 )
      {
        *(_QWORD *)(v16 + 24 * v17) |= *(_QWORD *)(a1 + 200);
        *(_QWORD *)(v16 + 24 * v17 + 8) |= *(_QWORD *)(a1 + 200);
      }
      result = *(_QWORD *)(a1 + 200);
      ++j;
    }
  }
  return result;
}

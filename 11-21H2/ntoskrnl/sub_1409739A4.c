/*
 * XREFs of sub_1409739A4 @ 0x1409739A4
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140972700 @ 0x140972700 (sub_140972700.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x1402340F0 (RtlClearAllBitsEx.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 */

__int64 __fastcall sub_1409739A4(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  unsigned int v6; // r12d
  PVOID v7; // rax
  ULONG64 v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int16 v11; // ax
  _RTL_BITMAP_EX *v12; // rbx
  unsigned __int64 *v13; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(**(_QWORD **)(a1 + 16) + 8LL);
  v6 = 8 * (((v5 & 0x3F) != 0) + ((unsigned int)v5 >> 6));
  v7 = sub_1402828F0(64, v6, 0x4D424450u);
  if ( !v7 )
    return 3221225626LL;
  v8 = (unsigned int)v5;
  *(_QWORD *)(v3 + 48) = v5;
  *(_QWORD *)(v3 + 56) = v7;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 16) + 128LL;
  if ( *(_QWORD *)(a1 + 16) != -128LL )
  {
    do
    {
      v11 = *(_WORD *)(v10 + 32) >> 1;
      if ( (v11 & 2) == 0 && (!a2 || (v11 & 4) != 0) )
        RtlSetBitsEx(v3 + 48, v9, *(unsigned int *)(v10 + 44));
      v9 += *(_DWORD *)(v10 + 44);
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 );
  }
  v12 = *(_RTL_BITMAP_EX **)(a1 + 8);
  v13 = (unsigned __int64 *)sub_1402828F0(256, v6, 0x4D424450u);
  if ( !v13 )
    return 3221225626LL;
  v12[4].SizeOfBitMap = v8;
  v12[4].Buffer = v13;
  RtlClearAllBitsEx(v12 + 4);
  return 0LL;
}

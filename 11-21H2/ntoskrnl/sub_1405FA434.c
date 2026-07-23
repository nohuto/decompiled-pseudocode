/*
 * XREFs of sub_1405FA434 @ 0x1405FA434
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 * Callees:
 *     sub_140240FB0 @ 0x140240FB0 (sub_140240FB0.c)
 *     sub_1405F68C8 @ 0x1405F68C8 (sub_1405F68C8.c)
 *     sub_1405FA010 @ 0x1405FA010 (sub_1405FA010.c)
 *     sub_1405FA9D8 @ 0x1405FA9D8 (sub_1405FA9D8.c)
 */

__int64 __fastcall sub_1405FA434(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v5; // r12d
  __int64 v6; // rbp
  unsigned int v7; // r8d
  int v8; // esi
  int v9; // ebx
  __int64 v10; // r14
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0;
  v2 = a1 + 2016;
  v5 = 0;
  v6 = 0LL;
  sub_140240FB0(a1 + 2016, &v12, 0LL);
  v7 = *(_DWORD *)(a1 + 2872) - v12;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    v8 = 2;
    if ( v7 < 2 )
    {
      v12 = 0;
      v10 = a1 + 80;
      v6 = v2;
      goto LABEL_9;
    }
    goto LABEL_3;
  }
  if ( v7 < 8 )
  {
LABEL_3:
    v9 = 1075380276;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  v10 = v2;
  v6 = a1 + 80;
  if ( *(_DWORD *)(v2 + 856) != v7 )
    v8 = *(_DWORD *)(a1 + 2872) - v12;
  v12 = 0;
  if ( v8 )
  {
LABEL_9:
    while ( 1 )
    {
      v9 = sub_1405FA010(v10, &v12);
      if ( v9 < 0 )
        break;
      ++v5;
      *(_BYTE *)(((unsigned __int64)v12 >> 3) + *(_QWORD *)(v6 + 848)) |= 1 << (v12 & 7);
      ++*(_DWORD *)(v6 + 856);
      if ( !--v8 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v9 = 0;
  }
LABEL_12:
  sub_1405FA9D8(a1, a2);
  if ( v6 == v2 && v5 && v9 != -1073741818 )
  {
    sub_1405F68C8((_DWORD **)((a1 + 96) & -(__int64)(a1 != -80)));
    sub_1405F68C8((_DWORD **)((a1 + 160) & -(__int64)(a1 != -144)));
  }
  return (unsigned int)v9;
}

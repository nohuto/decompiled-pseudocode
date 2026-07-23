/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x140394350
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x140393DC0 (MiRescanPagefileBitmaps.c)
 *     MiCheckFreeModifiedReservations @ 0x140638D70 (MiCheckFreeModifiedReservations.c)
 *     MiCreatePagefile @ 0x1408355E4 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x140435400 (memset.c)
 */

BOOLEAN __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  BOOLEAN v1; // bl
  __int64 v2; // r14
  __int64 v3; // r15
  _RTL_BALANCED_NODE *v4; // rsi
  _RTL_BALANCED_NODE *v6; // rdi
  _RTL_BALANCED_NODE *v7; // rbp
  _RTL_BALANCED_NODE *v8; // rax
  unsigned __int64 v9; // rdx
  BOOLEAN v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  BOOLEAN result; // al

  v1 = 0;
  v2 = a1 + 144;
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = a1 + 160;
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = (_RTL_BALANCED_NODE *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v6 = *(_RTL_BALANCED_NODE **)(a1 + 192);
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v7 = (_RTL_BALANCED_NODE *)((char *)v6 + 28616);
  memset(v6, 0, 0x7000uLL);
  while ( v6 < v7 )
  {
    v8 = v4->Children[1];
    if ( v8->Children[0] != v4 )
      __fastfail(3u);
    v6->Children[0] = v4;
    v6->Children[1] = v8;
    v8->Children[0] = v6;
    v4->Children[1] = v6;
    v6 = (_RTL_BALANCED_NODE *)((char *)v6 + 56);
  }
  HIDWORD(v6[2].Left) = -1;
  LODWORD(v6[2].Children[0]) = -1;
  v9 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v9 )
    v9 ^= v2;
  v10 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 8);
      if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
      {
        if ( !v11 )
          break;
        v11 ^= v9;
      }
      if ( !v11 )
        break;
      v9 = v11;
    }
    v10 = 1;
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v2, (PRTL_BALANCED_NODE)v9, v10, v6);
  v12 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 && v12 )
    v12 ^= v3;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( LODWORD(v6[2].Children[0]) >= *(_DWORD *)(v12 + 24) )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_25;
          v13 ^= v12;
        }
        if ( !v13 )
        {
LABEL_25:
          v1 = 1;
          break;
        }
      }
      else
      {
        v13 = *(_QWORD *)v12;
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v13 )
            break;
          v13 ^= v12;
        }
        if ( !v13 )
          break;
      }
      v12 = v13;
    }
  }
  result = RtlRbInsertNodeEx((PRTL_RB_TREE)v3, (PRTL_BALANCED_NODE)v12, v1, v6 + 1);
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}

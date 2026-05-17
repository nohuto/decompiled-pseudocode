/*
 * XREFs of RtlAvlInsertNodeEx @ 0x180072B00
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180072880 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18008D040 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800EC510 (RtlAddFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x180072CA8 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v5; // r9
  char v6; // r8
  char v7; // di
  _BOOL8 v8; // r9
  _BOOL8 v9; // r11
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // r9
  __int64 v16; // rcx

  v5 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( !a2 )
  {
    *a1 = a4;
    return;
  }
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  while ( 1 )
  {
    v6 = (-1 - 2 * v5) & 3;
    v7 = *(_BYTE *)(a2 + 16) & 3;
    if ( v7 )
      break;
    a4 = a2;
    *(_BYTE *)(a2 + 16) = v6 | *(_BYTE *)(a2 + 16) & 0xFC;
    a2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return;
    v5 = *(_QWORD *)a2 != a4;
  }
  if ( v7 != v6 )
  {
LABEL_17:
    *(_BYTE *)(a2 + 16) &= 0xFCu;
    return;
  }
  if ( (*(_BYTE *)(a4 + 16) & 3) == v7 )
  {
    v8 = !v5;
    if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v9 = v8;
      v10 = !v8;
      if ( *(_QWORD *)(a2 + 8 * v10) == a4 )
      {
        v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 8) == a2 )
          {
            *(_QWORD *)(v11 + 8) = a4;
          }
          else
          {
            if ( *(_QWORD *)v11 != a2 )
              goto LABEL_29;
            *(_QWORD *)v11 = a4;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_29;
          *a1 = a4;
        }
        *(_QWORD *)(a4 + 16) &= 3uLL;
        *(_QWORD *)(a4 + 16) |= v11;
        v12 = *(_QWORD *)(a4 + 8 * v9);
        if ( !v12 )
        {
LABEL_16:
          *(_QWORD *)(a2 + 8 * v10) = v12;
          *(_QWORD *)(a4 + 8 * v9) = a2;
          *(_QWORD *)(a2 + 16) &= 3uLL;
          *(_QWORD *)(a2 + 16) |= a4;
          *(_BYTE *)(a4 + 16) &= 0xFCu;
          goto LABEL_17;
        }
        v16 = *(_QWORD *)(v12 + 16);
        if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) == a4 )
        {
          *(_QWORD *)(v12 + 16) = a2 | v16 & 3;
          goto LABEL_16;
        }
      }
    }
LABEL_29:
    __fastfail(0x1Du);
  }
  v13 = RtlpTreeDoubleRotateNodes(a1, a2, a4, v5);
  *(_BYTE *)(v14 + 16) &= 0xFCu;
  v15 = *(_BYTE *)(a4 + 16) & 0xFC;
  *(_BYTE *)(a4 + 16) = v15;
  if ( v7 == (*(_BYTE *)(v13 + 16) & 3) )
  {
    *(_BYTE *)(v14 + 16) &= 0xFCu;
    *(_BYTE *)(v14 + 16) |= (v7 ^ 0xFE) & 3;
  }
  else if ( v7 == ((*(_BYTE *)(v13 + 16) ^ 0xFE) & 3) )
  {
    *(_BYTE *)(a4 + 16) = v7 | v15;
  }
  *(_BYTE *)(v13 + 16) &= 0xFCu;
}

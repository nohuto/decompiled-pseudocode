/*
 * XREFs of sub_140A93E84 @ 0x140A93E84
 * Callers:
 *     sub_140A93BA8 @ 0x140A93BA8 (sub_140A93BA8.c)
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 */

void __fastcall sub_140A93E84(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  int *v6; // rdi
  __int64 v7; // rbp
  int v8; // r14d
  __int64 v9; // rbx
  char v10; // si
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( a1 && a2 )
  {
    v6 = (int *)(a1 + 8);
    v7 = a2;
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 == -1 )
        goto LABEL_16;
      v9 = *((_QWORD *)v6 + 1);
      if ( !v9 )
        goto LABEL_16;
      v10 = BYTE4(qword_140D01450);
      if ( (qword_140D01450 & 0x800000000LL) == 0
        || (unsigned int)sub_1402DA4B0() && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v10 & 2) != 0) )
      {
        goto LABEL_13;
      }
      v11 = *(_DWORD *)(v9 + 32);
      if ( (v11 & 1) != 0 )
        break;
LABEL_16:
      v6 += 6;
      if ( !--v7 )
        return;
    }
    if ( (v11 & 4) != 0 )
LABEL_13:
      v12 = *(_QWORD *)(v9 + 8);
    else
      v12 = **(_QWORD **)(v9 + 40);
    if ( v12 )
    {
      v13 = (unsigned int)*a4;
      v14 = 3 * v13;
      *(_DWORD *)(a3 + 8 * v14) = v8;
      *(_QWORD *)(a3 + 8 * v14 + 8) = v12;
      *a4 = v13 + 1;
    }
    goto LABEL_16;
  }
}

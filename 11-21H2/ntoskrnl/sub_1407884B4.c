/*
 * XREFs of sub_1407884B4 @ 0x1407884B4
 * Callers:
 *     sub_140788300 @ 0x140788300 (sub_140788300.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407884B4(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r15d
  char v6; // r12
  int v7; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned __int64 v12; // r8
  unsigned int v13; // r8d

  v5 = 0;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  v7 = 0;
  if ( !a1 || !a2 )
  {
    v7 = -1073741811;
    goto LABEL_17;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = a1 + a2;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x24 && *(_DWORD *)a1 == 36 )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 24) = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a4 + 36) = *(_DWORD *)(a1 + 32);
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x28 )
    {
      v7 = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        v7 = -1073741811;
    }
  }
  if ( v7 < 0 )
    goto LABEL_33;
  v9 = (_QWORD *)(a4 + 24);
  v10 = *(void **)(a4 + 24);
  *(_QWORD *)(a4 + 24) = 0LL;
  if ( !v10 )
  {
    if ( !*(_DWORD *)(a4 + 32) )
      goto LABEL_17;
    goto LABEL_32;
  }
  v13 = *(_DWORD *)(a4 + 32);
  if ( v13 >= 2 )
  {
    v7 = sub_14077C610((void **)(a4 + 24), v10, v13, 2u, v6, 1);
    if ( v7 < 0 )
    {
      *v9 = 0LL;
      *(_DWORD *)(a4 + 32) = 0;
    }
    else
    {
      v5 = 1;
      *(_WORD *)(*v9 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 32) >> 1) - 2) = 0;
    }
LABEL_17:
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_33;
  }
LABEL_32:
  v7 = -1073741811;
LABEL_33:
  if ( v5 )
    sub_1402DF554(v6, *(void **)(a4 + 24));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)v7;
}

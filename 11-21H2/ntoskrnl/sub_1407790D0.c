/*
 * XREFs of sub_1407790D0 @ 0x1407790D0
 * Callers:
 *     sub_140778DA4 @ 0x140778DA4 (sub_140778DA4.c)
 *     sub_140956298 @ 0x140956298 (sub_140956298.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407790D0(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char v5; // r13
  int v6; // esi
  unsigned __int64 v7; // r8
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+34h] [rbp-44h]
  int v17; // [rsp+38h] [rbp-40h]

  v16 = 0;
  v17 = 0;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  v6 = 0;
  if ( !a1 || !a2 )
  {
    v6 = -1073741811;
    goto LABEL_21;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x28 && *(_DWORD *)a1 == 40 )
    {
      *(_DWORD *)a4 = 56;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a4 + 40) = *(unsigned int *)(a1 + 28);
      *(_DWORD *)(a4 + 48) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a4 + 52) = *(_DWORD *)(a1 + 36);
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x38 )
    {
      v6 = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_QWORD *)(a4 + 48) = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)a4 != 56 )
        v6 = -1073741811;
    }
  }
  if ( v6 < 0 )
    goto LABEL_45;
  v8 = (_QWORD *)(a4 + 16);
  v9 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  if ( v9 )
  {
    v10 = *(unsigned int *)(a4 + 24);
    if ( (unsigned int)v10 < 2 )
    {
      if ( *(_DWORD *)(a4 + 24) < 2u )
        goto LABEL_24;
    }
    else
    {
      v6 = sub_14077C610(a4 + 16, v9, v10, 2LL, v5, 1);
      if ( v6 < 0 )
      {
        *v8 = 0LL;
        *(_DWORD *)(a4 + 24) = 0;
      }
      else
      {
        v16 = 1;
        *(_WORD *)(*v8 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
      }
    }
  }
  else if ( *(_DWORD *)(a4 + 24) )
  {
    goto LABEL_24;
  }
  v11 = *(_QWORD *)(a4 + 40);
  *(_QWORD *)(a4 + 40) = 0LL;
  if ( !v11 )
  {
    if ( !*(_DWORD *)(a4 + 48) )
      goto LABEL_21;
    goto LABEL_24;
  }
  v14 = *(unsigned int *)(a4 + 48);
  if ( (_DWORD)v14 )
  {
    LOBYTE(v15) = v5;
    v6 = sub_14077C610(a4 + 40, v11, v14, 1LL, v15, 1);
    if ( v6 < 0 )
    {
      *(_QWORD *)(a4 + 40) = 0LL;
      *(_DWORD *)(a4 + 48) = 0;
    }
    else
    {
      v17 = 1;
    }
LABEL_21:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_45;
  }
LABEL_24:
  v6 = -1073741811;
LABEL_45:
  if ( v16 )
    sub_1402DF554(v5, *(void **)(a4 + 16));
  if ( v17 )
    sub_1402DF554(v5, *(void **)(a4 + 40));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  return (unsigned int)v6;
}

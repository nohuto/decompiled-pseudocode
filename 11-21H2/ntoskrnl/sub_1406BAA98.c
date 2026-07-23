/*
 * XREFs of sub_1406BAA98 @ 0x1406BAA98
 * Callers:
 *     sub_1406BA720 @ 0x1406BA720 (sub_1406BA720.c)
 *     sub_1406BA8F4 @ 0x1406BA8F4 (sub_1406BA8F4.c)
 *     sub_140806A24 @ 0x140806A24 (sub_140806A24.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406BAA98(_DWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r15d
  char v6; // r12
  int v7; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v13; // r8

  v5 = 0;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  v7 = 0;
  if ( !a1 || !a2 )
  {
    v7 = -1073741811;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int64)a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x24 && *a1 == 36 )
    {
      *(_DWORD *)a4 = 48;
      *(_DWORD *)(a4 + 4) = a1[1];
      *(_DWORD *)(a4 + 8) = a1[2];
      *(_QWORD *)(a4 + 16) = (unsigned int)a1[3];
      *(_DWORD *)(a4 + 24) = a1[4];
      *(_DWORD *)(a4 + 28) = a1[5];
      *(_DWORD *)(a4 + 32) = a1[6];
      *(_DWORD *)(a4 + 36) = a1[7];
      *(_DWORD *)(a4 + 40) = a1[8];
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x30 )
    {
      v7 = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)a1 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)a1 + 2);
      if ( *(_DWORD *)a4 != 48 )
        v7 = -1073741811;
    }
  }
  if ( v7 >= 0 )
  {
    v9 = (_QWORD *)(a4 + 16);
    v10 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v10 )
    {
      v11 = *(unsigned int *)(a4 + 24);
      if ( (unsigned int)v11 >= 2 )
      {
        v7 = sub_14077C610(a4 + 16, v10, v11, 2LL, v6, 1);
        if ( v7 < 0 )
        {
          *v9 = 0LL;
          *(_DWORD *)(a4 + 24) = 0;
        }
        else
        {
          v5 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
        }
LABEL_19:
        if ( v7 >= 0 )
          return (unsigned int)v7;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(a4 + 24) >= 2u )
        goto LABEL_19;
    }
    else if ( !*(_DWORD *)(a4 + 24) )
    {
      goto LABEL_19;
    }
    v7 = -1073741811;
  }
LABEL_36:
  if ( v5 )
    sub_1402DF554(v6, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  return (unsigned int)v7;
}

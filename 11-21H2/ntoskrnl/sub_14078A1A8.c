/*
 * XREFs of sub_14078A1A8 @ 0x14078A1A8
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_140789CFC @ 0x140789CFC (sub_140789CFC.c)
 *     sub_140789E04 @ 0x140789E04 (sub_140789E04.c)
 *     sub_14078A748 @ 0x14078A748 (sub_14078A748.c)
 *     sub_140954BA8 @ 0x140954BA8 (sub_140954BA8.c)
 *     sub_140954D10 @ 0x140954D10 (sub_140954D10.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140955184 @ 0x140955184 (sub_140955184.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 *     sub_1409554B0 @ 0x1409554B0 (sub_1409554B0.c)
 *     sub_140955BAC @ 0x140955BAC (sub_140955BAC.c)
 *     sub_140955CA4 @ 0x140955CA4 (sub_140955CA4.c)
 *     sub_14095644C @ 0x14095644C (sub_14095644C.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14078A1A8(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r15d
  char v6; // r12
  int v7; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned int v11; // r8d
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
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x1C && *(_DWORD *)a1 == 28 )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 24);
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
  if ( v7 >= 0 )
  {
    v9 = (_QWORD *)(a4 + 16);
    v10 = *(void **)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v10 )
    {
      v11 = *(_DWORD *)(a4 + 24);
      if ( v11 >= 2 )
      {
        v7 = sub_14077C610((void **)(a4 + 16), v10, v11, 2u, v6, 1);
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
        goto LABEL_34;
      }
    }
    else if ( !*(_DWORD *)(a4 + 24) )
    {
      goto LABEL_19;
    }
    v7 = -1073741811;
  }
LABEL_34:
  if ( v5 )
    sub_1402DF554(v6, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)v7;
}

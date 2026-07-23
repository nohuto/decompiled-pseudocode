/*
 * XREFs of sub_14028CEE0 @ 0x14028CEE0
 * Callers:
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 *     sub_1405C30B0 @ 0x1405C30B0 (sub_1405C30B0.c)
 */

__int64 __fastcall sub_14028CEE0(unsigned __int64 a1, int a2, char a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  __int64 v22; // r8

  v3 = a1;
  v4 = qword_14001C780[a2];
  v5 = 48 * a1 - 0x220000000000LL;
  v6 = a1 + v4;
  v7 = v5;
  v8 = a1;
  if ( a1 >= a1 + v4 )
  {
LABEL_4:
    if ( v8 == v6 )
      return 1LL;
  }
  else
  {
    while ( *(_WORD *)(v7 + 32) == 2 )
    {
      v7 += 48LL;
      if ( ++v8 >= v6 )
        goto LABEL_4;
    }
  }
  v10 = 0LL;
  v11 = (unsigned __int8)sub_1402F2700(48 * a1 - 0x220000000000LL);
  *(_QWORD *)v5 ^= (v4 ^ *(_QWORD *)v5) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v3 < v6 )
  {
    do
    {
      if ( (unsigned int)sub_1405C30B0(v7) )
      {
        ++v10;
      }
      else if ( (a3 & 4) != 0 )
      {
        sub_1405AD67C(v7);
      }
      v7 += 48LL;
      ++v3;
    }
    while ( v3 < v6 );
    if ( v10 )
    {
      if ( v10 == v4 )
        return 1LL;
      v17 = (unsigned __int8)sub_1402F2700(v5);
      v18 = (*(_QWORD *)v5 & 0xFFFFFFFFFFLL) - v10;
      *(_QWORD *)v5 ^= (v18 ^ *(_QWORD *)v5) & 0xFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v22 = *((_QWORD *)v20 + 4375);
            v16 = (v21 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v21;
            if ( v16 )
              sub_140418E4C(v20);
          }
        }
      }
      __writecr8(v17);
      if ( !v18 )
        return 1LL;
    }
  }
  return 0LL;
}

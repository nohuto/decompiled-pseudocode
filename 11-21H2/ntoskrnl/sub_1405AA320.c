/*
 * XREFs of sub_1405AA320 @ 0x1405AA320
 * Callers:
 *     sub_1405AB148 @ 0x1405AB148 (sub_1405AB148.c)
 * Callees:
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405AA320(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 *v21; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v6 = a2 + 24;
  v7 = (unsigned __int8)sub_1402F2700(a2);
  if ( *(_WORD *)(a2 + 32) > 2u
    || (*(_QWORD *)v6 & 0x3FFFFFFFFFFFFFFFLL) != 1
    || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    return 3221225496LL;
  }
  v14 = *(_QWORD *)(a2 + 16);
  _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v12 )
          sub_140418E4C((__int64)v16);
      }
    }
  }
  __writecr8(v7);
  v19 = 0LL;
  v20 = 0LL;
  if ( v3 )
  {
    while ( *(_WORD *)(v6 + 8) <= 2u && (*(_QWORD *)v6 & 0x4000000000000000LL) == 0 )
    {
      *(_QWORD *)(v6 - 8) = v19;
      ++v20;
      v19 = v6 - 24;
      v6 += 48LL;
      if ( v20 >= v3 )
        goto LABEL_24;
    }
    while ( v19 )
    {
      v21 = (__int64 *)(v19 + 16);
      v19 = *(_QWORD *)(v19 + 16);
      *v21 = v14;
    }
    return 3221225496LL;
  }
LABEL_24:
  sub_1402680C0(v19, a3, v14);
  return 0LL;
}

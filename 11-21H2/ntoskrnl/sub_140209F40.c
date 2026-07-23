/*
 * XREFs of sub_140209F40 @ 0x140209F40
 * Callers:
 *     sub_140685304 @ 0x140685304 (sub_140685304.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140209F40(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v2; // rbp
  __int64 *v3; // r15
  __int64 v4; // rdi
  __int64 v5; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  struct _KPRCB *v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  __int64 v19; // r9
  int v20; // edx
  bool v21; // zf
  int v22; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v2 = 0LL;
  if ( (_DWORD)dword_140D06884 )
  {
    v3 = qword_140D088C0;
    v4 = a1 + 128;
    v5 = (unsigned int)dword_140D06884;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = 0;
      v7 = *v3;
      while ( 1 )
      {
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v8 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v14 = *(_DWORD *)(v8 + 24);
            *(_DWORD *)(v8 + 24) = v14 + 1;
            if ( v14 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v13 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v15 = *(_DWORD *)(v13 + 24) - 1;
            *(_DWORD *)(v13 + 24) = v15;
            if ( !v15 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v22);
        while ( *(_QWORD *)(v7 + 48) );
      }
      v2 += *(_QWORD *)(v4 + 56);
      if ( (*(_BYTE *)(v4 + 112) & 1) != 0 )
        v2 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v4 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v9 = KeGetCurrentPrcb();
      v10 = *((_QWORD *)v9 + 4375);
      if ( v10 )
      {
        if ( *((_BYTE *)v9 + 32) <= 1u )
        {
          v16 = *(_DWORD *)(v10 + 24) - 1;
          *(_DWORD *)(v10 + 24) = v16;
          if ( !v16 )
            sub_140418E4C(v9);
        }
      }
      ++v3;
      v4 += 424LL;
      --v5;
    }
    while ( v5 );
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(v18);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}

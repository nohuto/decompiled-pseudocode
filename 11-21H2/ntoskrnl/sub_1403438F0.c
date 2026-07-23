/*
 * XREFs of sub_1403438F0 @ 0x1403438F0
 * Callers:
 *     sub_14024A468 @ 0x14024A468 (sub_14024A468.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     sub_14035D3E0 @ 0x14035D3E0 (sub_14035D3E0.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403438F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // r14d
  char v7; // r12
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 v11; // r15
  struct _KPRCB *v12; // rdi
  __int64 v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  bool v26; // zf
  int v27; // [rsp+60h] [rbp+8h] BYREF
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF

  result = (__int64)&unk_140D32B00;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &unk_140D32B00 )
  {
    v7 = 0;
    v28 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = (unsigned __int8)v28 - 1LL;
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a2 = (v9 << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) > 0 && *(char *)(a1 + 195) < v5 )
    {
      v11 = *(_QWORD *)(a1 + 72);
      v12 = KeGetCurrentPrcb();
      v27 = 0;
      v13 = *((_QWORD *)v12 + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)v12 + 32) <= 1u )
        {
          v19 = *(_DWORD *)(v13 + 24);
          *(_DWORD *)(v13 + 24) = v19 + 1;
          if ( v19 == -1 )
LABEL_26:
            sub_140418E4C(v12);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        v17 = *((_QWORD *)v12 + 4375);
        if ( v17 )
        {
          if ( *((_BYTE *)v12 + 32) <= 1u )
          {
            v20 = *(_DWORD *)(v17 + 24) - 1;
            *(_DWORD *)(v17 + 24) = v20;
            if ( !v20 )
              sub_140418E4C(v12);
          }
        }
        do
          sub_1402F32E0(&v27, a2, a3, a4);
        while ( *(_QWORD *)(a1 + 64) );
        v18 = *((_QWORD *)v12 + 4375);
        if ( v18 )
        {
          if ( *((_BYTE *)v12 + 32) <= 1u )
          {
            v21 = *(_DWORD *)(v18 + 24);
            *(_DWORD *)(v18 + 24) = v21 + 1;
            if ( v21 == -1 )
              goto LABEL_26;
          }
        }
      }
      v14 = *(char *)(a1 + 195);
      if ( *(char *)(a1 + 195) > 0 && v14 < v5 )
      {
        v15 = *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 5);
        *(_BYTE *)(a1 + 564) += 16 * (v5 - v14);
        v7 = 1;
        sub_140344A30(a1, &v28, (unsigned int)(char)v5);
        v16 = *(_QWORD *)(a1 + 32);
        if ( v11 > v16 || v16 - v11 < v15 )
        {
          *(_QWORD *)(a1 + 32) = v15 + v11;
          sub_140224100(a1);
          return sub_140344800(CurrentPrcb, &v28, CurrentIrql);
        }
      }
      sub_140224100(a1);
      if ( v7 )
        return sub_140344800(CurrentPrcb, &v28, CurrentIrql);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = *((_QWORD *)v23 + 4375);
          v25 = ~(unsigned __int16)(v9 << (CurrentIrql + 1));
          v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v26 )
            sub_140418E4C(v23);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

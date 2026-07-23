/*
 * XREFs of sub_140570394 @ 0x140570394
 * Callers:
 *     sub_14056FB90 @ 0x14056FB90 (sub_14056FB90.c)
 *     sub_14056FE5C @ 0x14056FE5C (sub_14056FE5C.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056FA60 @ 0x14056FA60 (sub_14056FA60.c)
 */

__int64 __fastcall sub_140570394(__int64 a1, __int64 a2, __int64 a3, struct _KPRCB *CurrentPrcb)
{
  _BYTE *v4; // r14
  void *v5; // r11
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  size_t v16; // r8
  char v17; // al
  __int64 v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  int v22; // eax

  v4 = CurrentPrcb;
  v5 = (void *)a3;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1408LL) )
    return 3221225659LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    CurrentPrcb = (struct _KPRCB *)*((_QWORD *)KeGetCurrentPrcb() + 4375);
    a3 = (-1 << (CurrentIrql + 1)) & 4u | *((_DWORD *)CurrentPrcb + 5);
    *((_DWORD *)CurrentPrcb + 5) = a3;
  }
  if ( (a2 & *(_QWORD *)(a1 + 1064)) != 0 )
  {
    v15 = *(_DWORD *)(a1 + 116);
    if ( (v15 & 0x800000) != 0 )
    {
      v17 = 0;
    }
    else
    {
      v16 = (unsigned int)dword_140D06A0C;
      *(_DWORD *)(a1 + 116) = v15 | 0x800000;
      *(_QWORD *)(a1 + 96) = v5;
      memset(v5, 0, v16);
      v17 = 1;
    }
    *v4 = v17;
    *(_QWORD *)(a1 + 592) |= a2;
    v18 = ~a2;
    *(_QWORD *)(a1 + 1064) &= v18;
    v19 = v18 & __readmsr(0x1C4u);
    v20 = HIDWORD(v19);
    __writemsr(0x1C4u, v19);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a3 = *((_QWORD *)CurrentPrcb + 4375);
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v22 & *(_DWORD *)(a3 + 20)) == 0;
          v20 = (unsigned int)v22 & *(_DWORD *)(a3 + 20);
          *(_DWORD *)(a3 + 20) = v20;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    sub_14056FA60((_QWORD *)a1, v20, a3, (__int64)CurrentPrcb);
  }
  else
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          v11 = KeGetCurrentPrcb();
          v12 = *((_QWORD *)v11 + 4375);
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)v11);
        }
      }
    }
    __writecr8(CurrentIrql);
    *v4 = 0;
  }
  return 0LL;
}

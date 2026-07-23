/*
 * XREFs of sub_14062F694 @ 0x14062F694
 * Callers:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 * Callees:
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14062F694(__int64 a1, __int16 a2, int a3, __int64 a4, __int64 *a5, int a6)
{
  int v8; // r15d
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v12; // cl
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  __int64 v21; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+70h] [rbp+8h]

  v25 = *(_QWORD *)(a1 + 1016);
  v8 = *(_DWORD *)(v25 + 20);
  v9 = 8 * (unsigned __int8)v8 + 16;
  v10 = v9 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && v12 <= 0xFu )
      {
        v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v13 + 20) |= (-1 << (v12 + 1)) & 4;
      }
    }
  }
  v14 = sub_1402ABBF0(a1, v10, a4, a5, a6);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 8) = *a5;
    *(_WORD *)(v14 + 4) = v10;
    *(_WORD *)(v14 + 6) = a2;
    *(_DWORD *)v14 = (unsigned __int8)a6 | ((unsigned __int8)v8 << 8) | 0xC0110000;
    v21 = *(_QWORD *)(v25 + 8LL * HIDWORD(KeGetPcr()[1].LockArray) + 24);
    if ( v21 )
      sub_14042A5E0(v21, v14 + 16);
    else
      memset((void *)(v14 + 16), 0, 8LL * (unsigned __int8)v8);
    if ( CurrentIrql < 2u )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v19 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    return v15 + v9;
  }
  else
  {
    if ( CurrentIrql < 2u )
    {
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C((__int64)v16);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}

/*
 * XREFs of sub_140513F84 @ 0x140513F84
 * Callers:
 *     sub_140458184 @ 0x140458184 (sub_140458184.c)
 *     sub_140517AD4 @ 0x140517AD4 (sub_140517AD4.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140456CC6 @ 0x140456CC6 (sub_140456CC6.c)
 *     sub_140457742 @ 0x140457742 (sub_140457742.c)
 */

void __fastcall sub_140513F84(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r12d
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rcx
  char v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int i; // edx
  __int64 v12; // r9
  _QWORD *j; // r13
  unsigned int v14; // ebx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  _OWORD v20[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  unsigned int v22; // [rsp+C0h] [rbp+18h]

  v22 = a3;
  v4 = a4;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v7 = a3 & 0xFFF;
  v8 = 0;
  v9 = (v7 + (unsigned __int64)a4 + 4095) >> 12;
  if ( CurrentIrql <= 2u )
  {
    if ( CurrentIrql < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v7 = (unsigned int)CurrentIrql + 1;
        v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v8 = 1;
    }
    sub_140456CC6(v7, a2, v9, (__int64)v20);
    a3 = v22;
  }
  else
  {
    v10 = (__int64)a2;
    for ( i = 0; i < (unsigned int)v9; ++i )
    {
      if ( (*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF06uLL, 0LL, 0LL);
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  for ( j = a2; v4; v4 -= v14 )
  {
    v14 = v4;
    if ( v4 >= 4096 - a3 )
      v14 = 4096 - a3;
    memset((void *)((j[6] & 0xFFFFFFFFFFFFF000uLL) + a3), 0, v14);
    j = (_QWORD *)j[1];
    a3 = 0;
  }
  if ( CurrentIrql <= 2u )
    sub_140457742(v10, (__int64)a2, v9, (__int64)v20);
  if ( v8 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v19 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}

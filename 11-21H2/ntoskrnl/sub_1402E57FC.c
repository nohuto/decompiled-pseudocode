/*
 * XREFs of sub_1402E57FC @ 0x1402E57FC
 * Callers:
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_1407084B0 @ 0x1407084B0 (sub_1407084B0.c)
 * Callees:
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1402E6738 @ 0x1402E6738 (sub_1402E6738.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_1402E57FC(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rdi
  char v6; // bl
  unsigned __int8 v7; // al
  char v8; // bl
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  if ( !sub_140329630(a1, 1LL, 1LL) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  sub_140339C20(*((_QWORD *)CurrentThread + 23) + 1664LL, a2, v16);
  v5 = sub_1402E6738(a1, v16);
  if ( !v5 )
  {
    sub_14024AA58(a1, 1uLL, 1);
    return -1LL;
  }
  v6 = sub_1402E670C(CurrentThread);
  v7 = sub_1402F2700(v5);
  v8 = *(_BYTE *)(v5 + 35) ^ v6;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_BYTE *)(v5 + 35) ^= v8 & 7;
  v9 = v7;
  *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
  *(_WORD *)(v5 + 32) = 1;
  *(_QWORD *)(v5 + 16) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return 0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4);
}

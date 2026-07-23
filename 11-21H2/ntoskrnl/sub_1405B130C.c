/*
 * XREFs of sub_1405B130C @ 0x1405B130C
 * Callers:
 *     sub_1402EB59C @ 0x1402EB59C (sub_1402EB59C.c)
 * Callees:
 *     sub_14023C030 @ 0x14023C030 (sub_14023C030.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B350C @ 0x1405B350C (sub_1405B350C.c)
 */

__int64 __fastcall sub_1405B130C(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  int v17; // eax
  _BYTE v18[112]; // [rsp+20h] [rbp-98h] BYREF

  if ( *(_QWORD *)(a1 + 80) == 0x3FFFFFFFFFLL )
    return -1LL;
  memset(v18, 0, 0x68uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = -1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = sub_1405B350C(a1 + 64, v18);
  v7 = v6;
  if ( v6 == -1 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
  }
  else
  {
    v13 = 48 * v6 - 0x220000000000LL;
    sub_140326870(v13, (v18[0] != 0) + 1);
    sub_140338D00(a1 + 64, (__int64)v18);
    sub_1403941B0(v13, 2048);
    sub_14023C030(v13, a1);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = *((_QWORD *)v15 + 4375);
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v12 )
            sub_140418E4C((__int64)v15);
        }
      }
    }
    v4 = v7;
  }
  __writecr8(CurrentIrql);
  return v4;
}

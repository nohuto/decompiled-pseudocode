/*
 * XREFs of sub_1403AD40C @ 0x1403AD40C
 * Callers:
 *     sub_1402F3AD0 @ 0x1402F3AD0 (sub_1402F3AD0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 * Callees:
 *     sub_1402F3A88 @ 0x1402F3A88 (sub_1402F3A88.c)
 *     sub_14039DB1C @ 0x14039DB1C (sub_14039DB1C.c)
 *     sub_14039E48C @ 0x14039E48C (sub_14039E48C.c)
 *     sub_1403A22F0 @ 0x1403A22F0 (sub_1403A22F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F6DE @ 0x14045F6DE (sub_14045F6DE.c)
 *     sub_14056F6CC @ 0x14056F6CC (sub_14056F6CC.c)
 *     sub_14063F75C @ 0x14063F75C (sub_14063F75C.c)
 */

char __fastcall sub_1403AD40C(unsigned int a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  char result; // al
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // si
  char v11; // bl
  unsigned __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v17; // r10
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  char v23[8]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v24; // [rsp+48h] [rbp-150h] BYREF
  _BYTE v25[272]; // [rsp+50h] [rbp-148h] BYREF

  v24 = 0LL;
  v5 = a1;
  memset(v25, 0, 0x108uLL);
  v6 = *a2;
  v23[0] = 0;
  result = sub_1402F3A88(v6, a3);
  v10 = result;
  v11 = (dword_140D0689C & 0x800000) != 0 && (dword_140D0689C & 2) != 0;
  if ( !result && !v11
    || (sub_14039E48C(a3, (unsigned __int64 *)&v24, v23),
        sub_14056F6CC(v25),
        LOBYTE(v14) = v23[0],
        LOBYTE(v15) = v10,
        (result = sub_14039DB1C(v24, (__int64)v25, v14, v15, v11, v5, (__int64)a2)) == 0) )
  {
    if ( (_DWORD)v5 )
    {
      v12 = a2;
      v13 = v5;
      do
      {
        result = sub_1403A22F0(*v12++, a3, v8, v9);
        --v13;
      }
      while ( v13 );
    }
  }
  if ( byte_140D05002 )
    result = sub_14045F6DE((unsigned int)v5, a2, a3);
  if ( dword_140D01470 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    sub_14063F75C((unsigned int)v5, a2, a3);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v22 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

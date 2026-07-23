/*
 * XREFs of sub_1403AD304 @ 0x1403AD304
 * Callers:
 *     sub_1403AD0A8 @ 0x1403AD0A8 (sub_1403AD0A8.c)
 *     sub_1403AD16C @ 0x1403AD16C (sub_1403AD16C.c)
 *     sub_140590E20 @ 0x140590E20 (sub_140590E20.c)
 *     sub_1405A4C68 @ 0x1405A4C68 (sub_1405A4C68.c)
 *     sub_1405A4FB8 @ 0x1405A4FB8 (sub_1405A4FB8.c)
 *     sub_1405A6AE4 @ 0x1405A6AE4 (sub_1405A6AE4.c)
 *     sub_140A51570 @ 0x140A51570 (sub_140A51570.c)
 * Callees:
 *     sub_1402F3A88 @ 0x1402F3A88 (sub_1402F3A88.c)
 *     sub_14039DB1C @ 0x14039DB1C (sub_14039DB1C.c)
 *     sub_14039E48C @ 0x14039E48C (sub_14039E48C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F6DE @ 0x14045F6DE (sub_14045F6DE.c)
 *     sub_14056F6CC @ 0x14056F6CC (sub_14056F6CC.c)
 *     sub_14063F75C @ 0x14063F75C (sub_14063F75C.c)
 */

char __fastcall sub_1403AD304(unsigned __int64 a1, unsigned int a2)
{
  bool v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // r14
  char v9; // di
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+68h] [rbp-A0h]
  _BYTE v28[272]; // [rsp+78h] [rbp-90h] BYREF

  v25 = 0LL;
  memset(v28, 0, 0x108uLL);
  LOBYTE(v23) = 0;
  v4 = sub_1402F3A88(a1, a2);
  v8 = v4;
  v9 = (dword_140D0689C & 0x800000) != 0 && (dword_140D0689C & 2) != 0;
  if ( !v4 && !v9
    || (sub_14039E48C(a2, (unsigned __int64 *)&v25, (char *)&v23),
        sub_14056F6CC(v28),
        LOBYTE(v12) = v23,
        LOBYTE(v13) = v8,
        v26 = a1 & 0xFFFFFFFFFFFFF000uLL,
        LOBYTE(_RAX) = sub_14039DB1C(v25, (__int64)v28, v12, v13, v9, 1, (__int64)&v26),
        !(_BYTE)_RAX) )
  {
    LODWORD(_RAX) = 1 << a2;
    if ( ((1 << a2) & 0xA) != 0 )
    {
      if ( byte_140D0688A )
      {
        _RAX = KeGetCurrentThread();
        v14 = *((_QWORD *)_RAX + 23);
        if ( !*(_BYTE *)(v14 + 912) )
        {
          if ( (byte_140D0688A & 2) != 0 )
          {
            *(_QWORD *)&v27 = 1LL;
            *((_QWORD *)&v27 + 1) = a1;
            LODWORD(_RAX) = 0;
            __asm { invpcid eax, [rsp+1B0h+var_158+8] }
          }
          else
          {
            LOBYTE(_RAX) = sub_140420AD0(v14, v5, v6, v7);
          }
        }
      }
    }
    __invlpg((void *)a1);
  }
  v11 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( byte_140D05002 )
  {
    v24 = v11;
    LOBYTE(_RAX) = sub_14045F6DE(1LL, &v24, a2);
  }
  if ( dword_140D01470 )
  {
    v24 = v11;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v16 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    sub_14063F75C(1LL, &v24, a2);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    LOBYTE(_RAX) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return (char)_RAX;
}

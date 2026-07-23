/*
 * XREFs of sub_14033D860 @ 0x14033D860
 * Callers:
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     MmSetAddressRangeModified @ 0x1402535C0 (MmSetAddressRangeModified.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402D0490 @ 0x1402D0490 (sub_1402D0490.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403295C0 @ 0x1403295C0 (sub_1403295C0.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14033F3EC @ 0x14033F3EC (sub_14033F3EC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14033D860(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v4; // edi
  __int64 *v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 CurrentIrql; // r10
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r11
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  unsigned __int8 v29[4]; // [rsp+20h] [rbp-138h] BYREF
  int v30; // [rsp+24h] [rbp-134h]
  int v31; // [rsp+28h] [rbp-130h] BYREF
  int v32; // [rsp+2Ch] [rbp-12Ch]
  int v33; // [rsp+30h] [rbp-128h]
  __int64 v34; // [rsp+38h] [rbp-120h]
  __int64 v35; // [rsp+40h] [rbp-118h]
  unsigned __int64 v36; // [rsp+48h] [rbp-110h]
  __int64 v37; // [rsp+50h] [rbp-108h]
  int v38; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v39; // [rsp+64h] [rbp-F4h]
  __int16 v40; // [rsp+66h] [rbp-F2h]
  __int64 v41; // [rsp+68h] [rbp-F0h]
  __int64 v42; // [rsp+70h] [rbp-E8h]
  __int64 v43; // [rsp+78h] [rbp-E0h]
  _BYTE v44[152]; // [rsp+80h] [rbp-D8h] BYREF

  v2 = a2 - 1;
  v29[0] = 0;
  v40 = 0;
  memset(v44, 0, sizeof(v44));
  LOBYTE(v30) = 0;
  v32 = sub_14032BCC0(4u);
  v41 = 20LL;
  v4 = v32;
  v38 = 0;
  v39 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = (((a1 + v2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v36 = sub_1402D0490((__int64)&unk_140C59200, (unsigned __int64)v5, v29);
  v9 = *(_QWORD *)(sub_1403295C0(v7) + 24);
  v11 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v9 & 1) == 0 )
    v11 = (__int64 *)v9;
  v12 = 2LL;
  v13 = *v11;
  v14 = 0xFFFFFFFFFFLL;
  v37 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v13 + 60) & 0x3FF)) + 17024LL;
  do
  {
    v15 = *v5;
    if ( (*v5 & 1) != 0 )
    {
      v33 = 0;
      v16 = 0LL;
      v17 = (v15 >> 12) & 0xFFFFFFFFFFLL;
      v18 = 48 * v17 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      v34 = CurrentIrql;
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v14 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        v12 = (unsigned int)v14 | *(_DWORD *)(v10 + 20);
        *(_DWORD *)(v10 + 20) = v12;
      }
      v31 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v31, v14, v12, v10);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
        LOBYTE(CurrentIrql) = v34;
      }
      v20 = (*(_BYTE *)(v18 + 34) & 0x10) == 0;
      v21 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL));
      v35 = v21;
      if ( v20 || (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 )
      {
        v22 = sub_14033C2A0(v18);
        LOBYTE(CurrentIrql) = v34;
        v16 = v22;
        v21 = v35;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v24 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
            v20 = (v26 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v26;
            if ( v20 )
            {
              sub_140418E4C(CurrentPrcb);
              LOBYTE(CurrentIrql) = v34;
            }
            v21 = v35;
          }
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v16 )
        sub_1402E20D0(v21, v16, 0);
      v4 = v32;
      if ( v32 != 2 || (v15 & 0x800) == 0 )
      {
        if ( (v15 & 0x42) == 0 )
          goto LABEL_17;
        sub_14033DBC0(v5, v15 & 0xFFFFFFFFFFFFFFBDuLL);
        LOBYTE(v30) = 1;
LABEL_15:
        sub_1402CF280((__int64)&v38, v7, 1LL, 0);
        goto LABEL_17;
      }
      v8 = (v17 << 12) | v8 & 0xFFF0000000000FFFuLL;
      sub_14033DBC0(v5, v8);
      if ( ((dword_140D06880 & 0x100) != 0 || (dword_140D06880 & 0x200) != 0) && !(unsigned int)sub_14033F3EC(v15, v8) )
        v27 = v33;
      else
        v27 = 1;
      v28 = (unsigned __int8)v30;
      if ( (v15 & 0x42) != 0 )
        v28 = 1;
      v30 = v28;
      if ( v27 )
        goto LABEL_15;
    }
    else if ( v4 == 2 && (v15 & 8) == 0 )
    {
      *v5 = v15 | 8;
    }
LABEL_17:
    ++v5;
    v7 += 4096LL;
    v14 = 0xFFFFFFFFFFLL;
    v12 = 2LL;
  }
  while ( (unsigned __int64)v5 <= v6 );
  sub_14032F1B0((__int64)&v38);
  sub_14020D8D0(v37, v36);
  sub_1402B0CE0(v37, v29[0]);
  return (unsigned __int8)v30;
}

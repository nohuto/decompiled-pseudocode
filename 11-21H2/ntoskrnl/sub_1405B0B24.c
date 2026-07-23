/*
 * XREFs of sub_1405B0B24 @ 0x1405B0B24
 * Callers:
 *     sub_1405B1974 @ 0x1405B1974 (sub_1405B1974.c)
 * Callees:
 *     sub_14023C030 @ 0x14023C030 (sub_14023C030.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_14026CCC0 @ 0x14026CCC0 (sub_14026CCC0.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402EB8BC @ 0x1402EB8BC (sub_1402EB8BC.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1404192EC @ 0x1404192EC (sub_1404192EC.c)
 *     sub_1405B19C8 @ 0x1405B19C8 (sub_1405B19C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_1405B0B24(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  ULONG_PTR *v8; // r12
  int v9; // r14d
  unsigned int v10; // ebp
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v21; // r11
  int v22; // eax
  bool v23; // zf
  signed __int32 v24[8]; // [rsp+0h] [rbp-98h] BYREF
  int v25; // [rsp+B8h] [rbp+20h] BYREF

  if ( !(unsigned int)sub_1405B19C8(a1) )
  {
    v6 = sub_1402828F0(64, 0x90uLL, 0x6553694Du);
    v7 = v6;
    if ( v6 )
    {
      v6[5] = a1;
      v6[7] = v6 + 8;
      v8 = v6 + 3;
      *((_DWORD *)v6 + 12) = 512;
      v9 = a3 & 0x40;
      *((_DWORD *)v6 + 33) = 512;
      v10 = v9 != 0;
      if ( (a3 & 0x40) == 0 )
        a3 |= 0x40u;
      do
      {
        if ( (int)sub_140277D10(
                    a2,
                    0LL,
                    qword_140C50840,
                    512LL,
                    0,
                    0x200uLL,
                    1u,
                    *(_DWORD *)(a1 + 52),
                    0x80000000,
                    a3 | 0x40000001u,
                    0,
                    0LL,
                    (__int64 *)v8) >= 0 )
        {
          v12 = *v8 >> 9;
          v7[4] = *v8 + 511;
          sub_14026CCC0((__int64)&unk_140C58DD8, v12, 1uLL);
          v16 = 48 * *v8 - 0x220000000000LL;
          v17 = 48LL * v7[4] - 0x220000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            v13 = (-1LL << (CurrentIrql + 1)) & 4;
            v14 = (unsigned int)v13 | *(_DWORD *)(v15 + 20);
            *(_DWORD *)(v15 + 20) = v14;
          }
          for ( ; v16 <= v17; v16 += 48LL )
          {
            v25 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v25, v13, v14, v15);
              while ( *(__int64 *)(v16 + 24) < 0 );
            }
            _InterlockedOr(v24, 0);
            sub_14033C33C(v16, dword_140D31080, 1);
            *(_WORD *)(v16 + 32) = 0;
            sub_14023C030(v16, a1);
            if ( *(_DWORD *)(a1 + 48) <= 3u )
            {
              sub_14033C300(v16, 3);
              sub_140268998(v16);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v19 = KeGetCurrentIrql();
              if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v21 = *((_QWORD *)CurrentPrcb + 4375);
                v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
                *(_DWORD *)(v21 + 20) &= v22;
                if ( v23 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          sub_1402EB8BC(a1, *v8, 512LL, 1);
          return v7;
        }
        a3 &= ~0x40u;
        ++v10;
      }
      while ( v10 < 2 );
      ExFreePoolWithTag(v7, 0);
      if ( v9 )
        return 0LL;
    }
    *(_QWORD *)(a1 + 160) = sub_1404192EC();
  }
  return 0LL;
}

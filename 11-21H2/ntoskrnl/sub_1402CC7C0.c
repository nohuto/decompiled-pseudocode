/*
 * XREFs of sub_1402CC7C0 @ 0x1402CC7C0
 * Callers:
 *     sub_1402003C0 @ 0x1402003C0 (sub_1402003C0.c)
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 *     sub_1402170F4 @ 0x1402170F4 (sub_1402170F4.c)
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_140221FD0 @ 0x140221FD0 (sub_140221FD0.c)
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140235AAC @ 0x140235AAC (sub_140235AAC.c)
 *     sub_140268AB0 @ 0x140268AB0 (sub_140268AB0.c)
 *     sub_14026BE94 @ 0x14026BE94 (sub_14026BE94.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_14028B8B0 @ 0x14028B8B0 (sub_14028B8B0.c)
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14029BC90 @ 0x14029BC90 (sub_14029BC90.c)
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_14033F8E0 @ 0x14033F8E0 (sub_14033F8E0.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_14036C9FC @ 0x14036C9FC (sub_14036C9FC.c)
 *     sub_1403853B0 @ 0x1403853B0 (sub_1403853B0.c)
 *     sub_14038F830 @ 0x14038F830 (sub_14038F830.c)
 *     sub_1403C9590 @ 0x1403C9590 (sub_1403C9590.c)
 *     sub_14045D34E @ 0x14045D34E (sub_14045D34E.c)
 *     sub_140581434 @ 0x140581434 (sub_140581434.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_1405A02B8 @ 0x1405A02B8 (sub_1405A02B8.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405A7A98 @ 0x1405A7A98 (sub_1405A7A98.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405BACCC @ 0x1405BACCC (sub_1405BACCC.c)
 * Callees:
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 */

unsigned __int64 __fastcall sub_1402CC7C0(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v5; // edx
  int v6; // r8d
  int v7; // eax
  unsigned __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 *v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // r10
  __int64 v15; // r9

  if ( (a3 & 0x20000000) != 0 )
  {
    v5 = 33554433;
    v6 = 1;
  }
  else
  {
    v5 = 33554436;
    v6 = 4;
  }
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
    {
      v6 = v5;
LABEL_19:
      v6 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(48 * a1 - 0x220000000000LL + 34) >> 6;
  }
  if ( v7 && v7 != 3 )
  {
    if ( v7 != 2 )
      goto LABEL_8;
    goto LABEL_19;
  }
  v6 |= 8u;
LABEL_8:
  v8 = sub_1402CBD10(0LL, a1, v6 | 0xA0000000);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v15 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = *((_QWORD *)CurrentPrcb + 4199);
  if ( !v10
    || (v11 = sub_1402C6260((unsigned __int64 *)(v10 + 12448), 3u, 1LL, 0),
        v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        *(_QWORD *)(v10 + 12344) = v12,
        !v11) )
  {
    v11 = (*((_QWORD *)CurrentPrcb + 4272) & 0xFFFFFFFFFFFFF000uLL)
        + ((*((_QWORD *)CurrentPrcb + 4272) & 0xFFFLL) << 12);
    v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  result = v11;
  *v12 = v8;
  return result;
}

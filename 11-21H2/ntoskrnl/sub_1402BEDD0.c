/*
 * XREFs of sub_1402BEDD0 @ 0x1402BEDD0
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
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_1402C2AD0 @ 0x1402C2AD0 (sub_1402C2AD0.c)
 *     sub_1402CBAF0 @ 0x1402CBAF0 (sub_1402CBAF0.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
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
 *     sub_1403D3284 @ 0x1403D3284 (sub_1403D3284.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402BEDD0(unsigned __int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v4; // rcx
  unsigned int v5; // r9d
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 result; // rax
  struct _KPRCB *v9; // r10
  __int64 v10; // r9
  bool v11; // zf

  v2 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = 0;
  v6 = 0LL;
  v7 = *((_QWORD *)CurrentPrcb + 4199);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 12344) = 0LL;
  }
  else
  {
    v6 = *((_QWORD *)CurrentPrcb + 4272) & 0xFFFFFFFFFFFFF000uLL;
    v5 = (*((_QWORD *)CurrentPrcb + 4272) & 0xFFF) + 1;
  }
  result = 0LL;
  *v4 = 0LL;
  if ( !v7 )
  {
    if ( v5 == 64 )
    {
      sub_1403D3284();
      v5 = 0;
    }
    result = v6 | v5;
    *((_QWORD *)CurrentPrcb + 4272) = result;
  }
  if ( (_BYTE)v2 != 17 )
  {
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          v10 = *((_QWORD *)v9 + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= result;
          if ( v11 )
            result = sub_140418E4C(v9);
        }
      }
    }
    __writecr8(v2);
  }
  return result;
}

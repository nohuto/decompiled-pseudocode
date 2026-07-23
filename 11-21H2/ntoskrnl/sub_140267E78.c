/*
 * XREFs of sub_140267E78 @ 0x140267E78
 * Callers:
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_14024EA68 @ 0x14024EA68 (sub_14024EA68.c)
 *     sub_140266074 @ 0x140266074 (sub_140266074.c)
 *     sub_14026BE94 @ 0x14026BE94 (sub_14026BE94.c)
 *     sub_14026C038 @ 0x14026C038 (sub_14026C038.c)
 *     sub_1402724C0 @ 0x1402724C0 (sub_1402724C0.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402C5D00 @ 0x1402C5D00 (sub_1402C5D00.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_1402CC0F0 @ 0x1402CC0F0 (sub_1402CC0F0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14033A6B0 @ 0x14033A6B0 (sub_14033A6B0.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14033C880 @ 0x14033C880 (sub_14033C880.c)
 *     sub_1403C3290 @ 0x1403C3290 (sub_1403C3290.c)
 *     sub_1405AB148 @ 0x1405AB148 (sub_1405AB148.c)
 *     sub_1405B85F8 @ 0x1405B85F8 (sub_1405B85F8.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_140B088E4 @ 0x140B088E4 (sub_140B088E4.c)
 * Callees:
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_140268A48 @ 0x140268A48 (sub_140268A48.c)
 *     sub_140268AB0 @ 0x140268AB0 (sub_140268AB0.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140267E78(__int64 a1, unsigned int a2, char a3)
{
  char v3; // si
  unsigned __int8 v6; // bl
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 v12; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  signed __int32 v23[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C52A08 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = sub_1402F2700(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (unsigned int)sub_140268A48(0LL) )
  {
    sub_140268998(a1, v8);
    LOBYTE(v8) = *(_BYTE *)(a1 + 34);
    v3 = -5;
  }
  LOBYTE(v10) = (_BYTE)a2 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | v8 & 0x3F;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & 2) != 0
      || (v10 = (*(_QWORD *)(a1 + 24) >> 59) & 7LL, ((*(_QWORD *)(a1 + 24) >> 59) & 7) == 0)
      || (_InterlockedOr(v23, 0), v9 = ((_BYTE)dword_140D31080 - (_BYTE)v10) & 7, (unsigned int)v9 <= 2)
      && ((v10 & 1) != 0 || (unsigned int)v9 < 2) )
    {
      LOBYTE(v10) = sub_14026A230(v9, 2LL);
    }
    if ( v7 == 1 )
    {
      ++dword_140C50748;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      sub_140268AB0(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 1LL, a2);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      LOBYTE(v10) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && v6 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = *((_QWORD *)v19 + 4375);
          v21 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v17 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v17 )
            sub_140418E4C(v19);
        }
      }
    }
    LOBYTE(v10) = v6;
    __writecr8(v6);
  }
  return v10;
}

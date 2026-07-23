/*
 * XREFs of sub_14023EA5C @ 0x14023EA5C
 * Callers:
 *     MmFlushImageSection @ 0x14023E840 (MmFlushImageSection.c)
 *     sub_14023E9A0 @ 0x14023E9A0 (sub_14023E9A0.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_140287A2C @ 0x140287A2C (sub_140287A2C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_1403885EC @ 0x1403885EC (sub_1403885EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14023EA5C(__int64 a1, unsigned __int8 a2, char a3)
{
  bool v4; // zf
  unsigned __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r11
  __int64 v13; // r9
  int v14; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  int v21; // [rsp+2Ch] [rbp-24h]
  __int16 v22; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+32h] [rbp-1Eh]
  char v24; // [rsp+33h] [rbp-1Dh]
  int v25; // [rsp+34h] [rbp-1Ch]
  _QWORD v26[3]; // [rsp+38h] [rbp-18h] BYREF

  v21 = 0;
  v4 = *(_QWORD *)(a1 + 24) == 0LL;
  v6 = a2;
  v24 = 0;
  if ( !v4 || *(_QWORD *)(a1 + 40) || (v8 = *(_DWORD *)(a1 + 56), (v8 & 2) != 0) )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(a1 + 56) |= 0x40000u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v4 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v4 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    return 0;
  }
  else if ( (v8 & 1) != 0 )
  {
    v25 = 0;
    v26[1] = v26;
    v26[0] = v26;
    v19 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v19;
    v20 = 1;
    v22 = 263;
    v23 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = *((_QWORD *)v12 + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v4 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v4 )
            sub_140418E4C(v12);
        }
      }
    }
    __writecr8(v6);
    sub_140217454((__int64)&v22, 0x13u);
    return 1;
  }
  else
  {
    sub_140287A2C(a1);
    LOBYTE(v9) = v6;
    *(_QWORD *)(a1 + 40) = 1LL;
    LOBYTE(v10) = (a3 & 4) != 0;
    return sub_1403885EC(a1, v9, v10);
  }
}

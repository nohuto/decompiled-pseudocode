/*
 * XREFs of sub_140268CA8 @ 0x140268CA8
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_14025C460 @ 0x14025C460 (sub_14025C460.c)
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     sub_140266C0C @ 0x140266C0C (sub_140266C0C.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403CF728 @ 0x1403CF728 (sub_1403CF728.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_140268CA8(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  signed __int64 v21; // rax
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  char v24; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  signed __int32 v30[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 17504);
  v5 = 0x4000LL;
  if ( *(_QWORD *)(a1 + 16896) >> 5 > 0x4000uLL )
    v5 = *(_QWORD *)(a1 + 16896) >> 5;
  v8 = *(_QWORD *)(a1 + 16896) >> 4;
  if ( v8 >= v5 )
    v8 = v5;
  v9 = *(_QWORD *)(a1 + 2496) + *(_QWORD *)(a1 + 2624);
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16600) + 2384LL);
  v12 = 20000LL;
  if ( v11 > 0x4E20 )
    v12 = v11;
  if ( v9 > v12 && v3 < v9 / 0xA )
    goto LABEL_9;
  if ( v3 >= v8 )
  {
    v10 = v8 >> 1;
LABEL_27:
    if ( !sub_140266C0C(a1) )
      v10 = -1LL;
    sub_14025C460(a1, v10);
    *(_QWORD *)(a1 + 840) = 0LL;
    *(_QWORD *)(a1 + 848) = 0LL;
    goto LABEL_9;
  }
  v11 = 15LL * (*(_QWORD *)(a1 + 848) >> 4);
  v19 = v11 + (v3 >> 4);
  *(_QWORD *)(a1 + 848) = v19;
  if ( v11 > v19 )
    goto LABEL_27;
  if ( v3 < 0x320 )
  {
    *(_QWORD *)(a1 + 840) = 0LL;
    goto LABEL_9;
  }
  v20 = *(_QWORD *)(a1 + 840);
  v21 = v19 <= v3 ? v19 - v3 + v20 : v3 + v20 - v19;
  v11 = v21 + v3;
  *(_QWORD *)(a1 + 840) = v21 + v3;
  if ( v21 > (__int64)(v21 + v3) )
    goto LABEL_27;
  v22 = v8 >> 1;
  v23 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v22 < 0x369D0369D0369DLL )
    v23 = 600 * v22;
  if ( (__int64)v11 >= v23 )
    goto LABEL_27;
LABEL_9:
  *(_QWORD *)(a1 + 856) = a2;
  if ( (a3 & 7) == 0 )
  {
    v13 = 0;
    if ( (*(_BYTE *)(a1 + 900) & 1) != 0 )
    {
      _InterlockedOr(v30, 0);
      if ( a2 > 0x4000
        || (LOBYTE(v11) = 1, (unsigned __int64)(sub_1402F5718(v11) - *(_QWORD *)(a1 + 888)) >= 0x47868C00) )
      {
        v13 = 1;
        *(_WORD *)(a1 + 900) &= ~1u;
      }
    }
    v14 = *(_DWORD *)(a1 + 16728);
    if ( v14 )
    {
      v15 = a1 + 16736;
      v16 = v14;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 204LL) & 0x40) == 0 )
        {
          v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17 + 232));
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_140D051CC;
          *(_DWORD *)(v17 + 136) = 4 * dword_140D051CC;
          if ( v13 )
          {
            v24 = *(_BYTE *)(v17 + 207);
            if ( (v24 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v24 & 0xFE;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 232));
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v27 = *((_QWORD *)CurrentPrcb + 4375);
                v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
                v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
                *(_DWORD *)(v27 + 20) &= v28;
                if ( v29 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v18);
        }
        v15 += 8LL;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
      sub_1403CF728(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1176) )
    sub_1402664E8(a1);
}

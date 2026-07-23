/*
 * XREFs of sub_14059CCB4 @ 0x14059CCB4
 * Callers:
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 * Callees:
 *     sub_14025B8B0 @ 0x14025B8B0 (sub_14025B8B0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14059C6B4 @ 0x14059C6B4 (sub_14059C6B4.c)
 *     sub_14059C99C @ 0x14059C99C (sub_14059C99C.c)
 *     sub_1405B301C @ 0x1405B301C (sub_1405B301C.c)
 */

__int64 __fastcall sub_14059CCB4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  int v7; // r12d
  unsigned __int64 v8; // r14
  unsigned __int128 v9; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned int v15; // r9d
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx

  v2 = *(_QWORD *)(a1 + 248);
  v4 = 1LL;
  sub_14059C6B4(a1, 1);
  v6 = 0LL;
  v7 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  if ( *(_QWORD *)(a1 + 24) )
  {
    sub_14025B8B0(a2);
  }
  else
  {
    *(_BYTE *)(a1 + 206) |= 1u;
    v7 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
  *(_QWORD *)&v9 = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      *(_QWORD *)&v9 = KeGetCurrentIrql();
      if ( (unsigned __int8)v9 <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        *(_QWORD *)&v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v12 = ((unsigned int)v9 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v9;
        if ( v12 )
          *(_QWORD *)&v9 = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( v7 )
  {
    *(_QWORD *)&v9 = 2575857425LL;
    *a2 = 2575857425LL;
    v13 = *(_QWORD *)(v2 + 17496);
    v14 = *(_QWORD *)(v2 + 17256);
    if ( v14 > v13 )
      v14 = *(_QWORD *)(v2 + 17496);
    if ( (*(_BYTE *)(a1 + 204) & 0x10) == 0 )
    {
      v9 = v13 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      if ( v14 > (*((_QWORD *)&v9 + 1) & 0xFFFFFFFFFFFFFFF8uLL) && v13 < *(_QWORD *)(v2 + 16008) )
      {
        sub_1405B301C(v2);
LABEL_27:
        *(_QWORD *)&v9 = *(_QWORD *)(v2 + 17496);
        if ( (unsigned __int64)v9 < *(_QWORD *)(v2 + 16008) )
          *(_QWORD *)&v9 = sub_14059C99C(v2, v4, 6, 0);
        return v9;
      }
      if ( *(_QWORD *)(v2 + 17504) >= 0x1000uLL )
      {
        v15 = *(_DWORD *)(v2 + 16728);
        v16 = 0;
        if ( v15 )
        {
          v17 = v2 + 16736;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v17 + 204LL) & 0x50) == 0 )
            {
              if ( v6 + *(_QWORD *)(*(_QWORD *)v17 + 24LL) < v6 )
                break;
              v6 += *(_QWORD *)(*(_QWORD *)v17 + 24LL);
            }
            ++v16;
            v17 += 8LL;
          }
          while ( v16 < v15 );
        }
        v18 = *(_QWORD *)(v2 + 17504);
        if ( v18 > v6 )
        {
          v4 = v18 - v6;
          if ( v4 )
            goto LABEL_27;
        }
      }
    }
  }
  return v9;
}

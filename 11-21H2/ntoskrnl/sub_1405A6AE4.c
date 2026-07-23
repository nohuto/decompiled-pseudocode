/*
 * XREFs of sub_1405A6AE4 @ 0x1405A6AE4
 * Callers:
 *     sub_140577D00 @ 0x140577D00 (sub_140577D00.c)
 * Callees:
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1404619C0 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall sub_1405A6AE4(__int64 a1)
{
  unsigned __int64 v1; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int v5; // r14d
  unsigned __int64 v6; // r15
  volatile __int64 *v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx

  v1 = sub_1402CBD10(0LL, 0LL, -1610612732);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v1;
  __wbinvd();
  result = ExTryAcquireSpinLockSharedAtDpcLevel(&dword_140C55048);
  v5 = 0;
  if ( (_DWORD)result )
  {
    v6 = *((_QWORD *)CurrentPrcb + 4272) & 0xFFFFFFFFFFFFF000uLL;
    v7 = (volatile __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = _InterlockedExchange64(v7, 0LL);
    sub_1403AD304(v6, 0);
    v9 = qword_140D06950;
    if ( *(_DWORD *)qword_140D06950 )
    {
      while ( 1 )
      {
        v10 = v9[2 * v5 + 2];
        v11 = 48 * v10 - 0x220000000000LL;
        v12 = 48 * (v10 + v9[2 * v5 + 3]) - 0x220000000000LL;
        if ( v11 < v12 )
          break;
LABEL_17:
        v9 = qword_140D06950;
        if ( ++v5 >= *(_DWORD *)qword_140D06950 )
          goto LABEL_18;
      }
      while ( 1 )
      {
        if ( (*(_BYTE *)(v11 + 34) & 7) == 6 )
        {
          v13 = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
          if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v14 = (__int64)(v13 << 25) >> 16;
            if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              v15 = *(_QWORD *)(v11 + 40);
              if ( ((v15 >> 60) & 7) != 1
                && (v15 & 0x10000000000LL) == 0
                && (v15 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
                && (*(_BYTE *)(v11 + 34) & 0xC0) == 0x40 )
              {
                v3 ^= (v3 ^ (0xAAAAAAAAAAAAB000uLL * ((__int64)(v11 + 0x220000000000LL) >> 4))) & 0xFFFFFFFFFF000LL;
                _InterlockedExchange64(v7, v3);
                sub_1403AD304(v6, 0);
                v16 = v6;
                v17 = 64LL;
                do
                {
                  v16 += 64LL;
                  --v17;
                }
                while ( v17 );
                v18 = qword_140D06AE0;
                v19 = 2LL * *((unsigned int *)CurrentPrcb + 9);
                *((_DWORD *)CurrentPrcb + 8104) = 1;
                _InterlockedExchange64((volatile __int64 *)(v18 + 8 * v19 + 360), -1LL);
                if ( (*(_QWORD *)(v18 + 16LL * *(unsigned int *)(a1 + 36) + 360) & *((_QWORD *)CurrentPrcb + 25)) != 0LL )
                  break;
              }
            }
          }
        }
        v11 += 48LL;
        if ( v11 >= v12 )
          goto LABEL_17;
      }
    }
LABEL_18:
    _InterlockedExchange64(v7, v8);
    sub_1403AD304(v6, 0);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C55048);
    return 1LL;
  }
  return result;
}

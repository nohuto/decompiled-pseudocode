/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x14033D63C
 * Callers:
 *     MmFlushVirtualMemory @ 0x1407B4538 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  void *result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  char v11; // di
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v30; // [rsp+50h] [rbp-B0h]
  _QWORD v31[24]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0;
  v25 = 0;
  result = memset(v31, 0, 0xB8uLL);
  if ( !byte_140C65AE8 )
  {
    LODWORD(v31[0]) = 1;
    WORD2(v31[0]) = 0;
    v31[2] = 0LL;
    LODWORD(v31[1]) = 20;
    v31[3] = 0LL;
    v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v29 = *(_QWORD *)(a3 + 184) + 1664LL;
    v10 = v29;
    v11 = MiLockWorkingSetShared(v29);
    for ( i = v11; v8 <= v9; v11 = i )
    {
      NextPageTable = MiGetNextPageTable(v8, v9, (__int64)v31, v11, 0, &v25);
      v8 = NextPageTable;
      if ( !NextPageTable )
        break;
      v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v30 = v14;
      if ( v25 )
      {
        v17 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v18 = v25;
        do
        {
          v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v18;
        }
        while ( v18 );
        v19 = 0x200000LL;
        if ( v25 > 1 )
        {
          v20 = v25 - 1;
          do
          {
            v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v19 <<= 9;
            --v20;
          }
          while ( v20 );
        }
        v21 = MI_READ_PTE_LOCK_FREE(v17);
        v26 = v21;
        if ( (v21 & 1) != 0 && (v21 & 0x42) != 0 )
        {
          v22 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL) + 24;
          if ( v19 )
          {
            v23 = v22 - 0x220000000000LL;
            do
            {
              v27 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v27);
                while ( *(__int64 *)v23 < 0 );
              }
              *(_BYTE *)(v23 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v23, 0x7FFFFFFFFFFFFFFFuLL);
              v6 += 4096;
              v23 += 48LL;
            }
            while ( v6 < v19 );
            v10 = v29;
          }
          v6 = 0;
        }
        v8 = ((MiGetLeafVa(v17 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v13 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v12 = MI_READ_PTE_LOCK_FREE(v8);
          v26 = v12;
          if ( (v12 & 1) != 0 && (v12 & 0x42) != 0 )
          {
            v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL;
            v28 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v28);
              while ( *(__int64 *)(v16 + 24) < 0 );
            }
            *(_BYTE *)(v16 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v8, v26 & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry((__int64)v31, v13, 1LL, 0);
          }
          v13 += 4096LL;
          v8 += 8LL;
        }
        while ( (v13 & 0x1FFFFF) != 0 && v8 <= v9 );
        MiFlushTbList((int *)v31);
        v14 = v30;
        v10 = v29;
      }
      MiUnlockPageTableInternal(v10, v14);
    }
    return (void *)MiUnlockWorkingSetShared(v10, v11);
  }
  return result;
}

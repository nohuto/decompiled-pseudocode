/*
 * XREFs of MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88
 * Callers:
 *     MmRotatePhysicalView @ 0x140A31E80 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiDereferenceIoPages @ 0x140336384 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiIsProbeActive @ 0x14062E748 (MiIsProbeActive.c)
 *     MiUnmapFrameBuffer @ 0x140633F50 (MiUnmapFrameBuffer.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZeroNoCopy(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  int IsProbeActive; // r14d
  __int64 v6; // rdi
  _KPROCESS *Process; // r13
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // r12
  unsigned __int64 v17; // rdi
  unsigned __int8 v19; // [rsp+28h] [rbp-E0h]
  unsigned int v20; // [rsp+2Ch] [rbp-DCh]
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B8h]
  _QWORD v26[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v22 = 0LL;
  memset(v26, 0, 0xB8uLL);
  IsProbeActive = 0;
  v20 = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v26[0]) = 0;
  v10 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v26[2] = 0LL;
  LODWORD(v26[1]) = 20;
  LODWORD(v26[0]) = 1;
  v26[3] = 0LL;
  v24 = v10;
  v19 = MiLockWorkingSetShared(v10);
  if ( v8 <= v23 )
  {
    v12 = 0LL;
    v25 = 0LL;
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_6;
      if ( (v8 & 0xFFF) == 0 )
        break;
LABEL_7:
      if ( !IsProbeActive )
        IsProbeActive = MiIsProbeActive(v8, 1LL, 3);
      if ( (unsigned int)MiUnmapFrameBuffer(v8) )
        IsProbeActive = 1;
      if ( v22 != -1 )
      {
        if ( (_DWORD)v6 && (v13 = 2LL * (unsigned int)(v6 - 1), v14 = v27[2 * (unsigned int)(v6 - 1) + 1], v14 == v22) )
        {
          v15 = v14 + 1;
        }
        else
        {
          v15 = v22 + 1;
          v13 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v27[v13] = v22;
        }
        v27[v13 + 1] = v15;
      }
      MiInsertTbFlushEntry((__int64)v26, (__int64)((v8 << 25) - v12) >> 16, 1LL, 0);
      ++v20;
      v8 += 8LL;
      if ( (v8 & 0xFFF) == 0
        || v8 > v23
        || (_DWORD)v6 == 22
        || (v8 & 0x78) == 0
        && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v4)
                                         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList((int *)v26);
        if ( (_DWORD)v6 )
        {
          v16 = v27;
          do
          {
            MiDereferenceIoPages(1, *v16, v16[1] - *v16);
            v16 += 2;
            --v6;
          }
          while ( v6 );
          v10 = v24;
          v12 = v25;
        }
        v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        HIDWORD(v21) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((_DWORD *)&v21 + 1);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) - v20)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v10, v4);
        MiUnlockWorkingSetShared(v10, v19);
        if ( v8 > v23 )
          return IsProbeActive != 0 ? 0x40000019 : 0;
        v6 = 0LL;
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v20 = 0;
        v4 = 0LL;
        MiLockWorkingSetShared(v10);
      }
    }
    MiUnlockPageTableInternal(v10, v4);
LABEL_6:
    v4 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v10, v4, 0, v11);
    goto LABEL_7;
  }
  return 0LL;
}

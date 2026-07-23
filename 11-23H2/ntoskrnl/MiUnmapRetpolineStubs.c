/*
 * XREFs of MiUnmapRetpolineStubs @ 0x140641764
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiWriteWsle @ 0x140216174 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402E1500 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiUnmapRetpolineStubs(__int64 a1, int a2)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // rsi
  __int64 AnyMultiplexedVm; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r9
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // r13d
  __int64 v21; // r8
  bool v22; // zf
  unsigned __int64 ContainingPageTable; // rax
  unsigned __int8 v25; // [rsp+20h] [rbp-128h]
  __int64 v26; // [rsp+28h] [rbp-120h]
  __int64 v27; // [rsp+30h] [rbp-118h]
  __int64 v28; // [rsp+38h] [rbp-110h]
  unsigned __int64 v29; // [rsp+40h] [rbp-108h]
  _QWORD v30[24]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v30, 0, 0xB8uLL);
  v3 = 0;
  v4 = 0LL;
  if ( a2 )
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = MiGetSessionVm();
  v9 = AnyMultiplexedVm;
  v10 = v8 + ((((unsigned int)dword_140C6987C >> 12) + v6 + ((dword_140C6987C & 0xFFF) != 0)) << 12);
  v29 = v10;
  v11 = qword_140C65848;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = v12;
  v28 = qword_140C65848;
  LODWORD(v30[0]) = v7;
  WORD2(v30[0]) = 0;
  v30[2] = 0LL;
  LODWORD(v30[1]) = 20;
  v30[3] = 0LL;
  v14 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v25 = v14;
  if ( dword_140C65880 )
  {
    while ( 1 )
    {
      v15 = v10 + (v3 << 12);
      v16 = v12 + 8LL * v3;
      v26 = *(_QWORD *)(v11 + 8LL * v3 + 48);
      if ( v4 )
      {
        if ( (v16 & 0xFFF) != 0 )
          goto LABEL_9;
        MiFlushTbList((int *)v30);
        MiUnlockPageTableInternal(v9, v4);
      }
      v4 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v9, v4, 0, v13);
LABEL_9:
      if ( MI_READ_PTE_LOCK_FREE(v12 + 8LL * v3) )
      {
        MiGetWsleContents(v17, v15);
        MiWriteWsle(v18, v15);
        v19 = ZeroPte;
        v20 = 0;
        if ( MiPteInShadowRange(v16) )
        {
          if ( MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C66CFC) )
            {
              v22 = (ZeroPte & 1) == 0;
LABEL_16:
              if ( !v22 )
                v19 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v22 = (ZeroPte & 1) == 0;
            goto LABEL_16;
          }
        }
        *(_QWORD *)v16 = v19;
        if ( v20 )
          MiWritePteShadow(v16, v19, v21);
        MiInsertTbFlushEntry((__int64)v30, v15, 1LL, 0);
        MiLockAndDecrementShareCount(48 * v26 - 0x220000000000LL, 0);
        ContainingPageTable = MiGetContainingPageTable(v16);
        MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 0);
        v12 = v27;
        v11 = v28;
      }
      v10 = v29;
      if ( ++v3 >= dword_140C65880 )
      {
        v14 = v25;
        break;
      }
    }
  }
  MiFlushTbList((int *)v30);
  if ( v4 )
    MiUnlockPageTableInternal(v9, v4);
  return MiUnlockWorkingSetShared(v9, v14);
}

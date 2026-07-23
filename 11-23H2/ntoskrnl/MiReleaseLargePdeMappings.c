/*
 * XREFs of MiReleaseLargePdeMappings @ 0x14065FD24
 * Callers:
 *     MiEmptyPteBins @ 0x14021E150 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1402CBDA0 (MiInsertCachedPte.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MiReturnSystemVa @ 0x140213B54 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14021E394 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiReleaseLargePdeMappings(__int64 a1, __int64 a2, BOOL a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rdx
  char *AnyMultiplexedVm; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  __int64 v18; // r9
  int v19; // ebp
  __int64 v20; // rdi
  BOOL v21; // r13d
  unsigned __int64 v22; // rbx
  int v23; // r12d
  __int64 v24; // r8
  bool v25; // zf
  __int64 v26; // r9
  signed __int32 v28[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int8 v29; // [rsp+20h] [rbp-158h]
  BOOL MayNeedFlush; // [rsp+24h] [rbp-154h]
  char *v31; // [rsp+28h] [rbp-150h]
  __int64 v32; // [rsp+30h] [rbp-148h]
  unsigned __int64 v33; // [rsp+38h] [rbp-140h]
  unsigned __int64 v34; // [rsp+40h] [rbp-138h]
  unsigned __int64 v35; // [rsp+48h] [rbp-130h]
  int *v36; // [rsp+50h] [rbp-128h]
  __int64 v37; // [rsp+58h] [rbp-120h]
  __int64 v38; // [rsp+60h] [rbp-118h]
  _QWORD v39[24]; // [rsp+70h] [rbp-108h] BYREF

  MayNeedFlush = a3;
  v36 = (int *)a2;
  memset(v39, 0, 0xB8uLL);
  v5 = *(unsigned int *)(a2 + 4);
  v6 = 0LL;
  v7 = (*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL;
  v39[3] = 0LL;
  v37 = v7 - 0x98000000000LL;
  LODWORD(v39[1]) = 20;
  v8 = 0LL;
  v38 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v31 = AnyMultiplexedVm;
  do
  {
    v11 = v9 + 8 * v5;
    v12 = MI_READ_PTE_LOCK_FREE(v11);
    if ( (v12 & 0xF000) == 0x1000 )
    {
      v13 = 1LL;
    }
    else
    {
      v14 = MI_READ_PTE_LOCK_FREE(v11 + 8);
      if ( qword_140C65B40 )
      {
        if ( (v14 & 0x10) != 0 )
          v14 &= ~0x10uLL;
        else
          v14 &= ~qword_140C65B40;
      }
      v13 = HIDWORD(v14);
    }
    if ( qword_140C65B40 )
    {
      if ( (v12 & 0x10) != 0 )
        v12 &= ~0x10uLL;
      else
        v12 &= ~qword_140C65B40;
    }
    v5 = HIDWORD(v12);
    v33 = v5;
    v15 = v13 << 21;
    v32 = v13 + v6;
    v16 = (((__int64)((v11 << 25) - v8) >> 16 << 25) - v8) >> 16;
    v34 = v16;
    v35 = v13 << 21;
    v17 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v29 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v17, 0, v18);
    v19 = 0;
    if ( v13 )
    {
      v20 = (__int64)v31;
      v21 = MayNeedFlush;
      while ( 1 )
      {
        v22 = ZeroPte;
        v23 = 0;
        if ( MiPteInShadowRange(v11) )
        {
          if ( MiPteHasShadow() )
          {
            v23 = 1;
            if ( !HIBYTE(word_140C66CFC) )
            {
              v25 = (ZeroPte & 1) == 0;
              goto LABEL_21;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v25 = (ZeroPte & 1) == 0;
LABEL_21:
            if ( !v25 )
              v22 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v11 = v22;
        if ( v23 )
          MiWritePteShadow(v11, v22, v24);
        if ( v21 )
          MiInsertLargeTbFlushEntry((__int64)v39, 1, v11);
        v11 += 8LL;
        if ( (v11 & 0xFFF) != 0 || (unsigned int)(v19 + 1) >= v13 )
        {
          if ( (unsigned int)++v19 >= v13 )
          {
            v5 = v33;
            v16 = v34;
            AnyMultiplexedVm = v31;
            v15 = v35;
            break;
          }
        }
        else
        {
          MiUnlockPageTableInternal(v20, v17);
          v17 += 8LL;
          MiLockPageTableInternal(v20, v17, 0, v26);
          ++v19;
        }
      }
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v17);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v29);
    if ( MayNeedFlush )
    {
      MiFlushTbList((int *)v39);
      if ( v5 )
      {
        _InterlockedOr(v28, 0);
        MayNeedFlush = MiTbFlushTimeStampMayNeedFlush(*v36, KiTbFlushTimeStamp, -1);
      }
    }
    MiReturnSystemVa(v16, v15 + v16, 13, 0LL);
    v9 = v37;
    v6 = v32;
    v8 = v38;
  }
  while ( v5 );
  return v32;
}

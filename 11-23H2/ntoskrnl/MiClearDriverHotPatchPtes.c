/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x14064233C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiWriteWsle @ 0x140216174 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiClearDriverHotPatchPtes(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rsi
  int v8; // r8d
  unsigned __int8 v9; // bl
  unsigned int v10; // ecx
  unsigned __int8 v11; // al
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  int v19; // r13d
  __int64 v20; // r8
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v27; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh]
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-B0h]
  _QWORD v33[24]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v33, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  v30 = 0LL;
  AnyMultiplexedVm = 0LL;
  v5 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
  {
    v7 = *(_QWORD *)(a1 + 288);
    v8 = 1;
    v28 = 1;
    v9 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 64);
    v28 = 0;
    v7 = ((v2 >> 9) & 0x7FFFFFFFF8LL) + 8LL * ((v10 >> 12) + ((v10 & 0xFFF) != 0)) - 0x98000000000LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v11 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v8 = 0;
    v9 = v11;
  }
  LOBYTE(v27) = v9;
  v32 = v7 + 8LL * (((unsigned int)dword_140C6987C >> 12) + ((dword_140C6987C & 0xFFF) != 0));
  v33[3] = 0LL;
  LODWORD(v33[1]) = 20;
  v12 = (__int64)(v7 << 25) >> 16;
  if ( v7 < v32 )
  {
    while ( 1 )
    {
      if ( v8 )
      {
        if ( v3 )
        {
          if ( (v7 & 0xFFF) != 0 )
            goto LABEL_14;
          MiUnlockProtoPoolPage(v3, v9);
        }
        v13 = MiLockProtoPoolPage(v7, (unsigned __int8 *)&v27);
        v9 = v27;
        v30 = v13;
      }
      else
      {
        if ( v5 )
        {
          if ( (v7 & 0xFFF) != 0 )
            goto LABEL_14;
          MiFlushTbList((int *)v33);
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v5);
        }
        v5 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v5, 0, v6);
      }
LABEL_14:
      v14 = MI_READ_PTE_LOCK_FREE(v7);
      v31 = v14;
      if ( !v14 )
        goto LABEL_40;
      if ( (v14 & 1) != 0 )
      {
        LOBYTE(v16) = MiGetWsleContents(v15, v12) & 0xF;
        if ( (_BYTE)v16 == 9 )
          MiWriteWsle(v16, v12);
        MiInsertTbFlushEntry((__int64)v33, v12, 1LL, 0);
        v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        LODWORD(v29) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v29);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        MiDecrementShareCount(v17);
      }
      else
      {
        v17 = MiLockTransitionLeafPageEx(v7, 0LL, 0);
      }
      v18 = ZeroPte;
      v19 = 0;
      if ( MiPteInShadowRange(v7) )
      {
        if ( MiPteHasShadow() )
        {
          v19 = 1;
          if ( !HIBYTE(word_140C66CFC) )
          {
            v21 = (ZeroPte & 1) == 0;
            goto LABEL_29;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v21 = (ZeroPte & 1) == 0;
LABEL_29:
          if ( !v21 )
            v18 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v18;
      if ( v19 )
        MiWritePteShadow(v7, v18, v20);
      v22 = *(_QWORD *)(v17 + 24);
      if ( (v22 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(
          0x1Au,
          0x18951uLL,
          v7,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v17 + 0x220000000000LL) >> 4),
          *(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
      *(_QWORD *)(v17 + 24) = v22 & 0xC000000000000000uLL | (v22 + 1) & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
      v23 = 48 * (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      MiLockNestedPageAtDpcInline(v23);
      *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v24 = *(_QWORD *)(v17 + 40) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
      v21 = v28 == 0;
      *(_QWORD *)(v17 + 40) = v24;
      if ( !v21 )
        *(_QWORD *)(v17 + 40) = v24 & 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v17 + 8) = 0LL;
      v25 = *(_QWORD *)(v17 + 16);
      if ( qword_140C65B40 && (v25 & 0x10) == 0 )
        v25 &= ~qword_140C65B40;
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_QWORD *)(v17 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v17 + 16), HIDWORD(v25));
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), v6);
      v9 = v27;
LABEL_40:
      v3 = v30;
      v7 += 8LL;
      v12 += 4096LL;
      if ( v7 >= v32 )
        break;
      v8 = v28;
    }
  }
  MiFlushTbList((int *)v33);
  if ( v28 )
    return MiUnlockProtoPoolPage(v3, v9);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v5);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
}

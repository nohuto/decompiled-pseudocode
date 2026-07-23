/*
 * XREFs of MiUnmapLegacyAwePage @ 0x14064C428
 * Callers:
 *     MiFreePhysicalPages @ 0x14064AA90 (MiFreePhysicalPages.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiDecrementAweMapCount @ 0x140649B98 (MiDecrementAweMapCount.c)
 *     MiUpdateAwePageTable @ 0x14064C5AC (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiUnmapLegacyAwePage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int8 v15; // [rsp+68h] [rbp+10h]
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFF8LL);
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = MiLockWorkingSetShared((__int64)v5);
  MiLockPageTableInternal((__int64)v5, v7, 0, v8);
  v9 = ZeroPte;
  v10 = 0;
  if ( MiPteInShadowRange(v6) )
  {
    if ( MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_9;
      v12 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v12 = (ZeroPte & 1) == 0;
    }
    if ( !v12 )
      v9 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)v6 = v9;
  if ( v10 )
    MiWritePteShadow(v6, v9, v11);
  MiUpdateAwePageTable(v7, -1LL, 0xFFFFFFFFLL);
  MiInsertTbFlushEntry(a3, (__int64)(v6 << 25) >> 16, 1LL, 0);
  MiUnlockPageTableInternal((__int64)v5, v7);
  MiUnlockWorkingSetShared((__int64)v5, v15);
  MiDecrementAweMapCount(a1, a2, &v16, 0);
  return 0LL;
}

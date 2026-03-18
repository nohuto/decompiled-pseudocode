/*
 * XREFs of MiDeleteLargeUserPde @ 0x1405B07F4
 * Callers:
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiDecreaseUsedPtesCount @ 0x140232154 (MiDecreaseUsedPtesCount.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiRewritePteWithLockBit @ 0x1403C2C58 (MiRewritePteWithLockBit.c)
 *     MiDeleteVadAwePtes @ 0x1405AA614 (MiDeleteVadAwePtes.c)
 */

void __fastcall MiDeleteLargeUserPde(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v7; // r15d
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 i; // rcx
  unsigned __int64 v18; // rbx
  int v19; // r15d
  bool v20; // zf
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int16 v26; // [rsp+70h] [rbp+8h]
  int v27; // [rsp+80h] [rbp+18h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v25 = v3;
  v7 = *(_DWORD *)(v3 + 104);
  v26 = v7;
  v28 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = v28;
  v10 = v28 & 1;
  if ( (v28 & 1) != 0 )
  {
    v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28);
  }
  else if ( qword_140C50780 )
  {
    if ( (v28 & 0x10) != 0 )
      v9 = v28 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v9 = ~qword_140C50780 & v28;
  }
  v11 = (v9 >> 12) & 0xFFFFFFFFFFLL;
  v12 = (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  v13 = v7 & 0x10;
  v27 = v13;
  if ( v13 )
  {
    MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL), a2, (__int64 *)(v3 + 112));
    goto LABEL_28;
  }
  if ( a3 )
  {
    if ( v10 )
    {
      MiRewritePteWithLockBit(*(_QWORD *)(a1 + 24), (volatile __int64 *)a2, ZeroPte, v8);
      goto LABEL_26;
    }
    v18 = ZeroPte;
    v19 = 0;
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v20 = (ZeroPte & 1) == 0;
          goto LABEL_21;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (ZeroPte & 1) == 0;
LABEL_21:
        if ( !v20 )
          v18 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v18;
    if ( v19 )
      MiWritePteShadow(a2, v18);
    v13 = v27;
LABEL_26:
    if ( a3 == 3 )
      goto LABEL_28;
    goto LABEL_27;
  }
  for ( i = 0LL; i < v12; ++i )
    *(_QWORD *)(a2 + 8 * i) = ZeroPte;
LABEL_27:
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
  MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v12);
LABEL_28:
  v22 = 48 * v11 - 0x220000000000LL;
  if ( v10 )
  {
    v23 = *(_QWORD *)(a1 + 16);
    if ( a3 )
      MiInsertLargeTbFlushEntry(v23, a3, a2);
    else
      MiInsertTbFlushEntry(v23, (__int64)(a2 << 25) >> 16, v12, 0);
  }
  if ( !v13 && *(__int64 *)(v22 + 40) >= 0 )
  {
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27, v14, v15, v16);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    v24 = *(_BYTE *)(v22 + 34);
    *(_BYTE *)(v22 + 34) = v24 & 0xF8 | 5;
    *(_QWORD *)v22 ^= (*(_QWORD *)v22 ^ (*(_QWORD *)(*(_QWORD *)(v25 + 16) + 48LL) >> 3)) & 0xFFFFFFFFFFELL;
    *(_QWORD *)(*(_QWORD *)(v25 + 16) + 48LL) = v22;
    *(_BYTE *)(v22 + 34) ^= (*(_BYTE *)(v22 + 34) ^ v24) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v26 & 0x800) != 0 && !a3 )
    *(_DWORD *)(a1 + 8) = 15;
}

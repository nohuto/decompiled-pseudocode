/*
 * XREFs of MiMakeLargePageTable @ 0x140598DA4
 * Callers:
 *     MiCreateSystemPageTable @ 0x14027CE40 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiTransformValidPteInPlace @ 0x1402270B8 (MiTransformValidPteInPlace.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     MiDemotePfnListChain @ 0x1405C19F8 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiMakeLargePageTable(__int64 a1, volatile signed __int64 *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  unsigned __int64 LeafVa; // r10
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 ContainingPageTable; // r13
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned __int64 ValidPte; // rbx
  int v21; // edi
  bool v22; // zf
  __int64 result; // rax
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  if ( (*(_DWORD *)(v3 + 128) & 0x80u) != 0 && (unsigned int)(a3 - 1) <= 1 )
  {
    LeafVa = MiGetLeafVa((unsigned __int64)a2);
    if ( LeafVa >= *(_QWORD *)(v6 + 32) )
    {
      v8 = 1;
      if ( v5 > 1 )
      {
        v9 = v5 - 1;
        do
        {
          --v8;
          --v9;
        }
        while ( v9 );
      }
      v10 = v8;
      if ( LeafVa + (MiLargePageSizes[v8] << 12) - 1 <= *(_QWORD *)(v6 + 40) )
      {
        v11 = (__int64 *)(v3 + 24LL * v8);
        v12 = *v11;
        if ( (__int64 *)*v11 != v11 || v8 && (MiDemotePfnListChain(v3), v12 = *v11, (__int64 *)*v11 != v11) )
        {
          if ( *(__int64 **)(v12 + 8) != v11 || (v13 = *(_QWORD *)v12, *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12) )
            __fastfail(3u);
          *v11 = v13;
          *(_QWORD *)(v13 + 8) = v11;
          --v11[2];
          ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
          v18 = 48 * ContainingPageTable - 0x220000000000LL;
          v24 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v24, v14, v15, v16);
            while ( *(__int64 *)(v18 + 24) < 0 );
          }
          v19 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v25, v19, v15, v16);
            while ( *(__int64 *)(v12 + 24) < 0 );
          }
          *(_QWORD *)(v12 + 8) = a2;
          *(_QWORD *)(v12 + 16) = MiSwizzleInvalidPte(128LL);
          *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
          MiSetPfnPteFrame(v12, ContainingPageTable);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ValidPte = MiMakeValidPte(
                       (unsigned __int64)a2,
                       0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4),
                       -2080374780);
          if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) & 1) != 0 )
          {
            MiTransformValidPteInPlace(a2, (unsigned __int64)a2, ValidPte, v5);
LABEL_31:
            result = 1LL;
            *(_QWORD *)(v3 + 112) += MiLargePageSizes[v10];
            return result;
          }
          v21 = 0;
          if ( MiPteInShadowRange((unsigned __int64)a2) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v21 = 1;
              if ( !HIBYTE(word_140C51864) )
              {
                v22 = (ValidPte & 1) == 0;
                goto LABEL_27;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v22 = (ValidPte & 1) == 0;
LABEL_27:
              if ( !v22 )
                ValidPte |= 0x8000000000000000uLL;
            }
          }
          *a2 = ValidPte;
          if ( v21 )
            MiWritePteShadow((__int64)a2, ValidPte);
          goto LABEL_31;
        }
      }
    }
  }
  return 0LL;
}

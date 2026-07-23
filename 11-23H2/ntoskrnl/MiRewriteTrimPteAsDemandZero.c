/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x140346E94
 * Callers:
 *     MiWsleFree @ 0x140281630 (MiWsleFree.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiTransferSoftwarePte @ 0x140285A60 (MiTransferSoftwarePte.c)
 *     MiSetNonResidentPteHeat @ 0x1402D9340 (MiSetNonResidentPteHeat.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // ebp
  unsigned __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  unsigned __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int16 v25; // r10
  bool v26; // zf
  bool v27; // zf
  unsigned __int64 v28; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((a2[5] >> 43) & 0x3FFLL))
                   + 8LL * ((unsigned __int16)v2 >> 12)
                   + 17056);
    if ( qword_140C65B40 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C65B40;
    v6 = MiTransferSoftwarePte(a2[2], v5, HIDWORD(v2), 2);
  }
  else
  {
    v28 = a2[2];
    MiSetNonResidentPteHeat(&v28, 0);
    v6 = v28;
    if ( (v25 & 0x400) == 0 )
    {
      v6 = v28 & 0xFFFFFFFFFFFFFFF9uLL;
      v28 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
  }
  v7 = a2[5];
  v8 = a2[1] | 0x8000000000000000uLL;
  if ( v7 < 0 )
  {
    v9 = v7 & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = 0;
    v12 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v9, 0LL, 0x80000000) + 8 * ((v8 >> 3) & 0x1FF));
    if ( !MiPteInShadowRange((unsigned __int64)v12) )
    {
LABEL_8:
      *v12 = v6;
      if ( v11 )
        MiWritePteShadow(v12, v6);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v12, 0x11u);
      MiLockNestedPageAtDpcInline(v10, v16, v17, v18);
      MiDecrementShareCount(v10);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return result;
    }
    if ( (unsigned int)MiPteHasShadow(v14, v13, v15) )
    {
      v11 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_8;
      v27 = (v6 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v27 = (v6 & 1) == 0;
    }
    if ( !v27 )
      v6 |= 0x8000000000000000uLL;
    goto LABEL_8;
  }
  v20 = a2[1] | 0x8000000000000000uLL;
  v21 = 0;
  result = MiPteInShadowRange(v20);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v23, v22, v24);
    if ( (_DWORD)result )
    {
      v21 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_12;
      v26 = (v6 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_12;
      v26 = (v6 & 1) == 0;
    }
    if ( !v26 )
      v6 |= 0x8000000000000000uLL;
  }
LABEL_12:
  *(_QWORD *)v8 = v6;
  if ( v21 )
    result = MiWritePteShadow(v8, v6);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 392), 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}

/*
 * XREFs of MiGetFreeLargePage @ 0x1402D89B0
 * Callers:
 *     MiGetFreeLargePagesSearchTypes @ 0x1402D86A0 (MiGetFreeLargePagesSearchTypes.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D8C50 (MiUnlinkNodeLargePageHelper.c)
 *     MiBeginPageAccessor @ 0x1402E82C4 (MiBeginPageAccessor.c)
 *     MiGetPfnPageSizeIndex @ 0x1402E8B70 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiGetFreeLargePage(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  volatile signed __int64 *v5; // rsi
  signed __int8 v6; // dl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi

  v2 = *(_QWORD **)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 128);
  if ( !v3 )
    v3 = v2[1];
  v4 = *(_QWORD *)(a1 + 136);
  v5 = (volatile signed __int64 *)(v3 + 24);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL);
  if ( !v4 )
  {
    if ( !v6 )
      goto LABEL_5;
LABEL_35:
    *(_QWORD *)(a1 + 144) = v3;
    *(_BYTE *)(a1 + 58) = 1;
    return 0LL;
  }
  if ( v6 )
    goto LABEL_35;
LABEL_5:
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    v3 = v2[1];
    if ( *(_QWORD **)v3 != v2
      || (v14 = *(_QWORD **)(v3 + 8), *v14 != v3)
      || (v2[1] = v14, *v14 = v2, v15 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v15;
    *(_QWORD *)(v3 + 8) = v2;
    *(_QWORD *)(v15 + 8) = v3;
    *v2 = v3;
    if ( !(unsigned int)MiBeginPageAccessor(v7, v3, 0LL) )
      v3 = 0LL;
  }
  else
  {
    if ( !(unsigned int)MiUnlinkNodeLargePageHelper(
                          *(_QWORD *)(a1 + 160),
                          v3,
                          *(_DWORD *)(a1 + 16),
                          *(_DWORD *)(a1 + 104),
                          *(_DWORD *)(a1 + 44)) )
    {
      *(_BYTE *)(a1 + 56) = 1;
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(a1 + 44) & 0x100) != 0 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 16LL) + 25408LL * *(unsigned int *)(a1 + 32);
      ++*(_DWORD *)(v11 + 23004);
    }
    *(_QWORD *)v3 = 0LL;
  }
  if ( !v3 )
  {
LABEL_37:
    _InterlockedAnd64(v5, 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( !*(_QWORD *)(a1 + 136) )
    *(_QWORD *)(a1 + 136) = v3;
  if ( *(_QWORD *)(a1 + 112) )
    **(_QWORD **)(a1 + 120) = v3;
  else
    *(_QWORD *)(a1 + 112) = v3;
  *(_QWORD *)(a1 + 120) = v3;
  if ( (*(_QWORD *)(a1 + 24))-- == 1LL )
  {
    *(_BYTE *)(a1 + 56) = 1;
    return 1LL;
  }
  v16 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 128) = 0LL;
  v17 = v3 + 48 * v16;
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4);
  if ( v18 > qword_140C65BA0
    || !_bittest64((const signed __int64 *)(16 * ((v17 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL), 0x36u)
    || (unsigned int)MiGetPfnPageSizeIndex(v17, v8, v9, v10) != *(_DWORD *)(a1 + 16)
    || (*(_BYTE *)(v17 + 34) & 7) != *(_DWORD *)(a1 + 100)
    || *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v17 + 0x220000000000LL) >> 4)) + 2) != *(_DWORD *)(a1 + 32)
    || *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)) != *(_QWORD *)a1
    || (unsigned int)MiGetPfnChannel(v17) != *(_DWORD *)(a1 + 104)
    || *(unsigned __int8 *)(v17 + 34) >> 6 != *(_DWORD *)(a1 + 108)
    || v18 >= 0x100000 && *(_DWORD *)(a1 + 96) )
  {
    return 1LL;
  }
  *(_QWORD *)(a1 + 128) = v17;
  return 1LL;
}

/*
 * XREFs of MiCombineWithExisting @ 0x1402179B4
 * Callers:
 *     MiConvertPrivateToProto @ 0x1402175A8 (MiConvertPrivateToProto.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiConfirmCombinePageContents @ 0x140218630 (MiConfirmCombinePageContents.c)
 *     MiRebuildPageTableLeafAges @ 0x1402188A0 (MiRebuildPageTableLeafAges.c)
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x1402E2640 (MiUpdatePfnPriority.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E3C4C (MI_WSLE_LOG_ACCESS.c)
 *     MiResolveProtoCombine @ 0x1402E3D88 (MiResolveProtoCombine.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402E4C90 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCombineWithExisting(_QWORD *a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v4; // r13
  unsigned __int64 v6; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  int v18; // ebx
  unsigned int PfnPriority; // eax
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  char WsleContents; // di
  int v24; // r15d
  int v25; // eax
  int v26; // r9d
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v33; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v34; // [rsp+38h] [rbp-61h] BYREF
  _QWORD *v35; // [rsp+40h] [rbp-59h]
  __int64 v36; // [rsp+48h] [rbp-51h] BYREF
  __int64 v37; // [rsp+50h] [rbp-49h]
  __int64 v38; // [rsp+58h] [rbp-41h]
  unsigned __int64 v39; // [rsp+60h] [rbp-39h]
  __int64 v40; // [rsp+68h] [rbp-31h]
  __int128 v41; // [rsp+70h] [rbp-29h] BYREF
  __int128 v42; // [rsp+80h] [rbp-19h]
  __int128 *v43; // [rsp+90h] [rbp-9h] BYREF
  int v44; // [rsp+98h] [rbp-1h]
  int v45; // [rsp+9Ch] [rbp+3h]

  v4 = *(_QWORD *)(a2 + 16);
  v33 = a1[14];
  v6 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v43 = a4;
  v40 = a2;
  v35 = a1;
  v41 = 0LL;
  v42 = 0LL;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v36 = MI_READ_PTE_LOCK_FREE(v8);
  v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v36) >> 12) & 0xFFFFFFFFFFLL;
  v39 = v9;
  v10 = 48 * v9 - 0x220000000000LL;
  v11 = a3 + 32;
  v34 = (_QWORD *)*a1;
  v38 = v11;
  v37 = MiLockProtoPoolPage(v11, 0LL);
  v12 = v37;
  if ( !v37 )
    return 0LL;
  v14 = MiLockLeafPage(v11, 0LL);
  if ( v14 )
  {
    v15 = v35[12];
    MiMapSinglePage(v15, v9, 3221225488LL, 0LL);
    MiMapSinglePage(v15 + 4096, 0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4), 3221225488LL, 0LL);
    v16 = MiConfirmCombinePageContents(v35, 0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4), *v34);
    v17 = 0x7FFFFFFFF8LL;
    v18 = v16;
    *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
    *(_QWORD *)((((v15 + 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
    if ( v16 )
    {
      PfnPriority = MiGetPfnPriority(v10);
      MiUpdatePfnPriority(v14, PfnPriority, 0LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v17) = 17;
    MiUnlockProtoPoolPage(v37, v17);
    if ( v18 )
    {
      if ( dword_140C67FE8 )
        MI_WSLE_LOG_ACCESS(v33, v8);
      v20 = v38;
      v21 = MiSwizzleInvalidPte((v38 << 16) | 0x400) | 0x800;
      LODWORD(v34) = 0;
      WsleContents = MiGetWsleContents(v22, v6);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v10 + 32) == 1 )
      {
        if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
        {
          v24 = 1;
          v41 = 0LL;
          v42 = 0LL;
          MiIdentifyPfn(v39, &v41);
        }
        else
        {
          v24 = 0;
        }
        v25 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v8, v21, 2LL);
        v27 = *(_QWORD *)(v10 + 40);
        *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
        *(_BYTE *)(v10 + 34) |= 7u;
        v28 = v27 & 0xFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_QWORD *)(v40 + 16) = v10;
        if ( v25 )
          MiInsertTbFlushEntry(v43, v6, 1LL, 0LL);
        LOBYTE(v26) = WsleContents;
        v29 = v33;
        MiRemoveWsle(v33, v6, 1, v26, 10, 1);
        MiRebuildPageTableLeafAges(v30, v6);
        v31 = 48 * v28 - 0x220000000000LL;
        LODWORD(v33) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v33);
          while ( *(__int64 *)(v31 + 24) < 0 );
        }
        MiDecrementShareCount(v31);
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiResolveProtoCombine(v8, v29, v20);
        if ( v24 )
        {
          v45 = 0;
          v43 = &v41;
          *((_QWORD *)&v42 + 1) = v20;
          v44 = 32;
          EtwTraceKernelEvent((int)&v43, 1, 0x28000001u, 634, 289413892);
        }
        ++*(_QWORD *)v35[13];
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    LOBYTE(v13) = 17;
    MiUnlockProtoPoolPage(v12, v13);
  }
  return 3221225496LL;
}

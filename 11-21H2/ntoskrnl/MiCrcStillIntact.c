/*
 * XREFs of MiCrcStillIntact @ 0x140339D70
 * Callers:
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiCombineCandidate @ 0x1403137B0 (MiCombineCandidate.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiVadSupportsPrivateCommit @ 0x14032E910 (MiVadSupportsPrivateCommit.c)
 *     MiClearPteAccessed @ 0x140332A80 (MiClearPteAccessed.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiRecheckVaVm @ 0x14033A474 (MiRecheckVaVm.c)
 *     MiMakeCombineCandidateClean @ 0x14033A5B0 (MiMakeCombineCandidateClean.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiCrcStillIntact(_QWORD *a1, __int64 a2, char a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // r9d
  __int64 **Address; // rsi
  __int64 v21; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // [rsp+30h] [rbp-118h] BYREF
  __int64 v26; // [rsp+38h] [rbp-110h] BYREF
  int v27; // [rsp+40h] [rbp-108h] BYREF
  __int16 v28; // [rsp+44h] [rbp-104h]
  __int16 v29; // [rsp+46h] [rbp-102h]
  __int64 v30; // [rsp+48h] [rbp-100h]
  __int64 v31; // [rsp+50h] [rbp-F8h]
  __int64 v32; // [rsp+58h] [rbp-F0h]
  _BYTE v33[152]; // [rsp+60h] [rbp-E8h] BYREF

  v5 = *(_QWORD *)(a4 + 8);
  v29 = 0;
  memset(v33, 0, sizeof(v33));
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiRecheckVaVm(0xFFFFF68000000000uLL, v5) )
  {
    v10 = *(_QWORD *)v9;
    if ( MiPteInShadowRange(v9)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v23 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        v24 = v10 | 0x20;
        if ( (v23 & 0x20) == 0 )
          v24 = v10;
        v10 = v24;
        if ( (v23 & 0x42) != 0 )
          v10 = v24 | 0x42;
      }
    }
    v26 = v10;
    if ( (v10 & 1) != 0 )
    {
      v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25, v11, v13, v14);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      if ( (unsigned int)MiCombineCandidate(a1, a3, (__int128 *)v12) )
      {
        v15 = *(_BYTE *)(v12 + 34) & 7;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v15 == 6 && v9 == (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) )
        {
          v16 = *(_QWORD *)(v12 + 40);
          if ( v16 >= 0 && (v16 & 0x10000000000LL) == 0 && (*(_BYTE *)(v12 + 35) & 8) == 0 )
          {
            v17 = v16 & 0xFFFFFFFFFFLL;
            if ( v17 != 0x3FFFFFFFFELL && (MiGetWsleContents(v17, v5) & 0xF) != 8 && *(_WORD *)(v12 + 32) == 1 )
            {
              Address = 0LL;
              if ( v18 != 1
                || (ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                                    + 284)),
                    Address = MiLocateAddress(v5),
                    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                                      + 284)),
                    Address)
                && MiVadSupportsPrivateCommit((__int64)Address) )
              {
                if ( a5 == 2 )
                {
                  if ( (v10 & 0x42) != 0 )
                  {
                    MiMakeCombineCandidateClean(v9, Address);
                    return 1LL;
                  }
                }
                else
                {
                  if ( a5 != 3 )
                    return 1LL;
                  v30 = 20LL;
                  v27 = MiTbFlushType(a2);
                  v28 = 0;
                  v31 = 0LL;
                  v32 = 0LL;
                  if ( (unsigned int)MiClearPteAccessed(v21, v12, v9, (__int64)&v27, dword_140C52B68, 0) )
                    return 1LL;
                }
              }
            }
          }
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return 0LL;
}

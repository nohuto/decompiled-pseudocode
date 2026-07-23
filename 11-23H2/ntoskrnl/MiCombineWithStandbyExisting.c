/*
 * XREFs of MiCombineWithStandbyExisting @ 0x14035A31C
 * Callers:
 *     MiConvertStandbyToProto @ 0x14035A020 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     MiConfirmCombinePageContents @ 0x140218630 (MiConfirmCombinePageContents.c)
 *     MiTryLockLeafPage @ 0x140219AC4 (MiTryLockLeafPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x1402E2640 (MiUpdatePfnPriority.c)
 *     MiStandbyPageStillCombineCandidate @ 0x14035A650 (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x14035A704 (MiRecheckCombineVm.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14035A7BC (MiUnlockNestedProtoPoolPage.c)
 *     MiWriteRepurposedTransitionPte @ 0x14035A7F8 (MiWriteRepurposedTransitionPte.c)
 *     MiDiscardTransitionPteEx @ 0x140650B74 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiCombineWithStandbyExisting(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  ULONG_PTR v5; // rbp
  unsigned __int64 *v6; // rdi
  unsigned __int64 *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 result; // rax
  unsigned int v18; // ebx
  __int64 v19; // [rsp+20h] [rbp-58h]
  unsigned int v21; // [rsp+88h] [rbp+10h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  __int64 v23; // [rsp+98h] [rbp+20h]

  v22 = 0LL;
  v4 = *(_QWORD *)(a1 + 112);
  v19 = *(_QWORD *)a1;
  v21 = *(_DWORD *)(a1 + 140);
  v5 = *(_QWORD *)(a1 + 64);
  v6 = (unsigned __int64 *)(((*(_QWORD *)(a2 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = (unsigned __int64 *)(a3 + 32);
  v8 = (*(_QWORD *)(a3 + 48) >> 55) & 0x1FLL;
  v23 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(v4 + 174));
  v9 = MiLockProtoPoolPage(a3 + 32, 0LL);
  v10 = v9;
  if ( v9 )
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      v11 = *v6;
      if ( (**(_BYTE **)(a1 + 72) & 1) != 0 && (v11 & 0x400) == 0 && (v11 & 0x800) != 0 )
      {
        if ( qword_140C65B40 && (v11 & 0x10) == 0 )
          v11 &= ~qword_140C65B40;
        if ( ((v11 >> 12) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4)
          && (unsigned int)MiStandbyPageStillCombineCandidate(v5, v23, v6, (unsigned int)v8)
          && (unsigned int)MiRecheckCombineVm(v19, v21, v5, v4) )
        {
          MiTryLockLeafPage(v7, 1LL, &v22);
          v12 = v22;
          if ( v22 )
          {
            v13 = *(_QWORD *)(a1 + 96) + 4096LL;
            MiMapSinglePage(v13, 0xAAAAAAAAAAAAAAABuLL * ((v22 + 0x220000000000LL) >> 4), -1073741808, 0);
            v14 = MiConfirmCombinePageContents(a1, 0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4));
            *(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
            if ( v14 )
            {
              if ( (MiUnlinkPageFromListEx(v5, 0LL) & 3) == 0 )
              {
                *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
                MiGetPfnPriority(v5);
                MiUpdatePfnPriority(v12);
                _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockNestedProtoPoolPage(v10);
                v15 = MiSwizzleInvalidPte(((_QWORD)v7 << 16) | 0x400LL);
                MiWriteRepurposedTransitionPte(v5, v15 | 0x800);
                v16 = *(_QWORD *)(v5 + 40);
                *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
                MiPfnReferenceCountIsZero(v5, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4));
                _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiLockAndDecrementShareCount(48 * (v16 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 0);
                ++**(_QWORD **)(a1 + 104);
                return 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v10);
              MiDiscardTransitionPteEx(v5, 0LL);
              goto LABEL_24;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v18 = -1073741800;
          }
          else
          {
            v18 = -1073741739;
          }
          MiUnlockNestedProtoPoolPage(v10);
          result = v18;
LABEL_18:
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return result;
        }
      }
      MiUnlockNestedProtoPoolPage(v10);
LABEL_24:
      result = 3221225496LL;
      goto LABEL_18;
    }
    MiUnlockProtoPoolPage(v9, 0x11u);
  }
  return 3221225557LL;
}

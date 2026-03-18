/*
 * XREFs of MiMakeFaultPfnActive @ 0x140334EE0
 * Callers:
 *     MiHardFaultPageRelease @ 0x140334DA8 (MiHardFaultPageRelease.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140271360 (MiPteInShadowRange.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283100 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402952DC (MiReleasePageFileInfo.c)
 *     MiAreChargesNeededToLockPage @ 0x1402CDF90 (MiAreChargesNeededToLockPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x1402DC320 (MiChargeForLockedPage.c)
 *     MiMakeTransitionPteValid @ 0x140334FD0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x14035734C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1403573AC (MiPteHasShadow.c)
 *     MiMakeProtoReadOnly @ 0x140633F2C (MiMakeProtoReadOnly.c)
 */

void __fastcall MiMakeFaultPfnActive(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // rax
  _DWORD *v9; // rsi
  __int64 TransitionPteValid; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi

  v2 = *a1;
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a2) || (unsigned int)MiChargeForLockedPage(v5, 3) )
    ++*(_WORD *)(a2 + 32);
  v6 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(a2 + 34) = v6 & 0xF8 | 6;
  MiRemoveLockedPageChargeAndDecRef(a2);
  v8 = *(_QWORD *)(a2 + 16);
  if ( (v8 & 0x400) == 0 )
  {
    v17 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    if ( (v8 & 4) != 0 && (unsigned __int16)v8 >> 12 == *(_DWORD *)(v17 + 1188) )
    {
      v16 = MiCaptureDirtyBitToPfn(a2);
      if ( v16 )
        MiReleasePageFileInfo(v17, v16, 0);
    }
  }
  if ( *(__int64 *)(a2 + 40) < 0 )
  {
    v9 = *(_DWORD **)(v2 + 232);
    if ( ((*v9 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v9, a2, v7);
    TransitionPteValid = MiMakeTransitionPteValid(v9);
    v11 = TransitionPteValid;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow(v13, v12, v14) )
      {
        if ( !HIBYTE(word_140C66CFC) && (TransitionPteValid & 1) != 0 )
          v11 = TransitionPteValid | 0x8000000000000000uLL;
        *(_QWORD *)v9 = v11;
        MiWritePteShadow(v9, v11);
        goto LABEL_9;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (TransitionPteValid & 1) != 0 )
      {
        v11 = TransitionPteValid | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v9 = v11;
LABEL_9:
    v15 = (__int64 *)a1[6];
    if ( v15 )
      *v15 = TransitionPteValid;
  }
}

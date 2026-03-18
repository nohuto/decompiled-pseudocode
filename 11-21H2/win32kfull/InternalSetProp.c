/*
 * XREFs of InternalSetProp @ 0x1C0083110
 * Callers:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C001F87C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     FeedbackSetWindowSetting @ 0x1C0080B34 (FeedbackSetWindowSetting.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082444 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00F15F0 (NtUserSetBrokeredForeground.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00FF170 (NtUserShutdownBlockReasonCreate.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C010AE8C (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     _SetTargetingWindowValue @ 0x1C010CE3C (_SetTargetingWindowValue.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0144CE8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     FeedbackClearWindowSetting @ 0x1C01D5470 (FeedbackClearWindowSetting.c)
 *     _SetTouchWindowFlags @ 0x1C01D73AC (_SetTouchWindowFlags.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01DC4F4 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     UserAssociateHwnd @ 0x1C01E318C (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x1C01FC4A0 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C0200C50 (NtUserfnDDEINIT.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C02113D8 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C0214BD0 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021553C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C02439D4 (SetDisplayAffinity.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C006C4AC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C007944C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C007B23C (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     SetSharedPropForFilteredProcesses @ 0x1C0235C20 (SetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // esi
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v11; // rax
  int v12; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-78h] BYREF
  tagObjLock *v15; // [rsp+60h] [rbp-68h]
  char v16; // [rsp+70h] [rbp-58h]
  char v17; // [rsp+78h] [rbp-50h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v14,
    *(tagObjLock **)(a1 + 144),
    a3);
  if ( !word_1C0336250 )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
      word_1C0336250 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
  }
  v8 = 1;
  if ( (a4 & 1) != 0 )
    goto LABEL_3;
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144));
  if ( (_WORD)a2 == word_1C0336250 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
LABEL_3:
    v8 = RealInternalSetProp(*(_QWORD *)(a1 + 144), a2, a3, a4);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(a1 + 324) & 1) == 0 )
    goto LABEL_3;
  v11 = *(_QWORD *)(a1 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**(PRKPROCESS **)(v11 + 424), &ApcState);
  v12 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v12 != 1 )
    goto LABEL_3;
LABEL_4:
  if ( v17 && v16 && v15 )
    tagObjLock::UnLockExclusive(v15);
  return v8;
}

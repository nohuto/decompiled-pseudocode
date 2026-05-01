/*
 * XREFs of ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1803C0738
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1803C2E18 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D7A4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::DeliverChainLinkEventInternal(
        __int64 a1,
        int a2)
{
  int v3; // edx
  char v4; // r12
  __int64 *v5; // rbp
  RTL_SRWLOCK *v6; // rbx
  __int64 *v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 && (v3 = a2 - 1) != 0 )
  {
    if ( v3 == 1 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 88LL))(a1, 0LL, 2LL);
  }
  else
  {
    v4 = 0;
    v5 = (__int64 *)(a1 + 56);
    while ( 1 )
    {
      v10 = 0LL;
      v6 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( *(_BYTE *)(a1 + 81) )
      {
        v5 = (__int64 *)(a1 + 56);
        if ( !v4 )
          break;
      }
      v4 = 1;
      *(_BYTE *)(a1 + 81) = 1;
      if ( !*(_BYTE *)(a1 + 80) )
        goto LABEL_17;
      *(_BYTE *)(a1 + 80) = 0;
      if ( *(_QWORD *)(a1 + 72) )
      {
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(&v10, (__int64 *)(a1 + 72));
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 72));
        *(_BYTE *)(a1 + 80) = *v5 != 0;
        v8 = 1;
      }
      else
      {
        if ( !*v5 )
          goto LABEL_17;
        v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=((__int64 *)(a1 + 72), v5);
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(&v10, v7);
        v8 = 0;
      }
      v9 = v10;
      if ( !v10 )
      {
LABEL_17:
        *(_BYTE *)(a1 + 81) = 0;
        break;
      }
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v9, v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
}

/*
 * XREFs of ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1803041A8
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1803067C0 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18030318C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::DeliverChainLinkEventInternal(
        __int64 a1,
        int a2)
{
  char v3; // bp
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v3 = 0;
      while ( 1 )
      {
        v8 = 0LL;
        v4 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( *(_BYTE *)(a1 + 81) )
        {
          if ( !v3 )
            break;
        }
        v3 = 1;
        *(_BYTE *)(a1 + 81) = 1;
        if ( !*(_BYTE *)(a1 + 80) )
          goto LABEL_17;
        *(_BYTE *)(a1 + 80) = 0;
        if ( *(_QWORD *)(a1 + 72) )
        {
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v8, (__int64 *)(a1 + 72));
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 72));
          *(_BYTE *)(a1 + 80) = *(_QWORD *)(a1 + 56) != 0LL;
          v6 = 1;
        }
        else
        {
          if ( !*(_QWORD *)(a1 + 56) )
            goto LABEL_17;
          v5 = Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)(a1 + 72), (__int64 *)(a1 + 56));
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v8, v5);
          v6 = 0;
        }
        v7 = v8;
        if ( !v8 )
        {
LABEL_17:
          *(_BYTE *)(a1 + 81) = 0;
          break;
        }
        if ( v4 )
          ReleaseSRWLockExclusive(v4);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v7, v6);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v8);
      }
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v8);
    }
    else if ( a2 == 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, 0LL);
    }
  }
}

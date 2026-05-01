/*
 * XREFs of ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1803067C0
 * Callers:
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x18030302C (--1ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x1803038E0 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1803039F0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1803072BC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run @ 0x1803077D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x180301BD8 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x180301C5C (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 *     ??0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z @ 0x180302E48 (--0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180303148 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@.c)
 *     ?Attach@?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@Z @ 0x180303CA0 (-Attach@-$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVC.c)
 *     ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1803041A8 (-DeliverChainLinkEventInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803070D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_1803070D0.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(__int64 a1)
{
  __int64 *v2; // rsi
  int *v3; // r12
  int *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD); // rcx
  __int64 (__fastcall ***v9)(_QWORD); // rcx
  __int64 i; // rbx
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v2 = (__int64 *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v3 = (int *)(a1 + 64);
    if ( a1 + 16 != a1 + 64 )
    {
      v4 = (int *)(a1 + 32);
      do
      {
        if ( *((_QWORD *)v4 - 2) )
        {
          v5 = 0LL;
          v14 = 0LL;
          v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v6 )
          {
            v7 = Windows::Internal::Shell::Chaining::ChainLinkEventArgs::ChainLinkEventArgs((__int64)v6, *v4);
            Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLinkEventArgs>::Attach(&v14, v7);
            v5 = v14;
          }
          if ( v5 )
          {
            v14 = *((_QWORD *)v4 - 1);
            v8 = (__int64 (__fastcall ***)(_QWORD))(*v2 + 16 + *(int *)(*(_QWORD *)(*v2 + 16) + 8LL));
            v15 = (**v8)(v8);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStart<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              &v15,
              &v14,
              v4);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v4 - 2) + 80LL))(
              *((_QWORD *)v4 - 2),
              *((_QWORD *)v4 - 1),
              v5);
            v14 = *((_QWORD *)v4 - 1);
            v9 = (__int64 (__fastcall ***)(_QWORD))(*v2 + 16 + *(int *)(*(_QWORD *)(*v2 + 16) + 8LL));
            v15 = (**v9)(v9);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStop<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              &v15,
              &v14,
              v4);
          }
          else
          {
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x316,
              (__int64)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
              (const char *)0x8007000ELL);
          }
          v12 = 0LL;
          v11 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(
            (__int64 *)v4 - 2,
            (__int64 *)&v11);
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(
            (__int64 *)v4 - 1,
            (__int64 *)&v11 + 1);
          *v4 = v12;
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11 + 1);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
          if ( v5 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v5);
        }
        v4 += 6;
      }
      while ( v4 - 4 != v3 );
    }
    for ( i = a1 + 64; i != a1 + 80; i += 8LL )
    {
      if ( *(_BYTE *)(i + 4) )
      {
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::DeliverChainLinkEventInternal(
          *v2,
          *(_DWORD *)i);
        *(_QWORD *)i = 0LL;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  }
}

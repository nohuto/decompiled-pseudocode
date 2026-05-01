/*
 * XREFs of ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x180303B14
 * Callers:
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x1803038E0 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1803039F0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV234@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180302880 (--$_Emplace_reallocate@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@-$vector@V-$ComPtr@UI.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x180303664 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::AppendChainLinkInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 *v5; // rdi
  struct IUnknown *v7; // rbp
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rdx
  __int64 *v13; // r14
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v18; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = (struct IUnknown *)a2;
  v3 = a1 + 32;
  v5 = *(__int64 **)(a1 + 32);
  v7 = (struct IUnknown *)a2;
  v8 = (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v5) >> 3;
  if ( v8 )
  {
    v18 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5[v8 - 1] + 48LL))(v5[v8 - 1], &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11F,
        (__int64)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
    if ( !v18 )
    {
      v12 = 288LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
        (const char *)0x80070055LL);
      return 2147942485LL;
    }
    v5 = *(__int64 **)v3;
  }
  v13 = *(__int64 **)(a1 + 40);
  while ( v5 != v13 && !(unsigned int)SHIsSameObject((struct IUnknown *)*v5, v7) )
    ++v5;
  if ( v5 != *(__int64 **)(a1 + 40) )
  {
    v12 = 297LL;
    goto LABEL_19;
  }
  v14 = *(__int64 **)(a1 + 40);
  if ( v14 == *(__int64 **)(a1 + 48) )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>::_Emplace_reallocate<Windows::Internal::Shell::Chaining::IChainLink * &>(
      (__int64 **)v3,
      v14,
      (__int64 *)&v19);
    v7 = v19;
  }
  else
  {
    v15 = *(__int64 **)(a1 + 40);
    *v14 = (__int64)v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    *(_QWORD *)(v3 + 8) += 8LL;
  }
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a3,
      a1,
      v16,
      (__int64)v7,
      2u);
  ++*(_DWORD *)(a1 + 64);
  return 0LL;
}

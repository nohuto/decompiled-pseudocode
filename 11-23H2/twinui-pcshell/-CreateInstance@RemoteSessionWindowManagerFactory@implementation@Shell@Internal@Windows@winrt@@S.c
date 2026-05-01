/*
 * XREFs of ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18017F840
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 *     ??$?0$$V@?$_Ref_count_obj2@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x18017F9E8 (--$-0$$V@-$_Ref_count_obj2@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@.c)
 *     ??$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18017FA88 (--$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 *     ??$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18017FBA0 (--$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18071CFA0 (--$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 *     ??$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18071D03C (--$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManagerFactory::CreateInstance(
        _QWORD *a1,
        int a2)
{
  std::_Ref_count_base **v3; // rax
  std::_Ref_count_base **v4; // rax
  std::_Ref_count_base *v5; // rax
  std::_Ref_count_base **v6; // rax
  std::_Ref_count_base **v7; // rax
  char *v9; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-40h]
  std::_Ref_count_base *v11[2]; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v12[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v13[8]; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v14; // [rsp+68h] [rbp-8h]
  void *v15; // [rsp+80h] [rbp+10h]
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v16; // [rsp+80h] [rbp+10h]

  *(_OWORD *)v12 = 0LL;
  *(_OWORD *)v11 = 0LL;
  if ( a2 == 1 )
  {
    v3 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::BootProviderActivator,>(&v9);
    v12[0] = *v3;
    v12[1] = v3[1];
    *v3 = 0LL;
    v3[1] = 0LL;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    v4 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectionHandler,>(&v9);
    v11[0] = *v4;
    v11[1] = v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
  }
  else
  {
    v15 = operator new(0x58uLL);
    v5 = (std::_Ref_count_base *)std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection>::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection>(v15);
    v9 = (char *)v5 + 16;
    v10 = v5;
    v6 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
                                    v13,
                                    &v9);
    v12[0] = *v6;
    v12[1] = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    v7 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
                                    v13,
                                    &v9);
    v11[0] = *v7;
    v11[1] = v7[1];
    *v7 = 0LL;
    v7[1] = 0LL;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v16 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)operator new(0x130uLL);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager(v16, v12, v11);
  *(_QWORD *)v16 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::`vftable';
  *a1 = (char *)v16 + 16;
  if ( v11[1] )
    std::_Ref_count_base::_Decref(v11[1]);
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
  return a1;
}

/*
 * XREFs of ??$make_shared@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18017FA88
 * Callers:
 *     ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18017F840 (-CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@?$_Ref_count_obj2@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18017FB38 (--$-0AEAV-$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  std::_Ref_count_base **v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // r9
  volatile signed __int32 *v9; // rbx
  std::_Ref_count_base *v10; // rax
  std::_Ref_count_base *v11; // rcx
  void *v13; // [rsp+50h] [rbp+8h]

  v13 = operator new(0x70uLL);
  v4 = std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator>::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator>(
         v13,
         a2);
  a1[1] = v4;
  v5 = v4 + 16;
  *a1 = v4 + 16;
  if ( v4 != -16 )
  {
    v6 = (std::_Ref_count_base **)(v4 + 56);
    v7 = *(_QWORD *)(v4 + 56);
    v8 = (__int64 *)(v4 + 48);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      if ( v4 )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v9 = (volatile signed __int32 *)a1[1];
      if ( v9 )
      {
        v10 = (std::_Ref_count_base *)a1[1];
        _InterlockedIncrement(v9 + 3);
      }
      else
      {
        v10 = 0LL;
        v5 = 0LL;
      }
      *v8 = v5;
      v11 = *v6;
      *v6 = v10;
      if ( v11 )
        std::_Ref_count_base::_Decwref(v11);
      if ( v9 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
    }
  }
  return a1;
}

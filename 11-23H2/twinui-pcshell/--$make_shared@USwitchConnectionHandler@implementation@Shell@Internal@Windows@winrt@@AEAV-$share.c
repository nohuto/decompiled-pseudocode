/*
 * XREFs of ??$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18017FBA0
 * Callers:
 *     ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18017F840 (-CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18009E8C8 (--0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr@UR.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection> &>(
        _QWORD *a1,
        _QWORD *a2)
{
  char *v4; // rsi
  char *v5; // rdi
  std::_Ref_count_base **v6; // rcx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  std::_Ref_count_base *v9; // rax
  std::_Ref_count_base *v10; // rdx

  v4 = (char *)operator new(0xC0uLL);
  *(_OWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::`vftable';
  v5 = v4 + 16;
  winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchConnectionHandler(
    (__int64)(v4 + 16),
    a2);
  *a1 = v4 + 16;
  a1[1] = v4;
  if ( v4 != (char *)-16LL )
  {
    v6 = (std::_Ref_count_base **)(v4 + 96);
    v7 = *((_QWORD *)v4 + 12);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
      v8 = (volatile signed __int32 *)a1[1];
      if ( v8 )
      {
        v9 = (std::_Ref_count_base *)a1[1];
        _InterlockedIncrement(v8 + 3);
      }
      else
      {
        v9 = 0LL;
        v5 = 0LL;
      }
      *((_QWORD *)v4 + 11) = v5;
      v10 = *v6;
      *v6 = v9;
      if ( v10 )
        std::_Ref_count_base::_Decwref(v10);
      if ( v8 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    }
  }
  return a1;
}

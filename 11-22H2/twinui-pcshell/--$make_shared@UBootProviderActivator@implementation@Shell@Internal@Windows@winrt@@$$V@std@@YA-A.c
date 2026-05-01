/*
 * XREFs of ??$make_shared@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18071D03C
 * Callers:
 *     ?CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSessionWindowManager@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18017F840 (-CreateInstance@RemoteSessionWindowManagerFactory@implementation@Shell@Internal@Windows@winrt@@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$0A@@?$weak_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18071CE5C (--$-0USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$0A@@-$weak_ptr@USwit.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::BootProviderActivator,>(
        _QWORD *a1)
{
  char *v2; // rcx
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  std::_Ref_count_base *v9; // rcx
  _QWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v12[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = (char *)operator new(0x58uLL);
  *(_OWORD *)v2 = 0LL;
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::`vftable';
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 0LL;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 8) = 0LL;
  *((_QWORD *)v2 + 9) = 0LL;
  *((_QWORD *)v2 + 2) = &winrt::Windows::Internal::Shell::implementation::BootProviderActivator::`vftable';
  v2[80] = 0;
  *a1 = v2 + 16;
  a1[1] = v2;
  if ( v2 != (char *)-16LL )
  {
    v3 = *((_QWORD *)v2 + 7);
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      _InterlockedAdd((volatile signed __int32 *)v2 + 2, 1u);
      v4 = (std::_Ref_count_base *)a1[1];
      v11[1] = v4;
      v11[0] = v2 + 16;
      v5 = std::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>(
             v12,
             v11);
      v7 = *v5;
      *v5 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v6 + 32) = v7;
      v8 = v5[1];
      v5[1] = *(_QWORD *)(v6 + 40);
      v9 = v12[1];
      *(_QWORD *)(v6 + 40) = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
    }
  }
  return a1;
}

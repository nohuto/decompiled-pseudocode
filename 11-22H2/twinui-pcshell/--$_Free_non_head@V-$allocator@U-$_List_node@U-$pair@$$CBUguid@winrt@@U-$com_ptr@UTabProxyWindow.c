/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800357FC
 * Callers:
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800356C0 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@2@@std@@QEAA@XZ @ 0x180639ACC (--1-$list@U-$pair@$$CBUguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Wind.c)
 *     ??1?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAA@XZ @ 0x180639B24 (--1-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      if ( v3[4] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3 + 4);
      result = (_QWORD *)std::_Deallocate<16,0>(v3, 40LL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}

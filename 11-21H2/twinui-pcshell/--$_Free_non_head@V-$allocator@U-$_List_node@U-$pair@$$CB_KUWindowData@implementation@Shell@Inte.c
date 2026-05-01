/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180180FA8
 * Callers:
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800F4098 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x180577BA0 (--1-$list@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V-$alloca.c)
 * Callees:
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18001B538 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      winrt::Windows::Internal::Shell::implementation::WindowData::~WindowData((winrt::Windows::Internal::Shell::implementation::WindowData *)(v2 + 3));
      std::_Deallocate<16,0>(v2, 0xE8uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}

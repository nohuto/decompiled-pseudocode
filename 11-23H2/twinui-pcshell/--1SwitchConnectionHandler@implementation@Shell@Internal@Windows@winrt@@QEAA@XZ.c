/*
 * XREFs of ??1SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18071D4F4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18071D910 (-_Destroy@-$_Ref_count_obj2@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18070A768 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@UHostProcessData@impleme.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::~SwitchConnectionHandler(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler *this)
{
  __int64 *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx

  v2 = (__int64 *)((char *)this + 168);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 19) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 19);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 16);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v7 )
    std::_Ref_count_base::_Decwref(v7);
  std::_Deallocate<16,0>(*((void **)this + 4), (*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>>>(
    v8,
    *((_QWORD ***)this + 2));
  std::_Deallocate<16,0>(*((void **)this + 2), 0x28uLL);
}

/*
 * XREFs of ??1ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18071D394
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchConnectionHandler_::_1_::dtor$0 @ 0x1802B7F10 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchConnectionHandl.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::BootConnectionHandler_::_1_::dtor$0 @ 0x18072EE3F (_winrt--Windows--Internal--Shell--implementation--BootConnectionHandler--BootConnectionHandler_-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18070A768 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@UHostProcessData@impleme.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ConnectionHandler::~ConnectionHandler(void **this)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(this[4], ((_BYTE *)this[5] - (_BYTE *)this[4]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[4] = 0LL;
  this[5] = 0LL;
  this[6] = 0LL;
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>>>(
    v2,
    (_QWORD **)this[2]);
  std::_Deallocate<16,0>(this[2], 0x28uLL);
}

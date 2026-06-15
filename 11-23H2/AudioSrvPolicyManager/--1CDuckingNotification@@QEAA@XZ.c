/*
 * XREFs of ??1CDuckingNotification@@QEAA@XZ @ 0x18001BEF4
 * Callers:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x18001B824 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FB98 (--$construct@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotifica.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180020F40 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800210A0 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180021220 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800218C0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     _std::_Default_allocator_traits_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::construct_CLockedList_CDuckingNotification_1_0_::LockedListEntry_CDuckingNotification_&_int__::_1_::dtor$1 @ 0x180048A5E (_std--_Default_allocator_traits_std--allocator_CLockedList_CDuckingNotification_1_0_--LockedList.c)
 *     _CDuckingManager::AddDuckingNotification_::_1_::dtor$0 @ 0x180048AFB (_CDuckingManager--AddDuckingNotification_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::dtor$0 @ 0x180048B50 (_CLockedList_CDuckingNotification_1_0_--AddInterface_--_1_--dtor$0.c)
 *     _CDuckingManager::DeleteDuckingNotification_::_1_::dtor$0 @ 0x180048B9E (_CDuckingManager--DeleteDuckingNotification_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001BD38 (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDuckingNotification::~CDuckingNotification(CDuckingNotification *this)
{
  wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>((__int64 *)this + 6);
  std::wstring::~wstring((_QWORD *)this + 2);
}

/*
 * XREFs of ??1CDuckingNotification@@QEAA@XZ @ 0x180008D30
 * Callers:
 *     _std::_Default_allocator_traits_std::allocator_CLockedList_CDuckingNotification_1_0_::LockedListEntry___::construct_CLockedList_CDuckingNotification_1_0_::LockedListEntry_CDuckingNotification_&_int__::_1_::dtor$4 @ 0x180044BDD (_std--_Default_allocator_traits_std--allocator_CLockedList_CDuckingNotification_1_0_--LockedList.c)
 *     _CDuckingManager::DeleteDuckingNotification_::_1_::dtor$0 @ 0x180044CF8 (_CDuckingManager--DeleteDuckingNotification_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::dtor$0 @ 0x180044D4D (_CLockedList_CDuckingNotification_1_0_--AddInterface_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 */

void __fastcall CDuckingNotification::~CDuckingNotification(CDuckingNotification *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v2);
  v3 = *((_QWORD *)this + 5);
  if ( v3 >= 8 )
    std::_Deallocate<16,0>(*((char **)this + 2), 2 * v3 + 2);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_WORD *)this + 8) = 0;
}

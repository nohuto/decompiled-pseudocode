/*
 * XREFs of ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18000F05C
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18000F010 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18003F250 (--$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(__int64 a1, int a2)
{
  _DWORD *i; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v8 = a1;
  for ( i = *(_DWORD **)(a1 + 40); i != *(_DWORD **)(a1 + 48); i += 2 )
  {
    if ( *i == a2 )
    {
      ++i[1];
      goto LABEL_6;
    }
  }
  try
  {
    std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::emplace_back<CMasterVolumeNotificationProcess &,int>();
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x89,
                           (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                           v6);
  }
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
  return 0LL;
}

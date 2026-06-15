/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800D00AC
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800D04D0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@?$vector@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@0Uforward_iterator_tag@1@@Z @ 0x1800CF64C (--$_Assign_range@PEAULockedListEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, _QWORD))
{
  const char *v4; // r9
  void *v5; // rcx
  unsigned int *i; // rbx
  unsigned int *v7; // rdi
  unsigned __int128 v8; // kr10_16
  __int64 result; // rax
  unsigned __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  try
  {
    v13 = (struct _RTL_CRITICAL_SECTION *)a1;
    if ( &v10 != (unsigned __int128 *)(a1 + 40) )
      std::vector<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry>>::_Assign_range<CLockedList<CMasterVolumeNotificationProcess,1,0>::LockedListEntry *>(
        (__int64)&v10,
        *(unsigned __int64 **)(a1 + 40),
        *(unsigned __int64 **)(a1 + 48));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
    v8 = v10;
    v7 = (unsigned int *)(v8 >> 64);
    v5 = (void *)v8;
    for ( i = (unsigned int *)v10; i != v7; i += 2 )
    {
      (**a2)(a2, *i);
      v5 = (void *)v10;
    }
    if ( v5 )
      std::_Deallocate<16,0>(v5, (v11 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDF,
                           (int)"avcore\\audiocore\\Include\\LockedList.h",
                           v4);
  }
  return result;
}

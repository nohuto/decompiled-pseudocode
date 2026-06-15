/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180010ABC
 * Callers:
 *     _lambda_83a58deb585061dd6d0ac9f5480fe44e_::operator() @ 0x18000FCE0 (_lambda_83a58deb585061dd6d0ac9f5480fe44e_--operator().c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18001131C (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18001153C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180011700 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Copy_assign@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x180012AF8 (-_Copy_assign@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  const char *v4; // r9
  _QWORD *v5; // rcx
  unsigned __int128 v6; // kr10_16
  __int64 v7; // rsi
  void (__fastcall *v8)(_QWORD, __int64 *); // r14
  __int64 v9; // rdx
  bool i; // zf
  signed __int32 v11; // eax
  __int64 result; // rax
  unsigned __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-50h] BYREF
  int v16; // [rsp+40h] [rbp-48h]
  _QWORD v17[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    if ( &v13 != (unsigned __int128 *)&lpCriticalSection[1] )
      std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::_Copy_assign(&v13);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v5 = (_QWORD *)v13;
    v6 = v13;
    v7 = *((_QWORD *)&v13 + 1);
    while ( (_QWORD)v6 != v7 )
    {
      v8 = **a2;
      v15 = *(_QWORD *)v6;
      v16 = *(_DWORD *)(v6 + 8);
      std::wstring::wstring(v17, v6 + 16);
      v9 = *(_QWORD *)(v6 + 48);
      v17[4] = v9;
      for ( i = v9 == 0; !i; i = v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 12), v11 + 1, v11) )
      {
        v11 = *(_DWORD *)(v9 + 12);
        if ( v11 == 0x7FFFFFFF )
          break;
      }
      v8(a2, &v15);
      v5 = (_QWORD *)v13;
      v6 = __PAIR128__(*((unsigned __int64 *)&v13 + 1), (__int64)v6 + 64);
    }
    if ( v5 )
    {
      std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
        v5,
        *((_QWORD **)&v6 + 1));
      std::_Deallocate<16,0>((char *)v13, (v14 - v13) & 0xFFFFFFFFFFFFFFC0uLL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDF,
                           (int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
                           v4);
  }
  return result;
}

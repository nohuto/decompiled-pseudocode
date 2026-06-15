/*
 * XREFs of ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800210A0
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180020F40 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001BEF4 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??$emplace_back@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA?A_TAEAVCDuckingNotification@@$$QEAH@Z @ 0x18001FBF8 (--$emplace_back@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNot.c)
 *     ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x180020380 (--8@YA_NAEAVCDuckingNotification@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::AddInterface(__int64 a1, CDuckingNotification *a2)
{
  __int64 i; // rcx
  __int64 v5; // rcx
  const char *v6; // r9
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+28h] [rbp-20h] BYREF
  CDuckingNotification *v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v9 = (struct _RTL_CRITICAL_SECTION *)a1;
  for ( i = *(_QWORD *)(a1 + 40); i != *(_QWORD *)(a1 + 48); i = v5 + 64 )
  {
    if ( operator==(i, (__int64)a2) )
    {
      ++*(_DWORD *)(v5 + 56);
      goto LABEL_6;
    }
  }
  try
  {
    v8 = 1;
    std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::emplace_back<CDuckingNotification &,int>(
      a1 + 40,
      a2,
      (int *)&v8);
  }
  catch ( ... )
  {
    v8 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x89,
           (int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
           v6);
    CDuckingNotification::~CDuckingNotification(v10);
    return v8;
  }
LABEL_6:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  CDuckingNotification::~CDuckingNotification(a2);
  return 0LL;
}

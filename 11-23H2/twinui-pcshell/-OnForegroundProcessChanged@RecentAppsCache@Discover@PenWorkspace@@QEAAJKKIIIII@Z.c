/*
 * XREFs of ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x180153390
 * Callers:
 *     ?OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z @ 0x180153380 (-OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAX_K@Z @ 0x1801534FC (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803900BC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // r14
  void *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  const char *v14; // r9
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16 = __PAIR64__(a3, a2);
  v9 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  if ( this[15].Ptr <= (char *)this[17].Ptr + 1 )
    std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Growmap(&this[13]);
  v10 = (__int64)this[15].Ptr - 1;
  v11 = (void *)((__int64)this[16].Ptr & v10);
  this[16].Ptr = v11;
  v12 = ((unsigned __int64)this[17].Ptr + (unsigned __int64)v11) & v10;
  if ( !*((_QWORD *)this[14].Ptr + v12) )
    *((_QWORD *)this[14].Ptr + v12) = std::_Allocate<16,std::_Default_allocate_traits,0>(0xCuLL);
  v13 = *((_QWORD *)this[14].Ptr + v12);
  *(_QWORD *)v13 = v16;
  *(_DWORD *)(v13 + 8) = a8;
  ++this[17].Ptr;
  if ( !SetEvent(this[19].Ptr) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x92D,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v14);
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return 0LL;
}

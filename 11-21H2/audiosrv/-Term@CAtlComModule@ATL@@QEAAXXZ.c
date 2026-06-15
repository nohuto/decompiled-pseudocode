/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x18005E1E4
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlComModule__ @ 0x180072C20 (ATL--_dynamic_atexit_destructor_for___AtlComModule__.c)
 *     ??1?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ @ 0x1800C2594 (--1-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *i; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx

  if ( *(_DWORD *)this )
  {
    for ( i = (__int64 *)*((_QWORD *)this + 2); (unsigned __int64)i < *((_QWORD *)this + 3); ++i )
    {
      v3 = *i;
      if ( *i )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    *(_DWORD *)this = 0;
  }
}

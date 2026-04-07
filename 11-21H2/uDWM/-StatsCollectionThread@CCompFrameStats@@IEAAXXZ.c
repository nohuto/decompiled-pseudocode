/*
 * XREFs of ?StatsCollectionThread@CCompFrameStats@@IEAAXXZ @ 0x180002834
 * Callers:
 *     ?ThreadEntryPoint@CCompFrameStats@@KAKPEAX@Z @ 0x180002740 (-ThreadEntryPoint@CCompFrameStats@@KAKPEAX@Z.c)
 * Callees:
 *     ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C (-CollectStats@CCompFrameStats@@IEAAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Invalidate@CCompFrameStats@@IEAAXXZ @ 0x18010AB50 (-Invalidate@CCompFrameStats@@IEAAXXZ.c)
 */

void __fastcall __noreturn CCompFrameStats::StatsCollectionThread(CCompFrameStats *this)
{
  HMODULE v2; // rbx

  while ( !*((_BYTE *)this + 13) )
  {
    if ( !WaitForSingleObject(*((HANDLE *)this + 5), 0xFFFFFFFF) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
      CCompFrameStats::CollectStats(this, *((_QWORD *)this + 13));
      if ( *((_BYTE *)this + 13) && *((_QWORD *)this + 12) < *((_QWORD *)this + 11) )
        CCompFrameStats::Invalidate(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    }
  }
  if ( *((_BYTE *)this + 12) )
    (*(void (__fastcall **)(CCompFrameStats *))(*(_QWORD *)this + 208LL))(this);
  v2 = (HMODULE)*((_QWORD *)this + 3);
  (*(void (__fastcall **)(CCompFrameStats *))(*(_QWORD *)this + 16LL))(this);
  FreeLibraryAndExitThread(v2, 0);
}

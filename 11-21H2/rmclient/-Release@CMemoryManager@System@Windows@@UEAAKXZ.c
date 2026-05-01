/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x1800073A0
 * Callers:
 *     ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180015D70 (-Release@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x180015D90 (-Release@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x180015DB0 (-Release@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x180015DD0 (-Release@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x180015DF0 (-Release@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::Release(Windows::System::CMemoryManager *this)
{
  signed __int32 i; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx

  for ( i = *((_DWORD *)this + 27); i != 0x7FFFFFFF; i = *((_DWORD *)this + 27) )
  {
    if ( i == _InterlockedCompareExchange((volatile signed __int32 *)this + 27, i - 1, i) )
      break;
  }
  v2 = *((_DWORD *)this + 32);
  v3 = i - 1;
  if ( v3 )
  {
    if ( (v2 & 4) == 0 && v3 == 1 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  else
  {
    (*(void (__fastcall **)(Windows::System::CMemoryManager *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
    if ( (v2 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  return v3;
}

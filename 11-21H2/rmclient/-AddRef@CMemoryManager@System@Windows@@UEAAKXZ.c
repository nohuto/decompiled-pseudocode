/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180007420
 * Callers:
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180015870 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x180015890 (-AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x1800158B0 (-AddRef@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x1800158D0 (-AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x1800158F0 (-AddRef@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(Windows::System::CMemoryManager *this)
{
  signed __int32 v1; // r8d
  unsigned int v2; // ebx

  v1 = *((_DWORD *)this + 27);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    while ( v1 != _InterlockedCompareExchange((volatile signed __int32 *)this + 27, v1 + 1, v1) )
    {
      v1 = *((_DWORD *)this + 27);
      if ( v1 == 0x7FFFFFFF )
        goto LABEL_4;
    }
    v2 = v1 + 1;
  }
LABEL_4:
  if ( (*((_BYTE *)this + 128) & 4) == 0 && v2 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v2;
}

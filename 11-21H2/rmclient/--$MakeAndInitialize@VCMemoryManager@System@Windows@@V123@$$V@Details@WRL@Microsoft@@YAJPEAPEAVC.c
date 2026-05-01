/*
 * XREFs of ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x1800033A4
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800032F0 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 * Callees:
 *     ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x180003440 (--0CMemoryManager@System@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000B064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager,>(
        __int64 *a1)
{
  unsigned int v2; // ebx
  Windows::System::CMemoryManager *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi

  v2 = 0;
  *a1 = 0LL;
  v3 = (Windows::System::CMemoryManager *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = Windows::System::CMemoryManager::CMemoryManager(v3);
    v5 = v4;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}

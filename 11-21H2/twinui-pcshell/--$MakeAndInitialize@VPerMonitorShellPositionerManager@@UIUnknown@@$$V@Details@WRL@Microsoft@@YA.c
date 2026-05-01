/*
 * XREFs of ??$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180162F8C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPerMonitorShellPositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180162F10 (-CreateInstance@-$SimpleClassFactory@VPerMonitorShellPositionerManager@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     ?RuntimeClassInitialize@PerMonitorShellPositionerManager@@QEAAJXZ @ 0x1800AE53C (-RuntimeClassInitialize@PerMonitorShellPositionerManager@@QEAAJXZ.c)
 *     ??0PerMonitorShellPositionerManager@@QEAA@XZ @ 0x180163050 (--0PerMonitorShellPositionerManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PerMonitorShellPositionerManager,IUnknown,>(_QWORD *a1)
{
  PerMonitorShellPositionerManager *v2; // rax
  PerMonitorShellPositionerManager *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (PerMonitorShellPositionerManager *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = PerMonitorShellPositionerManager::PerMonitorShellPositionerManager(v2);
    v4 = PerMonitorShellPositionerManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(PerMonitorShellPositionerManager *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(PerMonitorShellPositionerManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}

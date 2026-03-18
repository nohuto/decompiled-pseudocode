/*
 * XREFs of ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0028A10
 * Callers:
 *     FxInitialize @ 0x1C0027E24 (FxInitialize.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     RtlStringCopyWorkerA @ 0x1C0028BB4 (RtlStringCopyWorkerA.c)
 *     ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0028F20 (-FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C003511C (WPP_IFR_SF_Dd.c)
 */

void __fastcall FxIFRStart(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *a2,
        _DRIVER_OBJECT *RegistryPath)
{
  unsigned int _a1; // edi
  __int64 Pool2; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  void *v8; // r10
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  if ( !FxLibraryGlobals.IfrDisabled )
  {
    if ( FxDriverGlobals )
    {
      if ( !FxDriverGlobals->WdfLogHeader )
      {
        _a1 = FxIFRGetSize(FxDriverGlobals, a2);
        Pool2 = ExAllocatePool2(64LL, _a1, 1733064774LL);
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 28) = 0;
          *(_QWORD *)(Pool2 + 16) = Pool2 + 72;
          *(_DWORD *)(Pool2 + 24) = _a1 - 72;
          *(_GUID *)Pool2 = WdfTraceGuid;
          RtlStringCopyWorkerA(
            (char *)(Pool2 + 36),
            v6,
            v7,
            FxDriverGlobals->Public.DriverName,
            (unsigned __int64)traceGuid);
          FxDriverGlobals->WdfLogHeader = v8;
          _InterlockedIncrement(&FxDriverGlobals->WdfLogHeaderRefCount);
          WPP_IFR_SF_(FxDriverGlobals, 4u, 0x11u, 0xAu, WPP_tracing_cpp_Traceguids);
          if ( _a1 > 0x1000 )
            WPP_IFR_SF_Dd(FxDriverGlobals, 4u, 0x11u, 0xBu, WPP_tracing_cpp_Traceguids, _a1, _a1 >> 12);
        }
      }
    }
  }
}

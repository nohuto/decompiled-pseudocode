/*
 * XREFs of ??0Lockable@Engine@Spectre@@QEAA@W4ThreadingMode@012@@Z @ 0x180029EDC
 * Callers:
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 *     ??0IRenderOutput@Engine@Spectre@@IEAA@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18002B3C4 (--0IRenderOutput@Engine@Spectre@@IEAA@V-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ??0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@5@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@5@@Z @ 0x180030FC8 (--0Engine@0Spectre@@IEAA@W4ThreadingMode@Lockable@01@V-$shared_ptr@VPerformanceLogger@Utils@Spec.c)
 *     ??0Scene@Engine@Spectre@@AEAA@PEAV112@@Z @ 0x18003FB60 (--0Scene@Engine@Spectre@@AEAA@PEAV112@@Z.c)
 *     ??0Scene@Engine@Spectre@@AEAA@PEAV112@W4ThreadingMode@Lockable@12@@Z @ 0x18003FC0C (--0Scene@Engine@Spectre@@AEAA@PEAV112@W4ThreadingMode@Lockable@12@@Z.c)
 * Callees:
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

__int64 __fastcall Spectre::Engine::Lockable::Lockable(__int64 a1, int a2)
{
  Spectre::Utils::SharedMutex::SharedMutex((Spectre::Utils::SharedMutex *)a1);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}

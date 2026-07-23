/*
 * XREFs of HalpReenableAcpi @ 0x140A96FCC
 * Callers:
 *     HalpPowerEarlyRestore @ 0x14051CB20 (HalpPowerEarlyRestore.c)
 *     HaliAcpiSleep @ 0x140528490 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpReenableAcpi(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  (*(void (__fastcall **)(__int64))(PmAcpiDispatchTable + 16))(a1);
  LOBYTE(v1) = 1;
  return (*(__int64 (__fastcall **)(__int64))(PmAcpiDispatchTable + 8))(v1);
}

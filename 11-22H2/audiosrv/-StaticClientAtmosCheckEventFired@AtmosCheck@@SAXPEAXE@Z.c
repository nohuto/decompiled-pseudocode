/*
 * XREFs of ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x180065CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180034A10 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 */

void __fastcall AtmosCheck::StaticClientAtmosCheckEventFired(AtmosCheck *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  AtmosCheck::Trace(a1, "Global\\Client_Atmos_Check_Event is signaled", 0LL, a4);
  LOBYTE(v5) = 1;
  *((_DWORD *)a1 + 46) = 8;
  AtmosCheck::PerformLicenseCheck(a1, v5, v6, v7);
}

/*
 * XREFs of StorPortGetBusData @ 0x1C0043220
 * Callers:
 *     StorPortGetBusDataVrfy @ 0x1C0095210 (StorPortGetBusDataVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorPortGetBusData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *Adapter; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r11d

  Adapter = RaidpPortGetAdapter(a1);
  if ( Adapter )
    return (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))Adapter + 89))(*((_QWORD *)Adapter + 83), v7, a5);
  return v6;
}

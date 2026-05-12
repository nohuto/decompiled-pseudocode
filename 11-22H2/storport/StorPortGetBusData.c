/*
 * XREFs of StorPortGetBusData @ 0x1C0045E60
 * Callers:
 *     StorPortGetBusDataVrfy @ 0x1C00B1210 (StorPortGetBusDataVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorPortGetBusData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *Adapter; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r11d

  Adapter = RaidpPortGetAdapter(a1);
  if ( Adapter )
    return (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))Adapter + 90))(*((_QWORD *)Adapter + 84), v7, a5);
  return v6;
}

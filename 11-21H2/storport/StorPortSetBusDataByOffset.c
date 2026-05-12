/*
 * XREFs of StorPortSetBusDataByOffset @ 0x1C0043F90
 * Callers:
 *     StorPortSetBusDataByOffsetVrfy @ 0x1C0095780 (StorPortSetBusDataByOffsetVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorPortSetBusDataByOffset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  _DWORD *Adapter; // rax
  unsigned int v8; // r9d
  unsigned int v9; // r11d

  Adapter = RaidpPortGetAdapter(a1);
  if ( Adapter )
    return (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))Adapter + 88))(
             *((_QWORD *)Adapter + 83),
             v9,
             a5,
             a6,
             a7);
  return v8;
}

/*
 * XREFs of DmrGetNextDrhdDeviceScope @ 0x14037F320
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037E8B4 (HalpIvtProcessDrhdEntry.c)
 *     DmrFindDrhdForDeviceScope @ 0x14037F020 (DmrFindDrhdForDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x14037F22C (DmrValidateDeviceScope.c)
 * Callees:
 *     DmrGetNextDeviceScope @ 0x14037F470 (DmrGetNextDeviceScope.c)
 */

__int64 __fastcall DmrGetNextDrhdDeviceScope(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v3 <= a1 )
    return 0LL;
  else
    return DmrGetNextDeviceScope(a1 + 16, v3, a2);
}

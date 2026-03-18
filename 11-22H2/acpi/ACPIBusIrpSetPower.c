/*
 * XREFs of ACPIBusIrpSetPower @ 0x1C00027A0
 * Callers:
 *     ACPICMButtonSetPower @ 0x1C0018C10 (ACPICMButtonSetPower.c)
 * Callees:
 *     ACPIDockIrpSetDevicePower @ 0x1C0002734 (ACPIDockIrpSetDevicePower.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0016FF4 (ACPIBusIrpSetSystemPower.c)
 */

__int64 __fastcall ACPIBusIrpSetPower(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v2 + 16) )
    ACPIDockIrpSetDevicePower((ULONG_PTR)a1, a2);
  else
    ACPIBusIrpSetSystemPower(a1, (PIRP *)a2);
  return 259LL;
}

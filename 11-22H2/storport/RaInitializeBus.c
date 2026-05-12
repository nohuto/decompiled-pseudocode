/*
 * XREFs of RaInitializeBus @ 0x1C00A82CC
 * Callers:
 *     RaidAdapterConfigureResources @ 0x1C0034B08 (RaidAdapterConfigureResources.c)
 *     RaidAdapterHack @ 0x1C0035B8C (RaidAdapterHack.c)
 * Callees:
 *     RaQueryInterface @ 0x1C00575C0 (RaQueryInterface.c)
 */

__int64 __fastcall RaInitializeBus(bool *a1, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  result = RaQueryInterface(a2, (unsigned __int64)&GUID_BUS_INTERFACE_STANDARD, 0x40u, (__int64)a2, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}

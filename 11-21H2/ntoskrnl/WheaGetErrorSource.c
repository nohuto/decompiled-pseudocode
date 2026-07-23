/*
 * XREFs of WheaGetErrorSource @ 0x140643590
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 */

__int64 __fastcall WheaGetErrorSource(unsigned int a1)
{
  __int64 v1; // rax

  v1 = sub_140643F2C(&unk_140CE1A98, a1);
  return (v1 + 96) & -(__int64)(v1 != 0);
}

/*
 * XREFs of IoGetIommuInterfaceEx @ 0x140864A70
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall IoGetIommuInterfaceEx(__int64 a1, __int64 a2)
{
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  return sub_14042A5E0(a1, a2);
}

/*
 * XREFs of sub_1403A374C @ 0x1403A374C
 * Callers:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1403B51C4 @ 0x1403B51C4 (sub_1403B51C4.c)
 * Callees:
 *     sub_1403A379C @ 0x1403A379C (sub_1403A379C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403A374C(IRP *a1)
{
  if ( (unsigned __int8)sub_1403A379C(a1) )
    return 0LL;
  else
    return sub_14042A5E0(a1->Tail.Overlay.CurrentStackLocation->DeviceObject, a1);
}

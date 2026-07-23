/*
 * XREFs of sub_14066960C @ 0x14066960C
 * Callers:
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_140668C60 @ 0x140668C60 (sub_140668C60.c)
 *     sub_140668CE0 @ 0x140668CE0 (sub_140668CE0.c)
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 *     sub_1406B9250 @ 0x1406B9250 (sub_1406B9250.c)
 *     sub_1406B94DC @ 0x1406B94DC (sub_1406B94DC.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall sub_14066960C(__int64 a1)
{
  ExReleasePushLockEx(*(_QWORD *)a1 + 296LL, 0LL);
  if ( *(_BYTE *)(a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a1, 0x554C624Fu);
    *(_BYTE *)(a1 + 22) = 0;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 21) = 0;
  KeLeaveCriticalRegion();
}

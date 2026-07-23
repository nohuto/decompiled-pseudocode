/*
 * XREFs of sub_1406D9550 @ 0x1406D9550
 * Callers:
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_14037592C @ 0x14037592C (sub_14037592C.c)
 *     IoRegisterPriorityCallback @ 0x1403C75D0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140557E20 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056A090 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x14056A800 (KeRegisterBoundCallback.c)
 *     sub_140639B54 @ 0x140639B54 (sub_140639B54.c)
 *     sub_14064FB60 @ 0x14064FB60 (sub_14064FB60.c)
 *     sub_14064FD74 @ 0x14064FD74 (sub_14064FD74.c)
 *     sub_14064FFEC @ 0x14064FFEC (sub_14064FFEC.c)
 *     sub_1406500D8 @ 0x1406500D8 (sub_1406500D8.c)
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 *     sub_1406509E0 @ 0x1406509E0 (sub_1406509E0.c)
 *     sub_1406509F8 @ 0x1406509F8 (sub_1406509F8.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_140650E30 @ 0x140650E30 (sub_140650E30.c)
 *     sub_140650ED8 @ 0x140650ED8 (sub_140650ED8.c)
 *     sub_140651480 @ 0x140651480 (sub_140651480.c)
 *     sub_14065193C @ 0x14065193C (sub_14065193C.c)
 *     sub_140651C24 @ 0x140651C24 (sub_140651C24.c)
 *     sub_140651FB8 @ 0x140651FB8 (sub_140651FB8.c)
 *     sub_140652080 @ 0x140652080 (sub_140652080.c)
 *     sub_140652118 @ 0x140652118 (sub_140652118.c)
 *     sub_1406522B0 @ 0x1406522B0 (sub_1406522B0.c)
 *     sub_140652340 @ 0x140652340 (sub_140652340.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1409B3D44 @ 0x1409B3D44 (sub_1409B3D44.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406D9550(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}

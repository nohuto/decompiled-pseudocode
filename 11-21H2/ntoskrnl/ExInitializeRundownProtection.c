/*
 * XREFs of ExInitializeRundownProtection @ 0x1402A0840
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403C75D0 (IoRegisterPriorityCallback.c)
 *     sub_1403D6F40 @ 0x1403D6F40 (sub_1403D6F40.c)
 *     sub_140419DA0 @ 0x140419DA0 (sub_140419DA0.c)
 *     sub_1405264A0 @ 0x1405264A0 (sub_1405264A0.c)
 *     sub_1405E4244 @ 0x1405E4244 (sub_1405E4244.c)
 *     sub_140681FE4 @ 0x140681FE4 (sub_140681FE4.c)
 *     sub_14068AF4C @ 0x14068AF4C (sub_14068AF4C.c)
 *     sub_1406BBC4C @ 0x1406BBC4C (sub_1406BBC4C.c)
 *     sub_1406D4D48 @ 0x1406D4D48 (sub_1406D4D48.c)
 *     sub_1406ED88C @ 0x1406ED88C (sub_1406ED88C.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 *     sub_1407D7100 @ 0x1407D7100 (sub_1407D7100.c)
 *     sub_1407D7544 @ 0x1407D7544 (sub_1407D7544.c)
 *     sub_1407D7B88 @ 0x1407D7B88 (sub_1407D7B88.c)
 *     sub_1407DA91C @ 0x1407DA91C (sub_1407DA91C.c)
 *     PoRegisterCoalescingCallback @ 0x140832790 (PoRegisterCoalescingCallback.c)
 *     sub_140832A20 @ 0x140832A20 (sub_140832A20.c)
 *     sub_140833748 @ 0x140833748 (sub_140833748.c)
 *     sub_14084FC2C @ 0x14084FC2C (sub_14084FC2C.c)
 *     ObRegisterCallbacks @ 0x14085AE70 (ObRegisterCallbacks.c)
 *     sub_1409D7A10 @ 0x1409D7A10 (sub_1409D7A10.c)
 *     sub_1409DA570 @ 0x1409DA570 (sub_1409DA570.c)
 *     sub_140A485D4 @ 0x140A485D4 (sub_140A485D4.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B08E90 @ 0x140B08E90 (sub_140B08E90.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 *     sub_140B23F80 @ 0x140B23F80 (sub_140B23F80.c)
 *     sub_140B25808 @ 0x140B25808 (sub_140B25808.c)
 *     sub_140B2FABC @ 0x140B2FABC (sub_140B2FABC.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializeRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  RunRef->Count = 0LL;
}

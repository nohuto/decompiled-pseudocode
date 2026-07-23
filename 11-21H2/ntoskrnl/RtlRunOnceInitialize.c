/*
 * XREFs of RtlRunOnceInitialize @ 0x1407F3B30
 * Callers:
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 *     sub_14036FB38 @ 0x14036FB38 (sub_14036FB38.c)
 *     sub_1403D69E8 @ 0x1403D69E8 (sub_1403D69E8.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B01B6C @ 0x140B01B6C (sub_140B01B6C.c)
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 *     sub_140B15B24 @ 0x140B15B24 (sub_140B15B24.c)
 *     sub_140B23400 @ 0x140B23400 (sub_140B23400.c)
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Ptr = 0LL;
}

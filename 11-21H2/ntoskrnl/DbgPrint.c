/*
 * XREFs of DbgPrint @ 0x140369BD0
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     sub_1402368F4 @ 0x1402368F4 (sub_1402368F4.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_1403A2480 @ 0x1403A2480 (sub_1403A2480.c)
 *     sub_1403B8198 @ 0x1403B8198 (sub_1403B8198.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_1405E80B0 @ 0x1405E80B0 (sub_1405E80B0.c)
 *     sub_1405E8A08 @ 0x1405E8A08 (sub_1405E8A08.c)
 *     sub_1405E8DF8 @ 0x1405E8DF8 (sub_1405E8DF8.c)
 *     sub_1405E952C @ 0x1405E952C (sub_1405E952C.c)
 *     sub_1405E966C @ 0x1405E966C (sub_1405E966C.c)
 *     sub_1405E9E8C @ 0x1405E9E8C (sub_1405E9E8C.c)
 *     sub_1405EA9DC @ 0x1405EA9DC (sub_1405EA9DC.c)
 *     sub_1405EE268 @ 0x1405EE268 (sub_1405EE268.c)
 *     sub_1405F2358 @ 0x1405F2358 (sub_1405F2358.c)
 *     sub_1405F27C0 @ 0x1405F27C0 (sub_1405F27C0.c)
 *     sub_1406CEBA0 @ 0x1406CEBA0 (sub_1406CEBA0.c)
 *     sub_1406E636C @ 0x1406E636C (sub_1406E636C.c)
 *     RtlDestroyHeap @ 0x1406E9E30 (RtlDestroyHeap.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_14079FD44 @ 0x14079FD44 (sub_14079FD44.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     sub_1407F44F0 @ 0x1407F44F0 (sub_1407F44F0.c)
 *     sub_1408247DC @ 0x1408247DC (sub_1408247DC.c)
 *     sub_14082FBD4 @ 0x14082FBD4 (sub_14082FBD4.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     sub_140910210 @ 0x140910210 (sub_140910210.c)
 *     KeSetTracepoint @ 0x140962320 (KeSetTracepoint.c)
 *     sub_140984330 @ 0x140984330 (sub_140984330.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A4DEAC @ 0x140A4DEAC (sub_140A4DEAC.c)
 *     sub_140A52CF4 @ 0x140A52CF4 (sub_140A52CF4.c)
 *     sub_140A6B59C @ 0x140A6B59C (sub_140A6B59C.c)
 *     sub_140A930EC @ 0x140A930EC (sub_140A930EC.c)
 *     sub_140AF9858 @ 0x140AF9858 (sub_140AF9858.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return sub_140369C50((void *)&File, (__int64)va, 1);
}

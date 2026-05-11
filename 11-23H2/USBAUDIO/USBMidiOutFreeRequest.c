/*
 * XREFs of USBMidiOutFreeRequest @ 0x1C0005930
 * Callers:
 *     USBMidiOutCompleteCallback @ 0x1C0005860 (USBMidiOutCompleteCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall USBMidiOutFreeRequest(_QWORD *Entry)
{
  struct _KSSTREAM_POINTER *v2; // rcx
  __int64 v3; // rbx

  v2 = (struct _KSSTREAM_POINTER *)Entry[5];
  v3 = *((_QWORD *)v2->Pin->Context + 19);
  KsStreamPointerDelete(v2);
  ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v3 + 80), Entry);
}

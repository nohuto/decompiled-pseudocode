/*
 * XREFs of BgSetFrameBufferAccess @ 0x140AEC008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x1403B6810 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140C0E610 = a1;
  *(_QWORD *)&xmmword_140C0E620 = a2;
  *((_QWORD *)&xmmword_140C0E620 + 1) = a3;
}

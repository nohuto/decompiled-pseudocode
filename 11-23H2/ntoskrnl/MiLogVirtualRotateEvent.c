/*
 * XREFs of MiLogVirtualRotateEvent @ 0x140A31664
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140A316B8 (MiReplaceRotateWithDemandZero.c)
 *     MmRotatePhysicalView @ 0x140A31E80 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x14046BD66 (MiLogPerfMemoryEvent.c)
 */

__int64 __fastcall MiLogVirtualRotateEvent(__int64 a1, __int64 a2, char a3)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v4[0] = a1;
  v6 = 0;
  v4[1] = a2;
  v5 = a3 & 0xF;
  return MiLogPerfMemoryEvent(639, 0x20008000u, (__int64)v4, 20, 4200706);
}

/*
 * XREFs of MiLogSectionObjectEvent @ 0x140A2FA2C
 * Callers:
 *     MiSectionDelete @ 0x140721DC0 (MiSectionDelete.c)
 *     MiCreateSection @ 0x140722D00 (MiCreateSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x14046BD66 (MiLogPerfMemoryEvent.c)
 */

__int64 __fastcall MiLogSectionObjectEvent(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = MiSectionControlArea(a1);
  v5[0] = v2;
  v5[1] = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  return MiLogPerfMemoryEvent(648 - (v3 != 0), 0x20400001u, (__int64)v5, 16, 4200706);
}

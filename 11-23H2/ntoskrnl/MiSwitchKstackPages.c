/*
 * XREFs of MiSwitchKstackPages @ 0x14062D678
 * Callers:
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x14062D460 (MiStackTheftIsr.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 */

signed __int64 __fastcall MiSwitchKstackPages(__int64 a1, __int128 *a2)
{
  MiCopyPfnEntryEx(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  return MiSetPfnIdentity(a1, 2);
}

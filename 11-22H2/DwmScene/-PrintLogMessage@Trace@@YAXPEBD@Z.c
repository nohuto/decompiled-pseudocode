/*
 * XREFs of ?PrintLogMessage@Trace@@YAXPEBD@Z @ 0x18001FB00
 * Callers:
 *     ?Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z @ 0x18001D938 (-Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Trace::PrintLogMessage(Trace *this, const char *a2)
{
  printf("%s", (const char *)this);
}

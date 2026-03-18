/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x14095E460
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14087BF7C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DA8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095EE00 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeDeviceMigrationNode(char *P)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi

  v2 = (void *)*((_QWORD *)P + 5);
  if ( v2 )
    ZwClose(v2);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 24));
  v3 = (UNICODE_STRING *)(P + 48);
  v4 = 2LL;
  do
  {
    RtlFreeUnicodeString(v3++);
    --v4;
  }
  while ( v4 );
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 104));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 136));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 10);
  ExFreePoolWithTag(P, 0);
}

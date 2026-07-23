/*
 * XREFs of MiGetSubsectionFromPte @ 0x14064E778
 * Callers:
 *     MiCreateFileOnlyImageFixupList @ 0x140A33C8C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140C65B40 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C65B40;
  return a1 >> 16;
}

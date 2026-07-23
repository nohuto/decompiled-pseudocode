/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14020A3D0
 * Callers:
 *     sub_14020A0D0 @ 0x14020A0D0 (sub_14020A0D0.c)
 *     sub_1402AB040 @ 0x1402AB040 (sub_1402AB040.c)
 *     sub_1402D7D00 @ 0x1402D7D00 (sub_1402D7D00.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     PsGetJobServerSilo @ 0x140377150 (PsGetJobServerSilo.c)
 *     sub_1405E009C @ 0x1405E009C (sub_1405E009C.c)
 *     sub_14066F8EC @ 0x14066F8EC (sub_14066F8EC.c)
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_140682A98 @ 0x140682A98 (sub_140682A98.c)
 *     sub_140687E80 @ 0x140687E80 (sub_140687E80.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_14082C6E0 @ 0x14082C6E0 (sub_14082C6E0.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)sub_14020A400() )
    ;
  return v2;
}

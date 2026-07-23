/*
 * XREFs of RtlIsMultiSessionSku @ 0x1407F4B80
 * Callers:
 *     sub_140372788 @ 0x140372788 (sub_140372788.c)
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407F42D0 @ 0x1407F42D0 (sub_1407F42D0.c)
 *     sub_1407F4B20 @ 0x1407F4B20 (sub_1407F4B20.c)
 *     sub_14084C934 @ 0x14084C934 (sub_14084C934.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409B8F60 (RtlCapabilityCheckForSingleSessionSku.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)sub_140347DB0() + 165) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}

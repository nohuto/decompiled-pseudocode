/*
 * XREFs of IoGetConfigurationInformation @ 0x140811D00
 * Callers:
 *     sub_14060EFB0 @ 0x14060EFB0 (sub_14060EFB0.c)
 *     sub_140B0E1A8 @ 0x140B0E1A8 (sub_140B0E1A8.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 *     sub_140B54800 @ 0x140B54800 (sub_140B54800.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140D3B848;
}

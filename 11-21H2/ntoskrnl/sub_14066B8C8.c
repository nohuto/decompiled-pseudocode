/*
 * XREFs of sub_14066B8C8 @ 0x14066B8C8
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     sub_140258DE8 @ 0x140258DE8 (sub_140258DE8.c)
 *     sub_14025CB88 @ 0x14025CB88 (sub_14025CB88.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_14066B900 @ 0x14066B900 (sub_14066B900.c)
 */

__int64 __fastcall sub_14066B8C8(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return sub_14066B900(a1, CurrentServerSilo, a2);
}

/*
 * XREFs of RtlpFlsInitialize @ 0x14084C4E4
 * Callers:
 *     PspTlsInitialize @ 0x140B66B84 (PspTlsInitialize.c)
 * Callees:
 *     <none>
 */

void RtlpFlsInitialize()
{
  *(_OWORD *)&PspTlsContext = 0LL;
  unk_140D0C2F8 = 0LL;
  *(_OWORD *)(&PspTlsContext + 1) = 0LL;
  *(__int128 *)((char *)&xmmword_140D0C2E8 + 8) = 0LL;
}

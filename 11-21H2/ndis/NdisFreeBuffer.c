/*
 * XREFs of NdisFreeBuffer @ 0x1C0008860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeBuffer(PMDL Mdl)
{
  IoFreeMdl(Mdl);
}

/*
 * XREFs of NdisFreeBuffer @ 0x1C00062A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeBuffer(PMDL Mdl)
{
  IoFreeMdl(Mdl);
}

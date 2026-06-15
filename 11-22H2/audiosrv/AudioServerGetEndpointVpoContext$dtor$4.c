/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$4 @ 0x1801221C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerGetEndpointVpoContext_dtor_4(__int64 a1, __int64 a2)
{
  std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((CHMDManager **)(a2 + 96));
}

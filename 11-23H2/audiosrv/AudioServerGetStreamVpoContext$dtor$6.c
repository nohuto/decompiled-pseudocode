/*
 * XREFs of AudioServerGetStreamVpoContext$dtor$6 @ 0x1801237BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerGetStreamVpoContext_dtor_6(__int64 a1, __int64 a2)
{
  std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((CHMDManager **)(a2 + 96));
}

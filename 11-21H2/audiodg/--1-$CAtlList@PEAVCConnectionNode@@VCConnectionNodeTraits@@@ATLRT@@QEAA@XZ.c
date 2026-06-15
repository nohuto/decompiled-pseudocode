/*
 * XREFs of ??1?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAA@XZ @ 0x14000B150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::~CAtlList<CConnectionNode *,CConnectionNodeTraits>(
        void *a1)
{
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll(a1);
}

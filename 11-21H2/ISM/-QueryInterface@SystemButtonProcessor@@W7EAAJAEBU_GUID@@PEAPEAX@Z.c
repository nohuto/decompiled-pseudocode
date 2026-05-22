/*
 * XREFs of ?QueryInterface@SystemButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemButtonProcessor::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        SystemButtonProcessor **a3)
{
  return SystemButtonProcessor::QueryInterface((SystemButtonProcessor *)(a1 - 8), a2, a3);
}

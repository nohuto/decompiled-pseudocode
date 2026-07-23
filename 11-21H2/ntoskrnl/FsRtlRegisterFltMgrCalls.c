/*
 * XREFs of FsRtlRegisterFltMgrCalls @ 0x140865570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlRegisterFltMgrCalls(__int64 a1)
{
  _InterlockedExchange64(&qword_140D00A28, a1);
}

/*
 * XREFs of RtlWow64SuspendThread @ 0x180001A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64SuspendThread(__int64 a1, __int64 a2)
{
  return RtlpWow64SuspendThread(a1, 0LL, a2);
}

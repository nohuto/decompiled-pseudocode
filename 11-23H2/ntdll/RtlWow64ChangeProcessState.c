/*
 * XREFs of RtlWow64ChangeProcessState @ 0x1800E7980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64ChangeProcessState(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    return NtChangeProcessState();
  else
    return RtlpWow64SuspendProcess(a2, a1);
}

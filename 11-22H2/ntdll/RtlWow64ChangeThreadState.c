/*
 * XREFs of RtlWow64ChangeThreadState @ 0x1800E6670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64ChangeThreadState(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    return NtChangeThreadState();
  else
    return RtlpWow64SuspendThread(a2, a1, 0LL);
}

/*
 * XREFs of PsGetCurrentProcessWow64Process @ 0x140230280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessWow64Process()
{
  __int64 result; // rax

  result = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1408LL);
  if ( result )
    return *(_QWORD *)result;
  return result;
}

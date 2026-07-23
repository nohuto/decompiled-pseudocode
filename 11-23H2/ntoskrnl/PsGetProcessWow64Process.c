/*
 * XREFs of PsGetProcessWow64Process @ 0x140337780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessWow64Process(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1408);
  if ( result )
    return *(_QWORD *)result;
  return result;
}

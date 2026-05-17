/*
 * XREFs of RtlSetCriticalSectionSpinCount @ 0x1800749B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetCriticalSectionSpinCount(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 32);
  v3 = v2 ^ (a2 ^ v2) & 0xFFFFFF;
  if ( NtCurrentPeb()->NumberOfProcessors == 1 )
    v3 &= 0xFF000000;
  result = v2 & 0xFFFFFF;
  *(_QWORD *)(a1 + 32) = v3;
  return result;
}

/*
 * XREFs of KeQueryHeteroCpuPolicyThread @ 0x14056B210
 * Callers:
 *     sub_14056C00C @ 0x14056C00C (sub_14056C00C.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryHeteroCpuPolicyThread(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !a2 )
    return *(unsigned __int8 *)(a1 + 125);
  result = *(_BYTE *)(a1 + 126) & 0x7F;
  if ( (_DWORD)result == 8 )
    return (unsigned int)dword_140D0509C;
  return result;
}

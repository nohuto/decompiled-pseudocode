/*
 * XREFs of StorBuildMFNDManagementCommand @ 0x1C0075F10
 * Callers:
 *     StorSetMFNDChildPFQoS @ 0x1C00AE654 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFSettings @ 0x1C00AEBEC (StorSetMFNDChildPFSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorBuildMFNDManagementCommand(__int64 a1, int a2, int a3, char a4, unsigned int a5)
{
  __int64 result; // rax

  *(_BYTE *)a1 = -47;
  if ( a2 == 1 )
    *(_BYTE *)(a1 + 56) = a4;
  *(_BYTE *)(a1 + 60) = 3;
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 60) ^= (*(_DWORD *)(a1 + 60) ^ (a3 << 8)) & 0xFFFF00;
    result = a5 >> 2;
    *(_DWORD *)(a1 + 40) = result;
  }
  *(_DWORD *)(a1 + 60) ^= (*(_DWORD *)(a1 + 60) ^ (a2 << 24)) & 0xF000000;
  return result;
}

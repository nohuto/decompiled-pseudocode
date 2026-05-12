/*
 * XREFs of StorBuildMFNDManagementCommand @ 0x1C0067148
 * Callers:
 *     StorSetMFNDChildPFQoS @ 0x1C0092344 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFSettings @ 0x1C0092584 (StorSetMFNDChildPFSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorBuildMFNDManagementCommand(_BYTE *a1, int a2, int a3, char a4)
{
  __int64 result; // rax
  int v5; // r8d

  *a1 = -47;
  if ( a2 == 1 )
    a1[56] = a4;
  a1[60] = 3;
  result = *((unsigned int *)a1 + 15);
  if ( a2 )
    v5 = *((_DWORD *)a1 + 15);
  else
    v5 = result ^ (result ^ (a3 << 8)) & 0xFFFF00;
  *((_DWORD *)a1 + 15) = v5 ^ (v5 ^ (a2 << 24)) & 0xF000000;
  return result;
}

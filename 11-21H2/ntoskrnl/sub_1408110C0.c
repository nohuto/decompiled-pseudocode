/*
 * XREFs of sub_1408110C0 @ 0x1408110C0
 * Callers:
 *     sub_140810F90 @ 0x140810F90 (sub_140810F90.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1408110C0(_DWORD *a1, int a2)
{
  int v3; // ecx

  if ( (unsigned int)(a2 - 1) > 1 || (a1[140] & 0x200) != 0 )
    return 1;
  v3 = a1[75];
  if ( (unsigned int)(v3 - 784) <= 1 )
    v3 = a1[76];
  return v3 == 779 || v3 <= 776 || v3 >= 782;
}

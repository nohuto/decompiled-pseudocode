/*
 * XREFs of sub_140577F38 @ 0x140577F38
 * Callers:
 *     sub_1407F8914 @ 0x1407F8914 (sub_1407F8914.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140577F38(int *a1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // r8d

  result = qword_140D06AE0;
  v2 = *a1;
  v3 = *(_DWORD *)qword_140D06AE0;
  if ( (unsigned int)*a1 > *(_DWORD *)qword_140D06AE0 )
  {
    *a1 = v3;
    v2 = v3;
  }
  dword_140C2AD64 = v2;
  return result;
}

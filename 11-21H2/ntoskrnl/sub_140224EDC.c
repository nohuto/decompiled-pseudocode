/*
 * XREFs of sub_140224EDC @ 0x140224EDC
 * Callers:
 *     sub_140224A24 @ 0x140224A24 (sub_140224A24.c)
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 *     sub_140808958 @ 0x140808958 (sub_140808958.c)
 * Callees:
 *     <none>
 */

__int64 sub_140224EDC()
{
  __int64 result; // rax

  for ( result = qword_140D06970; (__int64 *)result != &qword_140D06970; result = *(_QWORD *)result )
    *(_BYTE *)(result + 989) = 1;
  return result;
}

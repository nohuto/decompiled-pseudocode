/*
 * XREFs of sub_18003FA60 @ 0x18003FA60
 * Callers:
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 *     sub_1800A55F0 @ 0x1800A55F0 (sub_1800A55F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003FA60(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax

  while ( a1 != a2 )
  {
    result = *a3;
    *a1++ = *a3;
  }
  return result;
}

/*
 * XREFs of sub_18003ADBC @ 0x18003ADBC
 * Callers:
 *     sub_18003A100 @ 0x18003A100 (sub_18003A100.c)
 * Callees:
 *     sub_18003ADB0 @ 0x18003ADB0 (sub_18003ADB0.c)
 */

__int64 __fastcall sub_18003ADBC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  while ( a1 != a2 && a1 != a2 - 16 )
  {
    result = sub_18003ADB0();
    a1 = v3 + 16;
  }
  return result;
}

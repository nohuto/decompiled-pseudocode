/*
 * XREFs of sub_140A81D40 @ 0x140A81D40
 * Callers:
 *     sub_140603A00 @ 0x140603A00 (sub_140603A00.c)
 * Callees:
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 */

__int64 __fastcall sub_140A81D40(__int64 a1)
{
  __int64 result; // rax

  result = sub_140A8ABF8(a1);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}

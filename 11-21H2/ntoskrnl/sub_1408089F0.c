/*
 * XREFs of sub_1408089F0 @ 0x1408089F0
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     sub_1403B670C @ 0x1403B670C (sub_1403B670C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1408089F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1403B670C();
  if ( (int)result >= 0 )
    return sub_14042A5E0(L"hiber_", a2);
  return result;
}

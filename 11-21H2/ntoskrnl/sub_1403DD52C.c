/*
 * XREFs of sub_1403DD52C @ 0x1403DD52C
 * Callers:
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_14084BDD8 @ 0x14084BDD8 (sub_14084BDD8.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_1403DD580 @ 0x1403DD580 (sub_1403DD580.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1403DD52C()
{
  if ( byte_140C54D68 || (unsigned __int8)sub_1403DD580() )
    return 0LL;
  qword_140C54D60 = (PVOID)ExAllocatePool2(64LL, 268288LL, 1886209091LL);
  if ( qword_140C54D60 )
  {
    byte_140C54D68 = 1;
    return 0LL;
  }
  return 3221225626LL;
}

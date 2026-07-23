/*
 * XREFs of sub_1402519B0 @ 0x1402519B0
 * Callers:
 *     <none>
 * Callees:
 *     ntoskrnl_36 @ 0x1402EEBC0 (ntoskrnl_36.c)
 *     sub_14035800C @ 0x14035800C (sub_14035800C.c)
 */

__int64 sub_1402519B0()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = ntoskrnl_36(&qword_140C23CC0, 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
  {
    LOBYTE(v1) = 1;
    return sub_14035800C(v1);
  }
  return result;
}

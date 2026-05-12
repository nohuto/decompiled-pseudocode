/*
 * XREFs of sub_1C0011820 @ 0x1C0011820
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0011950 @ 0x1C0011950 (sub_1C0011950.c)
 *     sub_1C00119D8 @ 0x1C00119D8 (sub_1C00119D8.c)
 *     sub_1C004C82C @ 0x1C004C82C (sub_1C004C82C.c)
 */

__int64 __fastcall sub_1C0011820(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( (unsigned int)sub_1C0007798(v2, 6) )
  {
    sub_1C0011950(v2, a2);
    return sub_1C00119D8(a2);
  }
  *(_BYTE *)(v2 + 4497) = 1;
  result = sub_1C004C82C(a1, a2, sub_1C004BF10);
  if ( (int)result < 0 )
    return sub_1C00119D8(a2);
  return result;
}

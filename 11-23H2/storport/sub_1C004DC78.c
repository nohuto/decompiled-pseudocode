/*
 * XREFs of sub_1C004DC78 @ 0x1C004DC78
 * Callers:
 *     sub_1C004EDF0 @ 0x1C004EDF0 (sub_1C004EDF0.c)
 *     sub_1C004F2C0 @ 0x1C004F2C0 (sub_1C004F2C0.c)
 *     sub_1C004F920 @ 0x1C004F920 (sub_1C004F920.c)
 *     sub_1C004FCC0 @ 0x1C004FCC0 (sub_1C004FCC0.c)
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 */

__int64 __fastcall sub_1C004DC78(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( sub_1C0004890(a1, 5) )
    return (unsigned int)sub_1C0018524(*(_QWORD *)(a1 + 24) + 336LL);
  return v2;
}

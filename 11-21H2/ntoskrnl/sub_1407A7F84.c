/*
 * XREFs of sub_1407A7F84 @ 0x1407A7F84
 * Callers:
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140668084 @ 0x140668084 (sub_140668084.c)
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     sub_14066C6AC @ 0x14066C6AC (sub_14066C6AC.c)
 *     sub_1406BBDFC @ 0x1406BBDFC (sub_1406BBDFC.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     sub_14074DC30 @ 0x14074DC30 (sub_14074DC30.c)
 *     sub_14074DEF4 @ 0x14074DEF4 (sub_14074DEF4.c)
 *     sub_14074E474 @ 0x14074E474 (sub_14074E474.c)
 *     sub_14074EB48 @ 0x14074EB48 (sub_14074EB48.c)
 *     sub_1407A4774 @ 0x1407A4774 (sub_1407A4774.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407A717C @ 0x1407A717C (sub_1407A717C.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 *     sub_1407A7EB0 @ 0x1407A7EB0 (sub_1407A7EB0.c)
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 *     sub_1407E0D28 @ 0x1407E0D28 (sub_1407E0D28.c)
 *     sub_1409676FC @ 0x1409676FC (sub_1409676FC.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1407A7F84(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  result = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( result > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), result + 1, result);
    if ( result == v2 )
      return ++result;
  }
  if ( result )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, result);
  return result;
}

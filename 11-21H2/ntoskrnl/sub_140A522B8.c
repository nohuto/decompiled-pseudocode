/*
 * XREFs of sub_140A522B8 @ 0x140A522B8
 * Callers:
 *     sub_14039693C @ 0x14039693C (sub_14039693C.c)
 *     sub_14090A6D0 @ 0x14090A6D0 (sub_14090A6D0.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140396A68 @ 0x140396A68 (sub_140396A68.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140A522B8()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  void *v2; // rax
  __int64 v3; // rcx

  v0 = 1472LL * KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = (void *)sub_1403B1F04(v1, v0);
  qword_140C4BFD0 = (__int64)v2;
  if ( v2 )
  {
    memset(v2, 0, v0);
    if ( !byte_140C4E20A || (int)sub_140396A68() >= 0 )
      return 0LL;
    if ( qword_140C4BFD0 )
    {
      sub_1403B1B5C(v3, qword_140C4BFD0);
      qword_140C4BFD0 = 0LL;
    }
  }
  return 3221225626LL;
}

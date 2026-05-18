/*
 * XREFs of sub_18001E730 @ 0x18001E730
 * Callers:
 *     sub_18001E568 @ 0x18001E568 (sub_18001E568.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_180050BD0 @ 0x180050BD0 (sub_180050BD0.c)
 *     sub_18005133C @ 0x18005133C (sub_18005133C.c)
 *     sub_18008B738 @ 0x18008B738 (sub_18008B738.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18001E730(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_1800100E8(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

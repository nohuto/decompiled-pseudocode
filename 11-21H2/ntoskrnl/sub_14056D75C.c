/*
 * XREFs of sub_14056D75C @ 0x14056D75C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_140960E60 @ 0x140960E60 (sub_140960E60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056D75C(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  a1[1] = 0LL;
  *a1 = a2;
  result = *(unsigned int *)(a2 + 16);
  *((_DWORD *)a1 + 2) = result;
  return result;
}

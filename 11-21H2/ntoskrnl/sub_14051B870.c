/*
 * XREFs of sub_14051B870 @ 0x14051B870
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14051B8BC @ 0x14051B8BC (sub_14051B8BC.c)
 */

__int64 __fastcall sub_14051B870(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR v3; // r10

  result = (unsigned int)dword_140C4BE60;
  v3 = *(_QWORD *)(a2 + 16);
  if ( dword_140C4BE60 == 1 )
    return sub_14051B8BC(BugCheckParameter2, v3, *(unsigned int *)(a2 + 28), *(unsigned int *)(a2 + 40));
  if ( !dword_140C4BE60 )
    KeBugCheckEx(0xE6u, 0x26uLL, BugCheckParameter2, v3, *(unsigned int *)(a2 + 28));
  return result;
}

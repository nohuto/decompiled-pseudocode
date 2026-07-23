/*
 * XREFs of sub_140A9ED10 @ 0x140A9ED10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A9ED10(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, unsigned int a7)
{
  __int64 result; // rax
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  if ( (qword_140D01450 & 0x2000000) != 0 )
    sub_140A82F58(a4, retaddr, a7);
  result = sub_14042A5E0(a1, a2);
  if ( (int)result >= 0
    && (qword_140D01450 & 1) != 0
    && *(PVOID (__fastcall **)(POOL_TYPE, SIZE_T, ULONG, PLOOKASIDE_LIST_EX))(a1 + 48) == Allocate
    && *(__int64 (__fastcall **)(ULONG_PTR))(a1 + 56) == sub_140246BB0 )
  {
    *(_QWORD *)(a1 + 48) = sub_140A902F0;
    *(_QWORD *)(a1 + 56) = sub_140A7F0C0;
  }
  return result;
}

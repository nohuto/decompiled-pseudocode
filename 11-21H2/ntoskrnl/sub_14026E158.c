/*
 * XREFs of sub_14026E158 @ 0x14026E158
 * Callers:
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_1403C9590 @ 0x1403C9590 (sub_1403C9590.c)
 *     sub_14082A644 @ 0x14082A644 (sub_14082A644.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 */

__int64 __fastcall sub_14026E158(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  v5 = a2;
  if ( (unsigned int)sub_14027B080(a1, a2, a3, a4) == 1 )
  {
    v10 = sub_14027B520(v8, v7, v9);
  }
  else if ( a1 <= 0x7FFFFFFEFFFFLL
         || a1 <= qword_140C51BF0 && a1 >= qword_140C540C0
         || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  }
  else
  {
    v10 = 0LL;
  }
  return sub_140339C20(v10, v5, a3);
}

/*
 * XREFs of sub_140227300 @ 0x140227300
 * Callers:
 *     sub_140227254 @ 0x140227254 (sub_140227254.c)
 *     sub_1403AD0A8 @ 0x1403AD0A8 (sub_1403AD0A8.c)
 *     sub_1403AD16C @ 0x1403AD16C (sub_1403AD16C.c)
 * Callees:
 *     sub_14027A0F4 @ 0x14027A0F4 (sub_14027A0F4.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 */

__int64 __fastcall sub_140227300(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v8; // rax

  v4 = a1;
  if ( a1 >= 0xFFFF800000000000uLL && (a1 < qword_140C51BE8 || (v8 = sub_14027A0F4(), v4 >= qword_140C51BE8 + v8)) )
  {
    v5 = sub_14027B080(v4, a2, a3, a4);
    v6 = 0;
    if ( v5 == 1 )
      return 2;
  }
  else
  {
    return 1;
  }
  return v6;
}

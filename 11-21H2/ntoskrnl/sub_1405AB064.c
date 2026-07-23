/*
 * XREFs of sub_1405AB064 @ 0x1405AB064
 * Callers:
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_1405AB064(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  v1 = a1;
  if ( (a1 & 1) != 0 )
  {
    v1 = sub_140317A10((unsigned __int64)&v5);
  }
  else if ( qword_140C50780 && (a1 & 0x10) == 0 )
  {
    v1 = a1 & ~qword_140C50780;
  }
  v2 = (v1 >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 <= qword_140C50840 && ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    return (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF;
  else
    return 0;
}

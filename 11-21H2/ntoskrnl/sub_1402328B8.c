/*
 * XREFs of sub_1402328B8 @ 0x1402328B8
 * Callers:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1402328B8(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rax

  if ( a5 )
  {
    if ( a1 )
      v5 = *a5;
    else
      v5 = a5[1];
    if ( v5 )
      sub_14042A5E0(a2, a3);
  }
}

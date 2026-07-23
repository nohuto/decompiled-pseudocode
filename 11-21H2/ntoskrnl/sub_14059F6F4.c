/*
 * XREFs of sub_14059F6F4 @ 0x14059F6F4
 * Callers:
 *     sub_14096F788 @ 0x14096F788 (sub_14096F788.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_14059EEC4 @ 0x14059EEC4 (sub_14059EEC4.c)
 *     sub_14059F7A0 @ 0x14059F7A0 (sub_14059F7A0.c)
 *     sub_140970960 @ 0x140970960 (sub_140970960.c)
 *     sub_140970990 @ 0x140970990 (sub_140970990.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned int *__fastcall sub_14059F6F4(__int64 a1, _DWORD *a2, signed int a3)
{
  __int64 v3; // rdi
  unsigned int *result; // rax
  unsigned int *v6; // rsi
  unsigned __int64 *v7; // rbp
  __int64 i; // rdi
  unsigned __int64 *v9; // rdx

  v3 = a3;
  result = sub_14059EEC4(a1, a3);
  v6 = result;
  if ( result )
  {
    sub_140970960();
    if ( a2 )
    {
      v7 = (unsigned __int64 *)((char *)&unk_140C4F458 + 8 * v3);
      for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
      {
        v9 = (unsigned __int64 *)&a2[12 * i + 2];
        if ( v9[4] != 0x8000000000000000uLL )
          RtlAvlRemoveNode(v7, v9);
      }
    }
    sub_14059F7A0(v6);
    sub_140970990();
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
    return v6;
  }
  return result;
}

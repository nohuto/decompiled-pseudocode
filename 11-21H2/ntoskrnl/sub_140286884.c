/*
 * XREFs of sub_140286884 @ 0x140286884
 * Callers:
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_140283DF0 @ 0x140283DF0 (sub_140283DF0.c)
 *     sub_14028AED4 @ 0x14028AED4 (sub_14028AED4.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_140592278 @ 0x140592278 (sub_140592278.c)
 * Callees:
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 */

__int64 __fastcall sub_140286884(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rax

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    v6 += sub_1402869C0(v5);
    if ( v7 && !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
      v6 += sub_140220AAC(v5);
    if ( a2 )
    {
      v8 = *(unsigned int *)(v5 + 44);
      if ( a2 <= v8 )
        return v6;
      a2 -= v8;
    }
    v5 = *(_QWORD *)(v5 + 16);
    if ( !v7 )
      a3 &= ~8u;
  }
  while ( v5 );
  return v6;
}

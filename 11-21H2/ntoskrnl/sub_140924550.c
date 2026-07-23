/*
 * XREFs of sub_140924550 @ 0x140924550
 * Callers:
 *     <none>
 * Callees:
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 */

__int64 __fastcall sub_140924550(__int64 a1, __int64 a2, __int64 a3, volatile signed __int64 **a4)
{
  volatile signed __int64 *v4; // rbx
  volatile signed __int64 *v5; // rax

  v4 = *a4;
  v5 = a4[1];
  if ( *(volatile signed __int64 **)(a1 + 72) == *a4 )
  {
    ++*(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 72) = v5;
    if ( *v4 )
    {
      sub_14071BC64(v5);
      sub_14071C0FC(v4);
    }
  }
  return 0LL;
}

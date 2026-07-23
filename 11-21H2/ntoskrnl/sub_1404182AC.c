/*
 * XREFs of sub_1404182AC @ 0x1404182AC
 * Callers:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     sub_140418218 @ 0x140418218 (sub_140418218.c)
 *     sub_1405570D0 @ 0x1405570D0 (sub_1405570D0.c)
 */

void __fastcall sub_1404182AC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( sub_14020C0F0(a1, 9u) )
  {
    v3 = *(_QWORD *)(v2 + 112);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        sub_1405570D0(*(PMDL *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        v3 = *(_QWORD *)(a1 + 112);
      }
      sub_140418218(v3, 0);
    }
  }
}

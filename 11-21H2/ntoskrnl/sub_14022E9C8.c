/*
 * XREFs of sub_14022E9C8 @ 0x14022E9C8
 * Callers:
 *     sub_14022E848 @ 0x14022E848 (sub_14022E848.c)
 *     sub_140AA1A74 @ 0x140AA1A74 (sub_140AA1A74.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14022E9C8(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x76615358u);
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}

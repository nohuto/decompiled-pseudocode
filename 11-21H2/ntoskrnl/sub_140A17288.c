/*
 * XREFs of sub_140A17288 @ 0x140A17288
 * Callers:
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140A1641C @ 0x140A1641C (sub_140A1641C.c)
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 *     sub_140A171B8 @ 0x140A171B8 (sub_140A171B8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A17288(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      ZwClose(v2);
      a1[3] = 0LL;
    }
    v3 = (void *)a1[1];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74705041u);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
}

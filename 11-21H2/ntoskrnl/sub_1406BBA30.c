/*
 * XREFs of sub_1406BBA30 @ 0x1406BBA30
 * Callers:
 *     sub_1406BB860 @ 0x1406BB860 (sub_1406BB860.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406BBA30(__int64 a1, void *a2)
{
  int v4; // esi

  if ( a2 )
  {
    v4 = ObLogSecurityDescriptor(a2);
    if ( v4 >= 0 )
    {
      ExFreePoolWithTag(a2, 0);
      *(_QWORD *)(a1 - 8) = 0LL;
    }
    return (unsigned int)v4;
  }
  else
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
}

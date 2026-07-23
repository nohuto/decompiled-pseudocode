/*
 * XREFs of sub_1406E62A8 @ 0x1406E62A8
 * Callers:
 *     sub_1407E3900 @ 0x1407E3900 (sub_1407E3900.c)
 *     sub_1407E3BE4 @ 0x1407E3BE4 (sub_1407E3BE4.c)
 * Callees:
 *     sub_1406E62FC @ 0x1406E62FC (sub_1406E62FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406E62A8(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_1406E62FC(a1, a2, 0xFFFFFFFFLL);
    if ( v3 >= 0 )
    {
      v4 = (void *)a2[3];
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      ExFreePoolWithTag(a2, 0);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}

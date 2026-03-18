/*
 * XREFs of sub_1407EA2F4 @ 0x1407EA2F4
 * Callers:
 *     sub_1407638F4 @ 0x1407638F4 (sub_1407638F4.c)
 * Callees:
 *     sub_140762CE8 @ 0x140762CE8 (sub_140762CE8.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407EA2F4(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_140762CE8(a1, (__int64)a2, -1);
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

/*
 * XREFs of sub_1407E9D74 @ 0x1407E9D74
 * Callers:
 *     sub_1407633E4 @ 0x1407633E4 (sub_1407633E4.c)
 * Callees:
 *     sub_1407627D8 @ 0x1407627D8 (sub_1407627D8.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E9D74(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_1407627D8(a1, (__int64)a2, -1);
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

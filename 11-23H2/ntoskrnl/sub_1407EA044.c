/*
 * XREFs of sub_1407EA044 @ 0x1407EA044
 * Callers:
 *     sub_1407635D4 @ 0x1407635D4 (sub_1407635D4.c)
 * Callees:
 *     sub_1407629C8 @ 0x1407629C8 (sub_1407629C8.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407EA044(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_1407629C8(a1, (__int64)a2, -1);
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

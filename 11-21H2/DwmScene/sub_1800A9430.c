/*
 * XREFs of sub_1800A9430 @ 0x1800A9430
 * Callers:
 *     sub_1800A9328 @ 0x1800A9328 (sub_1800A9328.c)
 *     ?dtor$0@?0???0UMSSchedulerProxy@details@Concurrency@@QEAA@PEAUIScheduler@2@PEAVResourceManager@12@AEBVSchedulerPolicy@2@@Z@4HA_0 @ 0x1801071A4 (-dtor$0@-0---0UMSSchedulerProxy@details@Concurrency@@QEAA@PEAUIScheduler@2@PEAVReso_ea_1801071A4.c)
 *     sub_18011B850 @ 0x18011B850 (sub_18011B850.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800A9430(char **a1)
{
  char *v1; // rdx
  __int64 *v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 *v5; // rsi

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(__int64 **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = v3[5];
      v5 = (__int64 *)*v3;
      if ( v4 >= 0x10 )
        sub_180010884((char *)v3[2], v4 + 1);
      v3[4] = 0LL;
      v3[5] = 15LL;
      *((_BYTE *)v3 + 16) = 0;
      sub_180010884((char *)v3, 0x38uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  return sub_180010884(*a1, 0x38uLL);
}

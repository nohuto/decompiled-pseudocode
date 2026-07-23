/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x1406DCAC0
 * Callers:
 *     sub_1406DC9F0 @ 0x1406DC9F0 (sub_1406DC9F0.c)
 *     sub_140B2C124 @ 0x140B2C124 (sub_140B2C124.c)
 * Callees:
 *     sub_1409FCB38 @ 0x1409FCB38 (sub_1409FCB38.c)
 *     sub_1409FF108 @ 0x1409FF108 (sub_1409FF108.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v9; // rdi
  unsigned int v10; // ebx

  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  v9 = (void *)sub_1409FF108();
  if ( !v9 )
    return 3221225626LL;
  v10 = sub_1409FCB38((_DWORD)v9, a2, a3, a4, a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}

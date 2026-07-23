/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1409FB890
 * Callers:
 *     sub_1406DCB10 @ 0x1406DCB10 (sub_1406DCB10.c)
 *     sub_1408002B4 @ 0x1408002B4 (sub_1408002B4.c)
 *     sub_140A6BEC8 @ 0x140A6BEC8 (sub_140A6BEC8.c)
 * Callees:
 *     sub_1409FE284 @ 0x1409FE284 (sub_1409FE284.c)
 *     sub_1409FF108 @ 0x1409FF108 (sub_1409FF108.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  void *v9; // rdi
  unsigned int v10; // ebx

  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  v9 = (void *)sub_1409FF108();
  if ( !v9 )
    return 3221225626LL;
  v10 = sub_1409FE284((_DWORD)v9, a2, a3, a4 & (unsigned int)-(a3 != 0), a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}

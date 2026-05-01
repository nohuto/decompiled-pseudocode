/*
 * XREFs of SdbTagRefToTagID @ 0x180096314
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180030400 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     SdbpOpenLocalDatabaseEx @ 0x180096158 (SdbpOpenLocalDatabaseEx.c)
 */

__int64 __fastcall SdbTagRefToTagID(__int64 a1, unsigned int a2, PVOID **a3, int *a4)
{
  unsigned int v6; // ecx
  int v7; // ebx
  __int64 v9; // r8
  PVOID *v10; // rax
  __int128 v11; // xmm0
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  PVOID *v14; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF

  v14 = 0LL;
  v6 = 1;
  v7 = a2 & 0xFFFFFFF;
  v13 = a2 >> 28;
  v9 = a1 + 32 * ((a2 >> 28) + 1LL);
  if ( (*(_BYTE *)(v9 + 24) & 2) != 0 )
  {
    v10 = *(PVOID **)(v9 + 16);
    *(_OWORD *)((char *)v10 + 28) = *(_OWORD *)v9;
  }
  else
  {
    if ( (*(_BYTE *)(v9 + 24) & 1) == 0 )
      goto LABEL_8;
    v11 = *(_OWORD *)v9;
    *(_DWORD *)(v9 + 24) = 0;
    v15 = v11;
    v6 = SdbpOpenLocalDatabaseEx(a1, &v15, v9, &v14, &v13);
    v10 = v14;
  }
  if ( v10 )
  {
    if ( v6 )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_8:
  v6 = 0;
LABEL_9:
  v10 = 0LL;
  v7 = 0;
LABEL_10:
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v7;
  return v6;
}

/*
 * XREFs of KsepDbCacheReadDeviceInternal @ 0x1408088D8
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1408087EC (KsepDbCacheReadDevice.c)
 * Callees:
 *     SdbFindNextTag @ 0x140755DD8 (SdbFindNextTag.c)
 *     SdbGetDatabaseMatchEx @ 0x140756EB0 (SdbGetDatabaseMatchEx.c)
 *     SdbFindFirstTag @ 0x140757B94 (SdbFindFirstTag.c)
 *     KsepDbReadKFlag @ 0x140808EE4 (KsepDbReadKFlag.c)
 *     KsepCacheDeviceInsertData @ 0x140808FF8 (KsepCacheDeviceInsertData.c)
 *     SdbTagRefToTagID @ 0x1408090B8 (SdbTagRefToTagID.c)
 *     KsepDbReadKData @ 0x1409770D8 (KsepDbReadKData.c)
 */

__int64 __fastcall KsepDbCacheReadDeviceInternal(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  unsigned int DatabaseMatch; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int i; // eax
  unsigned int v10; // edi
  unsigned int j; // eax
  unsigned int v12; // edi
  unsigned int v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp-10h]

  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 1, a3, a4, 0LL, 0LL, a2);
  if ( !DatabaseMatch || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v14, &v13) )
    return 3221226021LL;
  v8 = v14;
  for ( i = SdbFindFirstTag(v14, v13, 28691LL); ; i = SdbFindNextTag(v8, v13, v10) )
  {
    v10 = i;
    if ( !i )
      break;
    result = KsepDbReadKFlag(v8, i, &v15);
    if ( (int)result < 0 )
      return result;
    result = KsepCacheDeviceInsertData(a4, v15, v16, DWORD2(v15), HIDWORD(v15));
    if ( (int)result < 0 )
      return result;
  }
  for ( j = SdbFindFirstTag(v8, v13, 28712LL); ; j = SdbFindNextTag(v8, v13, v12) )
  {
    v12 = j;
    if ( !j )
      break;
    result = KsepDbReadKData(v8, j, &v15);
    if ( (int)result < 0 )
      return result;
    result = KsepCacheDeviceInsertData(a4, v15, v16, DWORD2(v15), HIDWORD(v15));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}

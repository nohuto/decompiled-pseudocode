/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1800EC3DC
 * Callers:
 *     LdrpAccessResourceData @ 0x180038740 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeader @ 0x18004F1A0 (RtlImageNtHeader.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800EC568 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  LODWORD(v13) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)(v9 + AlternateResourceModules + 8) == a1 )
    {
      if ( v15[0] )
      {
        v10 = v7;
        HIDWORD(v13) = v7;
        while ( v10 >= 0 )
        {
          if ( *(_QWORD *)(((__int64)v10 << 6) + AlternateResourceModules + 8) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v10, a3, v15, &v14, v13) )
          {
            v7 = v10;
            goto LABEL_13;
          }
          HIDWORD(v13) = --v10;
        }
        v7 = AlternateResourceModuleCount;
        break;
      }
      v15[0] = *(_QWORD *)(v9 + AlternateResourceModules + 32);
      v14 = *(_QWORD *)(v9 + AlternateResourceModules + 48);
      v7 = i;
      LODWORD(v13) = i;
    }
  }
LABEL_13:
  if ( v7 == AlternateResourceModuleCount )
  {
    v15[0] = 0LL;
  }
  else
  {
    if ( !v14 )
    {
      v11 = RtlImageNtHeader(v15[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v11 )
      {
        if ( *(_WORD *)(v11 + 24) == 267 || *(_WORD *)(v11 + 24) == 523 )
          v14 = *(unsigned int *)(v11 + 80);
        else
          v14 = 0LL;
      }
    }
    *a4 = v14;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v15[0];
}

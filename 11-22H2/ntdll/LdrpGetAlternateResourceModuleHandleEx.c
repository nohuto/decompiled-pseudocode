/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1800EBC94
 * Callers:
 *     LdrpAccessResourceData @ 0x180022C2C (LdrpAccessResourceData.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800EBE24 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // ebx
  int i; // ecx
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF

  v18[0] = 0LL;
  v17 = 0LL;
  Feature_Servicing_CritsecInit__private_IsEnabled();
  RtlAcquireSRWLockShared(&MuiCacheSWRLock, v7, v8, v9);
  *a4 = 0LL;
  v10 = AlternateResourceModuleCount;
  LODWORD(v16) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v12 = (__int64)i << 6;
    if ( *(_QWORD *)(v12 + AlternateResourceModules + 8) == a1 )
    {
      if ( v18[0] )
      {
        v13 = v10;
        HIDWORD(v16) = v10;
        while ( v13 >= 0 )
        {
          if ( *(_QWORD *)(((__int64)v13 << 6) + AlternateResourceModules + 8) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v13, a3, v18, &v17, v16) )
          {
            v10 = v13;
            goto LABEL_13;
          }
          HIDWORD(v16) = --v13;
        }
        v10 = AlternateResourceModuleCount;
        break;
      }
      v18[0] = *(_QWORD *)(v12 + AlternateResourceModules + 32);
      v17 = *(_QWORD *)(v12 + AlternateResourceModules + 48);
      v10 = i;
      LODWORD(v16) = i;
    }
  }
LABEL_13:
  if ( v10 == AlternateResourceModuleCount )
  {
    v18[0] = 0LL;
  }
  else
  {
    if ( !v17 )
    {
      v14 = RtlImageNtHeader(v18[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v14 )
      {
        if ( *(_WORD *)(v14 + 24) == 267 || *(_WORD *)(v14 + 24) == 523 )
          v17 = *(unsigned int *)(v14 + 80);
        else
          v17 = 0LL;
      }
    }
    *a4 = v17;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v18[0];
}

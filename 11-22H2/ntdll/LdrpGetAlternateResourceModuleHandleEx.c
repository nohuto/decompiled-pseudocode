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
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int v10; // edi
  PIMAGE_NT_HEADERS v11; // rax
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 SizeOfImage; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0LL;
  SizeOfImage = 0LL;
  Feature_Servicing_CritsecInit__private_IsEnabled();
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  LODWORD(v13) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v9 + 8) == a1 )
    {
      if ( v15[0] )
      {
        v10 = v7;
        HIDWORD(v13) = v7;
        while ( v10 >= 0 )
        {
          if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)v10 + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v10, a3, v15, &SizeOfImage, v13) )
          {
            v7 = v10;
            goto LABEL_13;
          }
          HIDWORD(v13) = --v10;
        }
        v7 = AlternateResourceModuleCount;
        break;
      }
      v15[0] = *(_QWORD *)((char *)AlternateResourceModules + v9 + 32);
      SizeOfImage = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
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
    if ( !SizeOfImage )
    {
      v11 = RtlImageNtHeader((PVOID)(v15[0] & 0xFFFFFFFFFFFFFFFCuLL));
      if ( v11 )
      {
        if ( v11->OptionalHeader.Magic == 267 || v11->OptionalHeader.Magic == 523 )
          SizeOfImage = v11->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v15[0];
}

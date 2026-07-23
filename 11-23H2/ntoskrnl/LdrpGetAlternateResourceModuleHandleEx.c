/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1402F7080
 * Callers:
 *     LdrpAccessResourceData @ 0x14075583C (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1402AFF20 (KeReleaseMutant.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1402F6F50 (LdrpGetMappingFromCacheEntry.c)
 *     RtlRunOnceExecuteOnce @ 0x140757F80 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  signed int j; // edi
  PIMAGE_NT_HEADERS v11; // rax
  unsigned __int16 Magic; // cx
  __int64 SizeOfImage; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  struct _KMUTANT *v16; // [rsp+48h] [rbp-20h] BYREF

  v15 = 0LL;
  SizeOfImage = 0LL;
  v16 = &MuiMutex;
  RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &v16, 0LL);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v9 + 8) == a1 )
    {
      if ( v15 )
      {
        for ( j = v7; j >= 0; --j )
        {
          if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)j + 1) == a1
            && LdrpGetMappingFromCacheEntry(j, a3, &v15, &SizeOfImage) )
          {
            v7 = j;
            goto LABEL_12;
          }
        }
        v7 = AlternateResourceModuleCount;
        break;
      }
      v15 = *(_QWORD *)((char *)AlternateResourceModules + v9 + 32);
      SizeOfImage = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
      v7 = i;
    }
  }
LABEL_12:
  if ( v7 == AlternateResourceModuleCount )
  {
    v15 = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      v11 = RtlImageNtHeader((PVOID)(v15 & 0xFFFFFFFFFFFFFFFCuLL));
      if ( v11 )
      {
        Magic = v11->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = v11->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v15;
}

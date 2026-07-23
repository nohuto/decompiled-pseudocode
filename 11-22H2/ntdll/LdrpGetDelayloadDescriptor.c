/*
 * XREFs of LdrpGetDelayloadDescriptor @ 0x1800DABAC
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800DA960 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800DAA20 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     _stricmp @ 0x18008FFD0 (_stricmp.c)
 */

__int64 __fastcall LdrpGetDelayloadDescriptor(unsigned __int64 a1, const char *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 0xDu, &v10, &v11);
  v5 = v11;
  v6 = 0LL;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v7 = 0;
    v8 = v10 >> 5;
    if ( *(_DWORD *)(v5 + 4) )
    {
      while ( v7 < v8 )
      {
        if ( !stricmp((const char *)(a1 + *(unsigned int *)(v5 + 32LL * v7 + 4)), a2) )
          return v5 + 32LL * v7;
        if ( !*(_DWORD *)(32LL * ++v7 + v5 + 4) )
          return v6;
      }
    }
  }
  return v6;
}

/*
 * XREFs of FsRtlAddToTunnelCache @ 0x14093DA10
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddToTunnelCacheEx @ 0x14079ECC0 (FsRtlAddToTunnelCacheEx.c)
 */

void __stdcall FsRtlAddToTunnelCache(
        TUNNEL *Cache,
        ULONGLONG DirectoryKey,
        UNICODE_STRING *ShortName,
        UNICODE_STRING *LongName,
        BOOLEAN KeyByShortName,
        ULONG DataLength,
        void *Data)
{
  size_t Size; // [rsp+28h] [rbp-20h]

  LODWORD(Size) = DataLength;
  FsRtlAddToTunnelCacheEx(&Cache->Mutex, DirectoryKey, ShortName, LongName, KeyByShortName != 0 ? 2 : 0, Size, Data);
}

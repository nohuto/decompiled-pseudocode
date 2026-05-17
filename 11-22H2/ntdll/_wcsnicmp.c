/*
 * XREFs of _wcsnicmp @ 0x1800907F0
 * Callers:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 *     _IsOverlaySupportedPath @ 0x18000B3D4 (_IsOverlaySupportedPath.c)
 *     punycode_decode @ 0x18000E7E8 (punycode_decode.c)
 *     RtlQueryEnvironmentVariable @ 0x18001ED70 (RtlQueryEnvironmentVariable.c)
 *     _IsProgramFilesPath @ 0x180057CA8 (_IsProgramFilesPath.c)
 *     LdrpGetFileDriverStoreRoot @ 0x18007704C (LdrpGetFileDriverStoreRoot.c)
 *     punycode_encode @ 0x180089B10 (punycode_encode.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800FF514 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int v3; // r9d
  const wchar_t *v4; // r11
  signed __int64 v5; // r10
  unsigned __int16 v6; // cx
  wchar_t v7; // dx

  v3 = 0;
  v4 = String2;
  if ( MaxCount )
  {
    v5 = (char *)String1 - (char *)String2;
    do
    {
      v6 = *(const wchar_t *)((char *)v4 + v5) + 32;
      if ( (unsigned __int16)(*(const wchar_t *)((char *)v4 + v5) - 65) > 0x19u )
        v6 = *(const wchar_t *)((char *)v4 + v5);
      v7 = *v4 + 32;
      if ( (unsigned __int16)(*v4 - 65) > 0x19u )
        v7 = *v4;
      ++v4;
      --MaxCount;
    }
    while ( MaxCount && v6 && v6 == v7 );
    return v6 - v7;
  }
  return v3;
}

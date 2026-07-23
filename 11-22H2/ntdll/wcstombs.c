/*
 * XREFs of wcstombs @ 0x180094F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180018A50 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeToMultiByteSize @ 0x180018EC0 (RtlUnicodeToMultiByteSize.c)
 *     _errno @ 0x1800885F0 (_errno.c)
 */

size_t __cdecl wcstombs(char *Dest, const wchar_t *Source, size_t MaxCount)
{
  __int64 v3; // rax
  NTSTATUS v4; // eax
  __int64 BytesInMultiByteString; // [rsp+40h] [rbp+8h] BYREF

  BytesInMultiByteString = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( Dest )
    v4 = RtlUnicodeToMultiByteN(Dest, MaxCount, (PULONG)&BytesInMultiByteString, Source, 2 * v3 + 2);
  else
    v4 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, (PWCH)Source, 2 * v3 + 2);
  if ( v4 >= 0 )
    return BytesInMultiByteString - 1;
  *errno() = 42;
  return -1LL;
}

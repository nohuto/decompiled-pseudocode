/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x180018D50
 * Callers:
 *     RtlxAnsiStringToUnicodeSize @ 0x180018D20 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800590A0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x180055990 (RtlUTF8ToUnicodeN.c)
 */

__int64 RtlMultiByteToUnicodeSize()
{
  unsigned __int8 *v0; // rdx
  _DWORD *v1; // rcx
  int v2; // r8d
  int *v3; // r10
  int v4; // ecx
  __int64 v6; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process() )
  {
    if ( v2 )
      RtlUTF8ToUnicodeN(0, 0, (_DWORD)v3, (_DWORD)v0, v2);
    else
      *v1 = 0;
  }
  else
  {
    _InterlockedOr(v7, 0);
    v4 = 0;
    if ( word_18018171C )
    {
      while ( v2 )
      {
        v6 = *v0;
        --v2;
        ++v0;
        if ( *(_WORD *)(qword_1801817A0 + 2 * v6) )
        {
          if ( !v2 )
          {
            v4 += 2;
            break;
          }
          --v2;
          ++v0;
        }
        v4 += 2;
      }
    }
    else
    {
      v4 = 2 * v2;
    }
    *v3 = v4;
  }
  return 0LL;
}

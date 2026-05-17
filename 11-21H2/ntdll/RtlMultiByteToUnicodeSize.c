/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x18000DEF0
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x18000C320 (RtlxOemStringToUnicodeSize.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x18000DEC0 (RtlxAnsiStringToUnicodeSize.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rdx
  _DWORD *v4; // rcx
  int v5; // r8d
  int *v6; // r10
  int v7; // ecx
  __int64 v8; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(a1, a2, a3) )
  {
    if ( v5 )
      RtlUTF8ToUnicodeN(0, 0, (_DWORD)v6, (_DWORD)v3, v5);
    else
      *v4 = 0;
  }
  else
  {
    _InterlockedOr(v10, 0);
    v7 = 0;
    if ( word_18017765C )
    {
      while ( v5 )
      {
        v8 = *v3;
        --v5;
        ++v3;
        if ( *(_WORD *)(qword_1801776E0 + 2 * v8) )
        {
          if ( !v5 )
          {
            v7 += 2;
            break;
          }
          --v5;
          ++v3;
        }
        v7 += 2;
      }
    }
    else
    {
      v7 = 2 * v5;
    }
    *v6 = v7;
  }
  return 0LL;
}

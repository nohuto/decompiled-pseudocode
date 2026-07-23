/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x18008A640
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x18008A500 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlDnsHostNameToComputerName @ 0x18008C940 (RtlDnsHostNameToComputerName.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800F7190 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800F73F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rcx
  __int64 v4; // r8
  char v5; // r9
  unsigned int v6; // r10d
  unsigned int v7; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r11d
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbp
  bool v14; // zf
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v15, 0);
    v5 = 1;
    v6 = *v3;
    if ( CodePageTable.DBCSCodePage )
    {
      v9 = 0;
      v10 = 0;
      if ( !*v3 )
        return v5;
      v11 = *((_QWORD *)v3 + 1);
      while ( 1 )
      {
        v12 = *(unsigned __int8 *)(v9 + v11);
        if ( *(_WORD *)(qword_1801847F8 + 2 * v12) && (v13 = v9 + 1, (unsigned int)v13 < v6) )
        {
          ++v9;
          v14 = ((char)v12 << 8) + *(unsigned __int8 *)(v13 + v11) == CodePageTable.DefaultChar;
        }
        else
        {
          v14 = (char)v12 == LOBYTE(CodePageTable.DefaultChar);
        }
        if ( v14 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v10) != CodePageTable.TransDefaultChar )
          break;
        ++v9;
        ++v10;
        if ( v9 >= v6 )
          return v5;
      }
    }
    else
    {
      v7 = 0;
      if ( !v6 )
        return v5;
      while ( *(char *)(v7 + *(_QWORD *)(v4 + 8)) != LOBYTE(CodePageTable.DefaultChar)
           || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v7) == CodePageTable.TransDefaultChar )
      {
        if ( ++v7 >= v6 )
          return v5;
      }
    }
    return 0;
  }
  return 1;
}

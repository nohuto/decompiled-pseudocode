/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x140755B88
 * Callers:
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140755D00 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407D0EF0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140874310 (RtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1406DA560 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  char v3; // bl
  _WORD *CurrentServerSiloGlobals; // rax
  unsigned int v6; // r9d
  __int16 v7; // bp
  __int16 v8; // r11
  unsigned int v9; // ecx
  unsigned int v11; // edx
  unsigned int v12; // r10d
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdi
  bool v16; // zf
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 1;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v17, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v6 = *a1;
    v7 = CurrentServerSiloGlobals[566];
    v8 = CurrentServerSiloGlobals[568];
    if ( CurrentServerSiloGlobals[570] )
    {
      v11 = 0;
      v12 = 0;
      if ( !*a1 )
        return v3;
      v13 = *((_QWORD *)a1 + 1);
      while ( 1 )
      {
        v14 = *(unsigned __int8 *)(v11 + v13);
        if ( *(_WORD *)(*((_QWORD *)CurrentServerSiloGlobals + 152) + 2 * v14)
          && (v15 = v11 + 1, (unsigned int)v15 < v6) )
        {
          ++v11;
          v16 = ((char)v14 << 8) + *(unsigned __int8 *)(v15 + v13) == v7;
        }
        else
        {
          v16 = (char)v14 == (unsigned __int8)v7;
        }
        if ( v16 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v12) != v8 )
          break;
        ++v11;
        ++v12;
        if ( v11 >= v6 )
          return v3;
      }
      return 0;
    }
    v9 = 0;
    if ( *a1 )
    {
      while ( *(char *)(v9 + *((_QWORD *)a1 + 1)) != (unsigned __int8)v7
           || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v9) == v8 )
      {
        if ( ++v9 >= v6 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}

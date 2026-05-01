/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x1800A6178
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1800A5EFC (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1800A5F78 (RtlUnicodeStringCbCatStringN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWideCharArrayCopyStringWorker(__int64 a1, __int64 a2, _QWORD *a3, _WORD *a4, __int64 a5)
{
  __int64 result; // rax
  _WORD *v6; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r9

  result = 0LL;
  v6 = a4;
  v7 = 0LL;
  if ( a2 )
  {
    v8 = a1 - (_QWORD)a4;
    v9 = a5;
    while ( v9 )
    {
      if ( *v6 )
      {
        *(_WORD *)((char *)v6 + v8) = *v6;
        --v9;
        ++v6;
        ++v7;
        if ( --a2 )
          continue;
      }
      if ( a2 )
        break;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = a5;
LABEL_9:
    if ( v9 && *v6 )
      result = 2147483653LL;
  }
  *a3 = v7;
  return result;
}

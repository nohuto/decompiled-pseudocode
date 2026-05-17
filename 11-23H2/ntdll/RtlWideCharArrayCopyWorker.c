/*
 * XREFs of RtlWideCharArrayCopyWorker @ 0x18006857C
 * Callers:
 *     RtlUnicodeStringCopy @ 0x18006828C (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x180068400 (RtlUnicodeStringCat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWideCharArrayCopyWorker(__int64 a1, __int64 a2, _QWORD *a3, _WORD *a4, __int64 a5)
{
  unsigned int v5; // r10d
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 result; // rax

  v5 = 0;
  v8 = 0LL;
  if ( a2 )
  {
    v9 = a1 - (_QWORD)a4;
    while ( a5 )
    {
      --a5;
      *(_WORD *)((char *)a4 + v9) = *a4;
      ++v8;
      ++a4;
      if ( !--a2 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( a5 )
      v5 = -2147483643;
  }
  result = v5;
  *a3 = v8;
  return result;
}

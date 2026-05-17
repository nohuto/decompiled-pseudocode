/*
 * XREFs of RtlStringVPrintfWorkerA @ 0x1800DC550
 * Callers:
 *     LdrpEtwLogLoaderSnaps @ 0x1800DACB8 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     _vsnprintf @ 0x180090CD0 (_vsnprintf.c)
 */

__int64 __fastcall RtlStringVPrintfWorkerA(char *a1, __int64 a2, __int64 *a3, const char *a4, va_list ArgList)
{
  __int64 v6; // rbx
  unsigned int v8; // ebp
  int v9; // eax

  v6 = 255LL;
  v8 = 0;
  v9 = vsnprintf(a1, 0xFFuLL, a4, ArgList);
  if ( v9 < 0 || (unsigned __int64)v9 > 0xFF )
  {
    a1[255] = 0;
    v8 = -2147483643;
  }
  else if ( v9 == 255LL )
  {
    a1[255] = 0;
  }
  else
  {
    v6 = v9;
  }
  if ( a3 )
    *a3 = v6;
  return v8;
}

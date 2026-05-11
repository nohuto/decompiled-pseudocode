/*
 * XREFs of BusApiBuildProcessFunctionUnit @ 0x1C0030F04
 * Callers:
 *     USBParseProcessUnit @ 0x1C0035E60 (USBParseProcessUnit.c)
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C0030CA0 (BusApiBuildFunctionUnit.c)
 */

__int64 __fastcall BusApiBuildProcessFunctionUnit(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int *a8,
        PCWSTR SourceString,
        int a10,
        __int64 a11,
        unsigned int a12,
        __int64 a13)
{
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rsi
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8

  v13 = a12;
  v14 = 0LL;
  v15 = a13;
  a11 = 0LL;
  if ( a12 && !a13 )
    return 3221225485LL;
  v18 = BusApiBuildFunctionUnit(a1, a2, 4, a5, a6, a7, a8, SourceString, 4 * a12, &a11);
  if ( v18 >= 0 )
  {
    v19 = a11;
    if ( a11 )
    {
      *(_DWORD *)(a11 + 64) = a4;
      *(_DWORD *)(v19 + 76) = a10;
      *(_DWORD *)(v19 + 80) = v13;
      if ( (_DWORD)v13 )
      {
        v20 = v13;
        *(_QWORD *)(v19 + 88) = v19 + 12 * (a7 + 8LL);
        do
        {
          *(_DWORD *)(v14 + *(_QWORD *)(v19 + 88)) = *(_DWORD *)(v14 + v15);
          v14 += 4LL;
          --v20;
        }
        while ( v20 );
      }
    }
  }
  return (unsigned int)v18;
}

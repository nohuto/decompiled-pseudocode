/*
 * XREFs of WPP_SF_dSS @ 0x18001E098
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001CDB8 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_dSS(
        TRACEHANDLE LoggerHandle,
        __int64 a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // r8
  __int64 v7; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  bool v13; // zf
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = a4;
  v6 = a6;
  v7 = -1LL;
  v9 = 10LL;
  if ( a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a6[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10LL;
  }
  v12 = a5;
  if ( !a6 )
    v6 = L"NULL";
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v9 = 2 * v7 + 2;
    v13 = a5 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
           0x25u,
           &v15,
           4LL,
           v12,
           v9,
           v6,
           v11,
           0LL);
}

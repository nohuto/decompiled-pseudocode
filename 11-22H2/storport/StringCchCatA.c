/*
 * XREFs of StringCchCatA @ 0x1C0073310
 * Callers:
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C0071A98 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCatA(STRSAFE_LPSTR pszDest, size_t cchDest, STRSAFE_LPCSTR pszSrc)
{
  __int64 v4; // r9
  STRSAFE_LPSTR v5; // rax
  __int64 v6; // r8
  HRESULT result; // eax
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  const char *v11; // r10
  char v12; // r8
  char *v13; // rax

  v4 = 351LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (351 - v4) & -(__int64)(v4 != 0);
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
  {
    v8 = &pszDest[v6];
    v9 = 351 - v6;
    if ( 351 != v6 )
    {
      v10 = 2147483646LL;
      v11 = (const char *)(pszSrc - v8);
      do
      {
        if ( !v10 )
          break;
        v12 = v8[(_QWORD)v11];
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x8007007A : 0;
  }
  return result;
}

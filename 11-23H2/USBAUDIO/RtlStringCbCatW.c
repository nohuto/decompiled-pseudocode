/*
 * XREFs of RtlStringCbCatW @ 0x1C0017DFC
 * Callers:
 *     USBDInternal_BuildServicePath @ 0x1C001803C (USBDInternal_BuildServicePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r8
  size_t v4; // rdx
  NTSTRSAFE_PWSTR v5; // rax
  NTSTATUS result; // eax
  size_t v7; // r9
  wchar_t *v8; // rdx
  size_t v9; // rcx
  __int64 v10; // rax
  char *v11; // r9
  wchar_t v12; // r8
  wchar_t *v13; // rax

  v3 = cbDest >> 1;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    return -1073741811;
  v4 = cbDest >> 1;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = v3 - v4;
  else
    v7 = 0LL;
  if ( v4 )
  {
    v8 = &pszDest[v7];
    v9 = v3 - v7;
    if ( v3 != v7 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)L"\\Parameters" - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(wchar_t *)((char *)v8 + (_QWORD)v11);
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
    return v9 == 0 ? 0x80000005 : 0;
  }
  return result;
}

/*
 * XREFs of RtlStringCbCatW @ 0x1C0007A98
 * Callers:
 *     ?PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C001FBE4 (-PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v4; // r9
  NTSTRSAFE_PWSTR v5; // rax
  __int64 v6; // r8
  NTSTATUS result; // eax
  wchar_t *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // r10
  wchar_t v12; // r8
  wchar_t *v13; // rax

  v4 = 128LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (128 - v4) & -(__int64)(v4 != 0);
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v8 = &pszDest[v6];
    v9 = 128 - v6;
    if ( 128 != v6 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)pszSrc - (char *)v8);
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

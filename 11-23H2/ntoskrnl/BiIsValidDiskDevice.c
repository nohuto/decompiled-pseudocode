/*
 * XREFs of BiIsValidDiskDevice @ 0x140807A34
 * Callers:
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     BiGetNtPartitionPath @ 0x1408075E0 (BiGetNtPartitionPath.c)
 * Callees:
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1403D9D70 (_wcsnicmp.c)
 */

char __fastcall BiIsValidDiskDevice(wchar_t *Str1, wchar_t *a2, int *a3)
{
  wchar_t *v6; // r8
  wchar_t v7; // cx
  int v8; // edx
  __int16 v10; // r9

  if ( wcsicmp(a2, L"Directory") && wcsicmp(a2, L"SymbolicLink") )
    return 0;
  if ( wcsnicmp(Str1, L"Harddisk", 8uLL) )
    return 0;
  v6 = Str1 + 8;
  v7 = Str1[8];
  if ( !v7 )
    return 0;
  v8 = 0;
  if ( v7 != 48 )
  {
    v10 = 0;
    while ( (unsigned __int16)(v7 - 48) <= 9u )
    {
      if ( (unsigned __int16)++v10 > 0xAu )
        break;
      ++v6;
      v8 = v7 + 2 * (5 * v8 - 24);
      v7 = *v6;
      if ( !*v6 )
        goto LABEL_12;
    }
    return 0;
  }
  if ( Str1[9] )
    return 0;
LABEL_12:
  if ( a3 )
    *a3 = v8;
  return 1;
}

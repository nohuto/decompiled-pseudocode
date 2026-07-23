/*
 * XREFs of sub_140772E98 @ 0x140772E98
 * Callers:
 *     sub_1406C7604 @ 0x1406C7604 (sub_1406C7604.c)
 * Callees:
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     _ultow_s @ 0x1403E6130 (_ultow_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 */

__int64 __fastcall sub_140772E98(__int64 a1, __int64 a2, wchar_t *a3, __int64 a4, __int64 a5, HANDLE *a6)
{
  unsigned int v6; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  unsigned int i; // edi
  wchar_t v13; // ax
  int v14; // esi
  wchar_t *v15; // rcx
  int v16; // eax
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0;
  v22 = 0;
  Handle[0] = 0LL;
  v10 = wcstoul(L"999A", 0LL, 36);
  v11 = wcstoul(L"ZZZZ", 0LL, 36);
  if ( v10 - 1 > 0xFFFFFFFD || v11 - 1 > 0xFFFFFFFD )
    return (unsigned int)-1073741595;
  for ( i = 0; ; i = v10 )
  {
LABEL_4:
    if ( i <= 0x270F )
    {
      if ( swprintf_s(a3, 5uLL, L"%04u", i) >= 0 )
        goto LABEL_6;
      return (unsigned int)-1073741595;
    }
    if ( i >= v10 )
      break;
  }
  if ( i > v11 )
    return (unsigned int)-2147483622;
  if ( ultow_s(i, a3, 5uLL, 36) )
    return (unsigned int)-1073741595;
LABEL_6:
  v13 = *a3;
  v14 = 1;
  v15 = a3;
  while ( 2 )
  {
    if ( v13 )
    {
      if ( v13 > 0x61u )
      {
        if ( v13 == 101 || v13 == 105 || v13 == 111 )
        {
LABEL_39:
          v19 = v15 - a3;
          v20 = 3 - v19;
          if ( (_DWORD)v19 != 3 )
          {
            do
            {
              v14 *= 36;
              --v20;
            }
            while ( v20 );
          }
          goto LABEL_20;
        }
        if ( v13 <= 0x74u )
          goto LABEL_15;
        if ( v13 <= 0x76u )
          goto LABEL_39;
        v18 = v13 == 121;
      }
      else
      {
        if ( v13 == 97 || v13 == 65 || v13 == 69 || v13 == 73 || v13 == 79 )
          goto LABEL_39;
        if ( v13 <= 0x54u )
          goto LABEL_15;
        if ( v13 <= 0x56u )
          goto LABEL_39;
        v18 = v13 == 89;
      }
      if ( v18 )
        goto LABEL_39;
LABEL_15:
      v13 = *++v15;
      continue;
    }
    break;
  }
  v16 = sub_140772A24(a1, a2, (__int64)a3, 0, 1u, 0LL, (__int64)Handle, (__int64)&v22);
  if ( v16 == -1073741444 )
    return (unsigned int)-1073741595;
  if ( v16 < 0 )
  {
    return (unsigned int)v16;
  }
  else
  {
    if ( v22 != 1 )
    {
      ZwClose(Handle[0]);
      Handle[0] = 0LL;
LABEL_20:
      i += v14;
      goto LABEL_4;
    }
    *a6 = Handle[0];
  }
  return v6;
}

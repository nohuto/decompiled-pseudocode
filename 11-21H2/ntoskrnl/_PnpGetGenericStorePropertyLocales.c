/*
 * XREFs of _PnpGetGenericStorePropertyLocales @ 0x140699288
 * Callers:
 *     PiDqPnPGetObjectPropertyLocales @ 0x1406986FC (PiDqPnPGetObjectPropertyLocales.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1406988E0 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpCtxRegEnumValue @ 0x14069946C (_PnpCtxRegEnumValue.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpGetGenericStorePropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        unsigned int cchDest,
        unsigned int *a6)
{
  wchar_t *v6; // r15
  NTSTATUS v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // eax
  unsigned int v13; // eax
  __int64 v15; // rdi
  int dwFlags; // [rsp+20h] [rbp-F0h]
  __int64 v17; // [rsp+90h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-78h]
  __int64 v19; // [rsp+A0h] [rbp-70h]
  wchar_t pszDest[48]; // [rsp+B0h] [rbp-60h] BYREF
  wchar_t pszSrc[88]; // [rsp+110h] [rbp+0h] BYREF

  v6 = a4;
  v17 = a2;
  v19 = a1;
  *a6 = 0;
  Handle = 0LL;
  if ( cchDest )
    *a4 = 0;
  v7 = RtlStringCchPrintfExW(
         pszDest,
         0x30uLL,
         0LL,
         0LL,
         0x800u,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
         *(_DWORD *)a3,
         *(unsigned __int16 *)(a3 + 4),
         *(unsigned __int16 *)(a3 + 6),
         *(unsigned __int8 *)(a3 + 8),
         *(unsigned __int8 *)(a3 + 9),
         *(unsigned __int8 *)(a3 + 10),
         *(unsigned __int8 *)(a3 + 11),
         *(unsigned __int8 *)(a3 + 12),
         *(unsigned __int8 *)(a3 + 13),
         *(unsigned __int8 *)(a3 + 14),
         *(unsigned __int8 *)(a3 + 15),
         *(_DWORD *)(a3 + 16));
  if ( v7 >= 0 )
  {
    LOBYTE(dwFlags) = 0;
    v8 = PnpOpenPropertiesKey(v19, v17, pszDest, 1LL, dwFlags);
    v7 = v8;
    if ( v8 == -1073741772 )
    {
      return 0;
    }
    else if ( v8 >= 0 )
    {
      v10 = cchDest;
      v11 = 0;
      while ( 1 )
      {
        do
        {
          LODWORD(v17) = 85;
          v12 = PnpCtxRegEnumValue(v9, Handle, v11++, pszSrc, &v17, 0LL, 0LL, 0LL);
        }
        while ( v12 == -1073741789 );
        if ( v12 )
          break;
        if ( pszSrc[0] )
        {
          v15 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v15 < v10 )
          {
            RtlStringCchCopyExW(v6, v10, pszSrc, 0LL, 0LL, 0x900u);
            v10 -= v15;
            v6 += v15;
          }
          *a6 += v15;
        }
      }
      ZwClose(Handle);
      v13 = *a6 + 1;
      *a6 = v13;
      if ( v6 && cchDest >= v13 )
        *v6 = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}

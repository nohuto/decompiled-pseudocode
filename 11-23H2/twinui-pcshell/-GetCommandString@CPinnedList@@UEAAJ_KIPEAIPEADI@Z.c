/*
 * XREFs of ?GetCommandString@CPinnedList@@UEAAJ_KIPEAIPEADI@Z @ 0x180755030
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::GetCommandString(
        CPinnedList *this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int *a4,
        wchar_t *pszDst,
        unsigned int cchBuf)
{
  WCHAR *v6; // rbx
  char v7; // si
  __int64 result; // rax
  WCHAR pwszSrc[264]; // [rsp+30h] [rbp-228h] BYREF

  v6 = 0LL;
  v7 = a3;
  if ( (a3 & 0xFFFFFFFB) == 0 )
  {
    if ( a2 < 2 )
      v6 = (WCHAR *)(*(__int64 (__fastcall **)(char *, unsigned __int64, __int64, unsigned int *))(*((_QWORD *)this - 1)
                                                                                                 + 160LL))(
                      (char *)this - 8,
                      a2,
                      a3,
                      a4);
LABEL_8:
    result = 2147500033LL;
    if ( !v6 )
      return result;
    goto LABEL_9;
  }
  if ( (a3 & 0xFFFFFFFB) != 1
    || a2 >= 2
    || (*(int (__fastcall **)(char *, unsigned __int64, WCHAR *, __int64))(*((_QWORD *)this - 1) + 144LL))(
         (char *)this - 8,
         a2,
         pwszSrc,
         260LL) < 0 )
  {
    goto LABEL_8;
  }
  v6 = pwszSrc;
LABEL_9:
  if ( (v7 & 4) != 0 )
    return StringCchCopyW(pszDst, cchBuf, v6);
  else
    return SHUnicodeToAnsi(v6, (PSTR)pszDst, cchBuf) == 0 ? 0x80004005 : 0;
}

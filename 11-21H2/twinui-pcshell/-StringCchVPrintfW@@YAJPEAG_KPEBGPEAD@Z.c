/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18008D040
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18008CF70 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18010FDA8 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x180237C2C (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1802DB894 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x180188F78 (_vsnwprintf.c)
 */

__int64 __fastcall StringCchVPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, va_list a4)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v5 = 0;
    v6 = a2 - 1;
    v7 = vsnwprintf(a1, a2 - 1, a3, a4);
    if ( v7 < 0 || v7 > v6 )
    {
      a1[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      a1[v6] = 0;
      return 0LL;
    }
    return v5;
  }
  return result;
}

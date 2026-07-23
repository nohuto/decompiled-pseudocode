/*
 * XREFs of sub_14077ED0C @ 0x14077ED0C
 * Callers:
 *     sub_140781814 @ 0x140781814 (sub_140781814.c)
 *     sub_1407875CC @ 0x1407875CC (sub_1407875CC.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402DFEFC @ 0x1402DFEFC (sub_1402DFEFC.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

int __fastcall sub_14077ED0C(__int64 a1, const WCHAR *a2, char a3, WCHAR *a4, _WORD *a5, unsigned int a6)
{
  int result; // eax
  wchar_t *v10; // rax
  __int64 v11; // rcx
  const WCHAR *v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _WORD *v16; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  GUID Guid; // [rsp+60h] [rbp-20h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  Guid = 0LL;
  DestinationString = 0LL;
  result = sub_14077F150(a1, a2);
  if ( result >= 0 )
  {
    v10 = wcschr(a2 + 4, 0x5Cu);
    v11 = -1LL;
    if ( v10 )
    {
      v12 = v10 + 1;
      v13 = v10 - a2;
    }
    else
    {
      v12 = 0LL;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
    }
    if ( v13 > 0xFFFFFFFF )
      return -1073741675;
    if ( (unsigned int)v13 < 0x30 )
      return -1073741773;
    v14 = (unsigned int)(v13 + 1);
    if ( a3 )
    {
      v14 += 2LL;
      if ( v12 )
      {
        do
          ++v11;
        while ( v12[v11] );
        v14 += v11;
      }
    }
    if ( v14 > 0xFFFFFFFF )
      return -1073741675;
    if ( !a4
      || (result = sub_1402DFEFC(a4, 0x27uLL, &a2[(unsigned int)v13 - 38], 0x26uLL, 0LL, 0LL, 2048), result >= 0)
      && (result = RtlInitUnicodeStringEx(&DestinationString, a4), result >= 0)
      && (result = RtlGUIDFromString(&DestinationString, &Guid), result >= 0) )
    {
      if ( (unsigned int)v14 > a6 )
      {
        return -1073741789;
      }
      else
      {
        result = sub_1402DFEFC(a5, a6, a2, (unsigned int)v13, &v16, &v15, 2048);
        if ( result >= 0 )
        {
          *(_QWORD *)a5 = 0x23003F00230023LL;
          if ( a3 )
          {
            result = sub_1402E0340(v16, v15, L"\\#", &v16, &v15, 2048);
            if ( result >= 0 )
            {
              if ( v12 )
                return sub_1402E0340(v16, v15, v12, &v16, &v15, 2048);
            }
          }
        }
      }
    }
  }
  return result;
}

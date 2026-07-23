/*
 * XREFs of sub_140767130 @ 0x140767130
 * Callers:
 *     sub_140767040 @ 0x140767040 (sub_140767040.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140767130(wchar_t *Str1)
{
  __int64 v2; // rbx
  wchar_t *v4; // rax
  PVOID v5; // rax
  _QWORD *Buffer; // [rsp+20h] [rbp-288h] BYREF
  _QWORD v7[26]; // [rsp+30h] [rbp-278h] BYREF
  _WORD v8[5]; // [rsp+100h] [rbp-1A8h] BYREF
  wchar_t Str[195]; // [rsp+10Ah] [rbp-19Eh] BYREF

  memset(v7, 0, sizeof(v7));
  Buffer = v7;
  v2 = 0LL;
  if ( !wcsnicmp(Str1, L"SWD\\", 4uLL) && (int)sub_1402E0978(v8, 0x190uLL, (__int64)Str1) >= 0 )
  {
    v7[1] = v8;
    v4 = wcschr(Str, 0x5Cu);
    if ( v4 )
    {
      *v4 = 0;
      v7[2] = v4 + 1;
      v5 = RtlLookupElementGenericTableAvl(&stru_140C447A0, &Buffer);
      if ( v5 )
        return *(_QWORD *)v5;
    }
  }
  return v2;
}

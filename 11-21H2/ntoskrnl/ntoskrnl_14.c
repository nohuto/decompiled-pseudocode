/*
 * XREFs of ntoskrnl_14 @ 0x140945D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall ntoskrnl_14(__int64 a1, __int64 a2, LCID a3, __int64 a4, int a5, __int64 a6, __int64 a7, _DWORD *a8)
{
  __int64 result; // rax
  wchar_t *Buffer; // rcx
  int v13; // [rsp+60h] [rbp-118h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v15[176]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v15, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v13 = 0;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v15;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return 3221225473LL;
    Buffer = String.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  result = sub_14077DA5C(*(__int64 *)&qword_140D00AC0, a1, 1, 0, (__int64)Buffer, a2, (__int64)&v13, a6, a5, a7, 0);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741275 )
      return 3221225524LL;
  }
  else
  {
    *a8 = v13;
  }
  return result;
}

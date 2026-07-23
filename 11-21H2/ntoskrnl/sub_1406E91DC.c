/*
 * XREFs of sub_1406E91DC @ 0x1406E91DC
 * Callers:
 *     sub_14070F0D8 @ 0x14070F0D8 (sub_14070F0D8.c)
 * Callees:
 *     sub_1402042D0 @ 0x1402042D0 (sub_1402042D0.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1406E91DC(void *a1, void *a2, _DWORD *a3)
{
  __int64 v4; // r14
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  __int64 v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+28h] [rbp-D8h]
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v15; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v16; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v17; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v18; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v21; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String1; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v23[72]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR v24[72]; // [rsp+140h] [rbp+40h] BYREF
  WCHAR SourceString[128]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR v26[128]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v16 = 256LL;
  *a3 = 0;
  v15 = 256LL;
  v14 = 0LL;
  v18 = 132LL;
  v17 = 132LL;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  v21 = 0LL;
  v6 = sub_1402042D0(a1, SourceString, &v16, v23, &v18, v11, &v13);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0LL;
    v7 = 0;
  }
  else
  {
    if ( v6 < 0 )
      return v7;
    v8 = v13;
  }
  if ( v8 )
  {
    if ( !*a3 )
    {
      v9 = sub_1402042D0(a2, v26, &v15, v24, &v17, v12, &v14);
      v7 = v9;
      if ( v9 == -1073741275 || v9 == -2147483643 )
      {
        v7 = 0;
      }
      else
      {
        if ( v9 < 0 )
          return v7;
        v4 = v14;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  if ( v4 )
  {
    if ( (((unsigned int)v4 ^ (unsigned int)v8) & 0xFFFFFFDF) != 0
      || v16 != v15
      || v18 != v17
      || (RtlInitUnicodeString(&DestinationString, SourceString),
          RtlInitUnicodeString(&String1, v23),
          RtlInitUnicodeString(&String2, v26),
          RtlInitUnicodeString(&v21, v24),
          !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
      || !RtlEqualUnicodeString(&String1, &v21, 1u) )
    {
      *a3 = 1;
    }
  }
  return v7;
}

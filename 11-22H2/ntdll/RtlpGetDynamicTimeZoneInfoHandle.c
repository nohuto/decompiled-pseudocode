/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x18007EC28
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x18007EA90 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     RtlStringCbCatW @ 0x18007ED94 (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x18007EE40 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetDynamicTimeZoneInfoHandle(_WORD *a1, HANDLE *a2)
{
  __int64 v3; // r8
  signed __int64 v4; // r9
  WCHAR *v5; // rdx
  WCHAR v6; // ax
  WCHAR *v7; // rax
  __int64 result; // rax
  WCHAR *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rdx
  WCHAR v13; // r8
  WCHAR *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // [rsp+20h] [rbp-228h] BYREF
  WCHAR v17[256]; // [rsp+30h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  v3 = 256LL;
  v4 = (char *)L"Time Zones\\" - (char *)v17;
  v5 = v17;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v6 = *(WCHAR *)((char *)v5 + v4);
    if ( !v6 )
      break;
    *v5++ = v6;
    --v3;
  }
  while ( v3 );
  v7 = v5 - 1;
  if ( v3 )
    v7 = v5;
  *v7 = 0;
  result = v3 == 0 ? 0x80000005 : 0;
  if ( v3 )
  {
    result = RtlStringCbCatW(v17, 512LL, a1, v4);
    if ( (int)result >= 0 )
    {
      result = RtlStringLengthWorkerW(v17, 256LL, &v16);
      if ( (int)result >= 0 )
      {
        v9 = &v17[v16];
        v10 = 256 - v16;
        if ( 256 != v16 )
        {
          v11 = 2147483646LL;
          v12 = (char *)((char *)L"\\Dynamic DST" - (char *)v9);
          do
          {
            if ( !v11 )
              break;
            v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
            if ( !v13 )
              break;
            *v9 = v13;
            --v11;
            ++v9;
            --v10;
          }
          while ( v10 );
        }
        v14 = v9 - 1;
        if ( v10 )
          v14 = v9;
        v15 = -v10;
        *v14 = 0;
        result = v15 == 0 ? 0x80000005 : 0;
        if ( v15 )
          return RtlpGetRegistryHandle(3, v17, 0, a2);
      }
    }
  }
  return result;
}

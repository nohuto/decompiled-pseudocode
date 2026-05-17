/*
 * XREFs of RtlpIsEmptyImageFileOptionsKey @ 0x1800EE948
 * Callers:
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800EE8C8 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE948 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A42D0 (ZwEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x1800A46B0 (NtEnumerateKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE948 (RtlpIsEmptyImageFileOptionsKey.c)
 */

bool __fastcall RtlpIsEmptyImageFileOptionsKey(__int64 a1)
{
  int v2; // edi
  int inited; // ebx
  int i; // esi
  int v5; // edi
  char IsEmptyImageFileOptionsKey; // bl
  unsigned __int16 v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v9; // [rsp+32h] [rbp-CEh]
  unsigned __int16 *v10; // [rsp+38h] [rbp-C8h]
  HANDLE Handle; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v13[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+88h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-70h]
  unsigned __int16 v19; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v20; // [rsp+ACh] [rbp-54h] BYREF
  char v21; // [rsp+B0h] [rbp-50h] BYREF

  Handle = 0LL;
  v2 = 0;
  while ( 1 )
  {
    inited = ZwEnumerateValueKey();
    if ( inited >= 0 )
    {
      if ( v2 )
        break;
      v8 = v19;
      v9 = v19;
      v10 = &v20;
      if ( (int)RtlInitUnicodeStringEx((__int64)v12, (__int64)L"UseFilter") < 0 )
        break;
      inited = RtlInitUnicodeStringEx((__int64)v13, (__int64)L"FilterFullPath");
      if ( inited < 0
        || (unsigned int)RtlCompareUnicodeString(&v8, v12, 1) && (unsigned int)RtlCompareUnicodeString(&v8, v13, 1) )
      {
        break;
      }
    }
    ++v2;
    if ( inited < 0 )
    {
      if ( inited == -2147483622 )
      {
        for ( i = 0; ; ++i )
        {
          v5 = NtEnumerateKey();
          if ( v5 >= 0 )
          {
            v8 = v20;
            v9 = v20;
            v14 = 48;
            v10 = (unsigned __int16 *)&v21;
            v15 = a1;
            v16 = &v8;
            v17 = 576;
            v18 = 0LL;
            v5 = NtOpenKey();
            if ( v5 >= 0 )
            {
              IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(Handle);
              NtClose(Handle);
              if ( !IsEmptyImageFileOptionsKey )
                break;
            }
          }
          if ( v5 < 0 )
            return v5 == -2147483622;
        }
      }
      return 0;
    }
  }
  return 0;
}

/*
 * XREFs of sub_140698AAC @ 0x140698AAC
 * Callers:
 *     sub_14069717C @ 0x14069717C (sub_14069717C.c)
 *     sub_140697384 @ 0x140697384 (sub_140697384.c)
 *     sub_140698298 @ 0x140698298 (sub_140698298.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 *     sub_140A2DB88 @ 0x140A2DB88 (sub_140A2DB88.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

__int64 __fastcall sub_140698AAC(__int64 a1, int a2, _WORD *a3, char a4, __int64 a5, unsigned int a6, unsigned int *a7)
{
  char v7; // bl
  int v8; // r11d
  __int64 result; // rax
  int i; // r13d
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r15d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edi
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Value; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v29; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h]
  _QWORD v31[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h]
  GUID Guid; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v35[16]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR SourceString[40]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v37[176]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  v31[1] = a3;
  *a7 = 0;
  v8 = a2;
  v33 = a5;
  KeyHandle = 0LL;
  v29 = 0LL;
  Handle = 0LL;
  v26 = 0;
  Value = 0;
  Guid = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (result = sub_1402DF9D0(a3, 85LL, v31), (int)result >= 0) )
  {
    result = sub_14077EF20(a1, v8, 0, 9, 0);
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
    if ( (int)result >= 0 )
    {
      for ( i = 0; ; i = v31[0] )
      {
        while ( 1 )
        {
          do
          {
            v25 = 39;
            v12 = sub_1406CB3B4(KeyHandle);
            LODWORD(v31[0]) = ++i;
          }
          while ( v12 == -1073741789 );
          if ( v12 )
          {
            ZwClose(KeyHandle);
            return a6 < *a7 ? 0xC0000023 : 0;
          }
          if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
            && RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
          {
            LODWORD(v13) = 0;
            if ( a1 )
              v13 = *(_QWORD *)(a1 + 224);
            if ( (int)sub_14077FFEC(v13, (_DWORD)KeyHandle, (unsigned int)SourceString, 0, 9, (__int64)&v29) >= 0 )
              break;
          }
        }
        v14 = 0;
        while ( 1 )
        {
          do
          {
            v25 = 9;
            v15 = sub_1406CB3B4(v29);
            ++v14;
          }
          while ( v15 == -1073741789 );
          if ( v15 )
            break;
          if ( RtlInitUnicodeStringEx(&DestinationString, v35) >= 0
            && RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) >= 0 )
          {
            LODWORD(v16) = 0;
            if ( a1 )
              v16 = *(_QWORD *)(a1 + 224);
            if ( (int)sub_14077FFEC(v16, (_DWORD)v29, (unsigned int)v35, 0, 1, (__int64)&Handle) >= 0 )
            {
              if ( a4 )
              {
                v18 = 0;
                do
                {
                  v25 = 85;
                  v19 = sub_14069946C(v17, Handle, v18++, v37, &v25, &v26, 0LL, 0LL);
                }
                while ( v19 == -1073741789 );
                v20 = v19 == 0;
              }
              else
              {
                v25 = 0;
                v23 = sub_14077FC64(Handle, (__int64)&v25);
                if ( !v23 )
                {
LABEL_27:
                  v7 = 1;
                  goto LABEL_28;
                }
                v20 = v23 == -1073741789;
              }
              if ( v20 )
                goto LABEL_27;
LABEL_28:
              ZwClose(Handle);
              v20 = v7 == 0;
              v7 = 0;
              if ( !v20 )
              {
                v21 = *a7;
                if ( (unsigned int)v21 < a6 )
                {
                  v22 = v33;
                  *(GUID *)(v33 + 20 * v21) = Guid;
                  *(_DWORD *)(v22 + 20LL * *a7 + 16) = Value;
                  LODWORD(v21) = *a7;
                }
                *a7 = v21 + 1;
                v7 = 0;
              }
            }
          }
        }
        ZwClose(v29);
      }
    }
  }
  return result;
}

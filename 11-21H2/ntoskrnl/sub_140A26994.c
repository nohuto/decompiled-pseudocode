/*
 * XREFs of sub_140A26994 @ 0x140A26994
 * Callers:
 *     sub_140A26854 @ 0x140A26854 (sub_140A26854.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140A25858 @ 0x140A25858 (sub_140A25858.c)
 */

__int64 __fastcall sub_140A26994(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, _BYTE *a5)
{
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v18; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v18 = 0;
  *a5 = 0;
  v9 = sub_14078014C(a1, 10, (__int64)&DestinationString);
  if ( v9 >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *(_QWORD *)(a1 + 224);
    v9 = sub_14077FFEC(v10, *(__int64 *)&DestinationString.Length, a2, 0, 1u, (__int64)&v21);
    if ( v9 >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *(_QWORD *)(a1 + 224);
      v9 = sub_14077FFEC(v11, (__int64)v21, (__int64)L"BaseContainers", 0, 1u, (__int64)&Handle);
      if ( v9 >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *(_QWORD *)(a1 + 224);
        v9 = sub_14077FFEC(v12, (__int64)Handle, a3, 0, 3u, (__int64)&KeyHandle);
        if ( v9 >= 0 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, a4) >= 0 )
            ZwDeleteValueKey(KeyHandle, &DestinationString);
          v9 = sub_1406994BC(v13, (int)KeyHandle, 0, 0, (__int64)&v18, 0LL, 0LL);
          if ( v9 >= 0 )
          {
            if ( !v18 )
            {
              if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
                v16 = *(_QWORD *)(v15 + 8);
              else
                v16 = 0LL;
              sub_1406CB238((__int64)KeyHandle, 0LL, v16, 0);
            }
            v9 = sub_1406994BC(v14, (int)Handle, (int)&v18, 0, 0LL, 0LL, 0LL);
            if ( v9 >= 0 )
            {
              if ( !v18 )
              {
                v9 = sub_140A25858(a1, a2);
                if ( v9 >= 0 )
                  *a5 = 1;
              }
              sub_1407720B8(a1, (__int64)a4, 1, 0LL, 0LL, (__int64)&qword_140010A78);
            }
          }
        }
      }
    }
  }
  if ( v9 == -1073741772 || v9 == -1073741444 )
    v9 = 0;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  return (unsigned int)v9;
}

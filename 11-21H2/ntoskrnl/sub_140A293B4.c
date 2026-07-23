/*
 * XREFs of sub_140A293B4 @ 0x140A293B4
 * Callers:
 *     sub_140A29270 @ 0x140A29270 (sub_140A29270.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_140A293B4(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int inited; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r8
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v19 = 0;
  *a4 = 0;
  inited = sub_14078014C(a1, 11, (__int64)&DestinationString);
  if ( inited < 0
    || (a1 ? (v9 = *(_QWORD *)(a1 + 224)) : (v9 = 0LL),
        (inited = sub_14077FFEC(v9, *(__int64 *)&DestinationString.Length, a2, 0, 1u, (__int64)&Handle), inited < 0)
     || (a1 ? (v10 = *(_QWORD *)(a1 + 224)) : (v10 = 0LL),
         inited = sub_14077FFEC(v10, (__int64)Handle, (__int64)L"Devices", 0, 3u, (__int64)&KeyHandle),
         inited < 0)) )
  {
LABEL_23:
    if ( inited == -1073741772 || inited == -1073741444 )
      inited = 0;
    goto LABEL_26;
  }
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( inited >= 0 )
    inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
  if ( inited == -1073741772 || inited == -1073741444 || inited >= 0 )
  {
    v12 = (int)KeyHandle;
    *a4 = 1;
    inited = sub_1406994BC(v11, v12, 0, 0, (__int64)&v19, 0LL, 0LL);
    if ( inited >= 0 )
    {
      if ( !v19 )
      {
        if ( a1 && (v13 = *(_QWORD *)(a1 + 224)) != 0 )
          v14 = *(_QWORD *)(v13 + 8);
        else
          v14 = 0LL;
        sub_1406CB238((__int64)KeyHandle, 0LL, v14, 0);
      }
      sub_1407720B8(a1, (__int64)a3, 1, 0LL, 0LL, (__int64)&qword_140010A60);
      goto LABEL_26;
    }
    goto LABEL_23;
  }
LABEL_26:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}

/*
 * XREFs of _PnpSetPropertyWorker @ 0x140797E34
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x1407973B8 (_PnpSetGenericStoreProperty.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14022B77C (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x14022B830 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403DE5A0 (swprintf_s.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDC70 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegCreateKey @ 0x1407980B0 (_PnpCtxRegCreateKey.c)
 *     _RegRtlSetValue @ 0x1407D4CA4 (_RegRtlSetValue.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B4A8 (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PnpSetPropertyWorker(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        ULONG a7)
{
  __int16 v7; // r11
  int v11; // ebx
  int Key; // eax
  int v13; // eax
  int v14; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-E8h]
  HANDLE v21; // [rsp+90h] [rbp-80h] BYREF
  HANDLE v22; // [rsp+98h] [rbp-78h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  int v24; // [rsp+A4h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-60h]
  __int64 v27; // [rsp+B8h] [rbp-58h]
  size_t pcchLength; // [rsp+C0h] [rbp-50h] BYREF
  wchar_t Dst[12]; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t pszDest[40]; // [rsp+E0h] [rbp-30h] BYREF

  v7 = 0;
  v26 = a2;
  v27 = a6;
  v24 = 0;
  v23 = 0;
  v22 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  if ( a7 > 0x7FFFFFFF )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v11 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength);
    if ( v11 < 0 )
      return (unsigned int)v11;
  }
  if ( a5 == 25 && a3 && *a3 != v7 )
    return (unsigned int)-1073741811;
  if ( RtlStringCchPrintfExW(pszDest, 0x27uLL, 0LL, 0LL, 0x800u, L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}") < 0 )
    goto LABEL_20;
  swprintf_s(Dst, 9uLL, L"%04lX", *(unsigned int *)(a4 + 16));
  v11 = PnpOpenPropertiesKey(a1, v26, 0LL, 4, 1, (__int64)pszFormat, &v22);
  if ( v11 < 0 )
  {
    v22 = 0LL;
    goto LABEL_13;
  }
  Key = PnpCtxRegCreateKey(a1, (_DWORD)v22, (unsigned int)pszDest, 0, 4, 0LL, (__int64)&v21, (__int64)&v24);
  if ( Key == -1073741444 )
    goto LABEL_20;
  if ( Key < 0 )
  {
    v21 = 0LL;
    v11 = Key;
    goto LABEL_13;
  }
  v13 = PnpCtxRegCreateKey(a1, (_DWORD)v21, (unsigned int)Dst, 0, 65542, 0LL, (__int64)&Handle, (__int64)&v23);
  if ( v13 == -1073741444 )
  {
LABEL_20:
    v11 = -1073741595;
LABEL_13:
    if ( Handle )
    {
      ZwClose(Handle);
      if ( v11 < 0 && v23 == 1 )
      {
        if ( a1 && (v16 = *(_QWORD *)(a1 + 224)) != 0 )
          v17 = *(_QWORD *)(v16 + 8);
        else
          v17 = 0LL;
        RegRtlDeleteTreeInternal(v21, Dst, v17, 0LL);
      }
    }
    goto LABEL_15;
  }
  if ( v13 >= 0 )
  {
    v14 = RegRtlSetValue(Handle, a7);
    if ( v14 != -1073741444 )
    {
      if ( v14 < 0 )
        v11 = v14;
      goto LABEL_13;
    }
    goto LABEL_20;
  }
  Handle = 0LL;
  v11 = v13;
LABEL_15:
  if ( v21 )
  {
    ZwClose(v21);
    if ( v11 < 0 && v24 == 1 )
    {
      if ( a1 && (v18 = *(_QWORD *)(a1 + 224)) != 0 )
        v19 = *(_QWORD *)(v18 + 8);
      else
        v19 = 0LL;
      RegRtlDeleteTreeInternal(v22, pszDest, v19, 0LL);
    }
  }
  if ( v22 )
    ZwClose(v22);
  return (unsigned int)v11;
}

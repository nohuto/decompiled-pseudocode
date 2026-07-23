/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x1407DC404
 * Callers:
 *     IoGetDeviceInterfacePropertyData @ 0x1407DC3C0 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     _PnpGetObjectProperty @ 0x1406D02A0 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D3FF4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406D4364 (PnpUnicodeStringToWstr.c)
 *     RtlLCIDToCultureName @ 0x1409BEDA0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  wchar_t *Buffer; // rsi
  int ObjectProperty; // ebx
  void *v14; // [rsp+60h] [rbp-118h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v16[176]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v16, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v14 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v16;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
    Buffer = String.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  ObjectProperty = PnpUnicodeStringToWstr(&v14, 0LL, (unsigned __int16 *)a1);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)v14,
                       3LL,
                       0LL,
                       (__int64)Buffer,
                       a2,
                       a8,
                       a6,
                       a5,
                       a7,
                       0);
  PnpUnicodeStringToWstrFree(v14, a1);
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}

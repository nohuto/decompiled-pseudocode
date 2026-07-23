/*
 * XREFs of PnpSetDevicePropertyData @ 0x140866B78
 * Callers:
 *     IoSetDevicePropertyData @ 0x140866AD0 (IoSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x1403B6840 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796C98 (PiPnpRtlSetObjectProperty.c)
 *     PnpSetInterruptInformation @ 0x140859F04 (PnpSetInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1409BEDA0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  __int64 v10; // rdi
  wchar_t *Buffer; // rcx
  int v12; // ebx
  __int64 v14; // rax
  UNICODE_STRING String; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v16[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset(v16, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  if ( !a1 || (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0 || !*(_QWORD *)(v10 + 48) )
    return (unsigned int)-1073741808;
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
  v12 = PiPnpRtlSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          *(const WCHAR **)(v10 + 48),
          1,
          0LL,
          (__int64)Buffer,
          a2,
          a5,
          a7,
          a6,
          0);
  if ( v12 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 16) != 2 )
      goto LABEL_8;
    v14 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( v14 )
      goto LABEL_8;
    v12 = PnpSetInterruptInformation(a1, a7, a6);
  }
  if ( v12 == -1073741275 )
    v12 = -1073741772;
LABEL_8:
  if ( *(int *)(v10 + 300) >= 773 )
    PnpSetDeviceInstancePropertyChangeEvent(v10);
  return (unsigned int)v12;
}

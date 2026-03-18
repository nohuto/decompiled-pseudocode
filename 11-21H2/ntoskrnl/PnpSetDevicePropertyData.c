/*
 * XREFs of PnpSetDevicePropertyData @ 0x14080DA78
 * Callers:
 *     IoSetDevicePropertyData @ 0x14080D9D0 (IoSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x1403A5358 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x140771524 (PiPnpRtlSetObjectProperty.c)
 *     PnpSetInterruptInformation @ 0x14085ADDC (PnpSetInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  __int64 v10; // rdi
  const WCHAR *v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE *v17; // [rsp+58h] [rbp-F0h]
  _BYTE v18[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset(v18, 0, 0xAAuLL);
  v16 = 0LL;
  if ( !a1 || (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0 || (v11 = *(const WCHAR **)(v10 + 48)) == 0LL )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    WORD1(v16) = 170;
    v17 = v18;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v16) )
      return (unsigned int)-1073741823;
    v11 = *(const WCHAR **)(v10 + 48);
    v12 = (__int64)v17;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v11, 1, 0LL, v12, a2, a5, a7, a6, 0);
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 16) != 2 )
      goto LABEL_8;
    v15 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v15 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( v15 )
      goto LABEL_8;
    v13 = PnpSetInterruptInformation(a1, a7, a6);
  }
  if ( v13 == -1073741275 )
    v13 = -1073741772;
LABEL_8:
  if ( *(int *)(v10 + 300) >= 773 )
    PnpSetDeviceInstancePropertyChangeEvent(v10);
  return (unsigned int)v13;
}

/*
 * XREFs of Counter_CreateTransferRingInstance @ 0x1C006E274
 * Callers:
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C000CF50 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Counter_CreateTransferRingInstance(__int64 *a1, int a2, PPCW_INSTANCE *a3)
{
  NTSTATUS result; // eax
  __int64 v6; // rdx
  int Data; // [rsp+20h] [rbp-88h]
  int v8; // [rsp+28h] [rbp-80h]
  int v9; // [rsp+30h] [rbp-78h]
  int v10; // [rsp+38h] [rbp-70h]
  struct _PCW_DATA v11; // [rsp+40h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  wchar_t pszDest[24]; // [rsp+60h] [rbp-48h] BYREF

  result = g_WdfDriverUsbXhciContext;
  DestinationString = 0LL;
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) && !a3[4] )
  {
    v6 = *a1;
    v10 = a2;
    v9 = *((unsigned __int8 *)a1 + 98);
    v8 = *(unsigned __int16 *)(a1[2] + 124);
    Data = *(_DWORD *)(*a1 + 176);
    if ( *(_DWORD *)(*a1 + 244) == 1 )
      RtlStringCchPrintfW(pszDest, 0x15uLL, L"%04X.%u.%04X.%02X.%u", *(unsigned __int16 *)(v6 + 248), Data, v8, v9, v10);
    else
      RtlStringCchPrintfW(pszDest, 0x15uLL, L"%S.%u.%04X.%02X.%u", v6 + 304, Data, v8, v9, v10);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v11.Data = a3;
    v11.Size = 40;
    return PcwCreateInstance(a3 + 4, Ctr_TransferRing, &DestinationString, 1u, &v11);
  }
  return result;
}

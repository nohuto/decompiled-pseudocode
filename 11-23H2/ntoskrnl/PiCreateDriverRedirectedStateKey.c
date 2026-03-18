/*
 * XREFs of PiCreateDriverRedirectedStateKey @ 0x1408713CC
 * Callers:
 *     PiCreateServiceStateKey @ 0x1408712B4 (PiCreateServiceStateKey.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     PiGetStateRootPath @ 0x140871470 (PiGetStateRootPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x140955C38 (PiCreateServiceKeyUnderPath.c)
 */

__int64 __fastcall PiCreateDriverRedirectedStateKey(__int64 CreateOptions, __int64 a2, _QWORD *a3)
{
  int StateRootPath; // edi
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( CreateOptions && *(_QWORD *)(CreateOptions + 8) && *(_WORD *)CreateOptions >= 2u && a3 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath");
    if ( StateRootPath >= 0 )
    {
      StateRootPath = PiCreateServiceKeyUnderPath(CreateOptions, &UnicodeString);
      if ( StateRootPath >= 0 )
        *a3 = 0LL;
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)StateRootPath;
}

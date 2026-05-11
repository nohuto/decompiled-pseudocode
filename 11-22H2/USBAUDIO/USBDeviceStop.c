/*
 * XREFs of USBDeviceStop @ 0x1C003BC10
 * Callers:
 *     USBDeviceSurpriseRemove @ 0x1C0031D40 (USBDeviceSurpriseRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     USBHwSelectNULLConfiguration @ 0x1C003299C (USBHwSelectNULLConfiguration.c)
 *     USBHwStopAllMIDIPipes @ 0x1C003BC90 (USBHwStopAllMIDIPipes.c)
 */

__int64 __fastcall USBDeviceStop(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v4; // rbp
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v4 + 192) == v4 + 192 || (v2 = USBHwStopAllMIDIPipes(), v2 >= 0) )
  {
    if ( !*(_BYTE *)(v1 + 67) )
      v2 = USBHwSelectNULLConfiguration(a1);
  }
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(v5 + 24))(*(_QWORD *)(v5 + 8));
  return (unsigned int)v2;
}

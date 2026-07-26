/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C011945C
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0119200 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x1C0119408 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01194DC (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueUlong(KRegKey *this, wchar_t *a2, unsigned int *a3)
{
  __int64 v3; // r9
  wchar_t *v4; // rax
  __int64 result; // rax
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueUlong(this, &v6, a3);
  v3 = 0x7FFFLL;
  v4 = a2;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    v6.Buffer = a2;
    v6.Length = 2 * (0x7FFF - v3);
    v6.MaximumLength = v6.Length + 2;
    return KRegKey::QueryValueUlong(this, &v6, a3);
  }
  return result;
}

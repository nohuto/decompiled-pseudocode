/*
 * XREFs of ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C01196F8
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0119200 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01194DC (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUshort(KRegKey *this, wchar_t *a2, unsigned __int16 *a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  NTSTATUS result; // eax
  struct _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( !a2 )
  {
LABEL_7:
    v8 = 0;
    result = KRegKey::QueryValueUlong(this, &v7, &v8);
    if ( result >= 0 )
    {
      if ( v8 > 0xFFFF )
      {
        return -1073741675;
      }
      else
      {
        *a3 = v8;
        return 0;
      }
    }
    return result;
  }
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v7.Buffer = a2;
    v7.Length = 2 * (0x7FFF - v4);
    v7.MaximumLength = v7.Length + 2;
    goto LABEL_7;
  }
  return result;
}

/*
 * XREFs of ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C010DE08
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010DFC0 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C010E340 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueUshort(KRegKey *this, wchar_t *a2, unsigned __int16 *a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  __int64 result; // rax
  struct _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( a2 )
  {
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
    if ( !v4 )
      return 3221225485LL;
    v7.Buffer = a2;
    v7.Length = -2 - 2 * v4;
    v7.MaximumLength = -2 * v4;
  }
  v8 = 0;
  result = KRegKey::QueryValueUlong(this, &v7, &v8);
  if ( (int)result >= 0 )
  {
    if ( v8 > 0xFFFF )
    {
      return 3221225621LL;
    }
    else
    {
      *a3 = v8;
      return 0LL;
    }
  }
  return result;
}

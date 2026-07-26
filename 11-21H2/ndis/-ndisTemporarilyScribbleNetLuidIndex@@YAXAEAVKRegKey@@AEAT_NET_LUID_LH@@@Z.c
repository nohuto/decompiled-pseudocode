/*
 * XREFs of ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C010DC74
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C010E340 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C012AF1C (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 */

void __fastcall ndisTemporarilyScribbleNetLuidIndex(KRegKey *this, union _NET_LUID_LH *a2)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  const wchar_t *v6; // rax
  signed int v7; // ecx
  __int16 v8; // r8
  ULONG64 v9; // rdx
  const wchar_t *v10; // rax
  signed int v11; // ecx
  __int16 v12; // bx
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  unsigned int Data; // [rsp+80h] [rbp+40h] BYREF

  Data = 0;
  v3 = 0x7FFFLL;
  v5 = 0x7FFFLL;
  v6 = L"NetLuidIndex";
  ValueName = 0LL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    v8 = 2 * v5;
    ValueName.Buffer = L"NetLuidIndex";
    ValueName.Length = -2 - v8;
    ValueName.MaximumLength = -v8;
  }
  if ( v7 < 0 || (int)KRegKey::QueryValueUlong(this, &ValueName, &Data) < 0 || Data != ((a2->Value >> 24) & 0xFFFFFF) )
  {
    v9 = (a2->Value >> 24) & 0xFFFFFF;
    v10 = L"NetLuidIndex";
    ValueName = 0LL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v3;
    }
    while ( v3 );
    v11 = v3 == 0 ? 0xC000000D : 0;
    if ( v3 )
    {
      v12 = 2 * v3;
      ValueName.Buffer = L"NetLuidIndex";
      ValueName.Length = -2 - v12;
      ValueName.MaximumLength = -v12;
    }
    if ( v11 >= 0 )
    {
      m_ptr = this->m_ptr;
      Data = v9;
      ZwSetValueKey(m_ptr, &ValueName, 0, 4u, &Data, 4u);
    }
    NdisTraceLoggingTemporarilyScribbleNetLuidIndex(a2);
  }
}

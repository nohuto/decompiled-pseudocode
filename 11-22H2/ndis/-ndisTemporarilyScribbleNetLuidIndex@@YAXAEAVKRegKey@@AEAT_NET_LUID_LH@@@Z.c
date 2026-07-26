/*
 * XREFs of ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0119664
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002AF64 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C011951C (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C0136C04 (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 */

void __fastcall ndisTemporarilyScribbleNetLuidIndex(KRegKey *this, union _NET_LUID_LH *a2)
{
  __int64 v4; // r8
  const wchar_t *v5; // rax
  __int64 v6; // rdx
  ULONG64 v7; // r8
  const wchar_t *v8; // rax
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  unsigned int Data; // [rsp+80h] [rbp+40h] BYREF

  Data = 0;
  v4 = 0x7FFFLL;
  v5 = L"NetLuidIndex";
  ValueName = 0LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( !v4
    || (ValueName.Buffer = L"NetLuidIndex",
        ValueName.Length = 2 * (0x7FFF - v4),
        ValueName.MaximumLength = ValueName.Length + 2,
        KRegKey::QueryValueUlong(this, &ValueName, &Data) < 0)
    || Data != ((a2->Value >> 24) & 0xFFFFFF) )
  {
    v6 = 0x7FFFLL;
    v7 = (a2->Value >> 24) & 0xFFFFFF;
    v8 = L"NetLuidIndex";
    ValueName = 0LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v6;
    }
    while ( v6 );
    if ( v6 )
    {
      ValueName.Buffer = L"NetLuidIndex";
      ValueName.Length = 2 * (0x7FFF - v6);
      ValueName.MaximumLength = ValueName.Length + 2;
      m_ptr = this->m_ptr;
      Data = v7;
      ZwSetValueKey(m_ptr, &ValueName, 0, 4u, &Data, 4u);
    }
    NdisTraceLoggingTemporarilyScribbleNetLuidIndex(a2);
  }
}

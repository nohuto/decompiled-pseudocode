/*
 * XREFs of ?SetValueUlong64@KRegKey@@QEAAJPEB_W_K@Z @ 0x1C012DCD8
 * Callers:
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x1C0134600 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong64(KRegKey *this, wchar_t *a2, __int64 a3)
{
  __int64 v3; // r9
  wchar_t *v4; // rax
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  __int64 Data; // [rsp+58h] [rbp+10h] BYREF

  ValueName = 0LL;
  if ( a2 )
  {
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
    if ( !v3 )
      return -1073741811;
    ValueName.Buffer = a2;
    ValueName.Length = -2 - 2 * v3;
    ValueName.MaximumLength = -2 * v3;
  }
  m_ptr = this->m_ptr;
  Data = a3;
  return ZwSetValueKey(m_ptr, &ValueName, 0, 0xBu, &Data, 8u);
}

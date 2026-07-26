/*
 * XREFs of ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x1C0139A68
 * Callers:
 *     ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x1C01402A0 (-ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall KRegKey::DeleteValue(KRegKey *this, wchar_t *a2)
{
  __int64 v2; // r8
  wchar_t *v3; // rax
  unsigned int result; // eax
  _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  ValueName = 0LL;
  if ( !a2 )
    return ZwDeleteValueKey(this->m_ptr, &ValueName);
  v2 = 0x7FFFLL;
  v3 = a2;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  result = v2 == 0 ? 0xC000000D : 0;
  if ( v2 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * (0x7FFF - v2);
    ValueName.MaximumLength = ValueName.Length + 2;
    return ZwDeleteValueKey(this->m_ptr, &ValueName);
  }
  return result;
}

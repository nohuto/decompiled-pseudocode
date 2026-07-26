/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C011BE34
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0119240 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x1C0140340 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong(KRegKey *this, wchar_t *a2, int a3)
{
  __int64 v3; // r9
  wchar_t *v4; // rax
  NTSTATUS result; // eax
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  ValueName = 0LL;
  if ( !a2 )
    goto LABEL_7;
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
    ValueName.Buffer = a2;
    ValueName.Length = 2 * (0x7FFF - v3);
    ValueName.MaximumLength = ValueName.Length + 2;
LABEL_7:
    m_ptr = this->m_ptr;
    Data = a3;
    return ZwSetValueKey(m_ptr, &ValueName, 0, 4u, &Data, 4u);
  }
  return result;
}

/*
 * XREFs of VfZwSetValueKey_Entry @ 0x140AD4ED0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140AD4FB4 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD503C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD5078 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetValueKey_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckUnicodeString(a1[4], *a1);
    return ViZwCheckVirtualAddress(a1[2], *a1);
  }
  return result;
}

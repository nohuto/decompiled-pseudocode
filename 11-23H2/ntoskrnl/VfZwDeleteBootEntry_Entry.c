/*
 * XREFs of VfZwDeleteBootEntry_Entry @ 0x140AD4650
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140AD503C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD5078 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteBootEntry_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckVirtualAddress(0LL, *v3);
  return result;
}

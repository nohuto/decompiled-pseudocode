/*
 * XREFs of VfZwSetDriverEntryOrder_Entry @ 0x140AD42A0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140AD502C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD5068 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetDriverEntryOrder_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR *v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckVirtualAddress(v3[2], *v3);
  return result;
}

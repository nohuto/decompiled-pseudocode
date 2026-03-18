/*
 * XREFs of VfZwQueryDriverEntryOrder_Entry @ 0x140AD3FB0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140AD503C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD5078 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDriverEntryOrder_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[2], *a1);
    return ViZwCheckVirtualAddress(a1[1], *a1);
  }
  return result;
}

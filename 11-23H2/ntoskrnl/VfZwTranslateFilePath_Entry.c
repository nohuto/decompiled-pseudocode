/*
 * XREFs of VfZwTranslateFilePath_Entry @ 0x140AD3FE0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140AD502C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD5068 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwTranslateFilePath_Entry(ULONG_PTR *a1)
{
  __int64 result; // rax

  result = ViZwShouldCheck();
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
    return ViZwCheckVirtualAddress(a1[1], *a1);
  }
  return result;
}

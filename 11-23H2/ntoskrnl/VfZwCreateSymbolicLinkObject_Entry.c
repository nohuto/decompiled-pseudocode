/*
 * XREFs of VfZwCreateSymbolicLinkObject_Entry @ 0x140AD4540
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140AD4F54 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140AD4FA4 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD502C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140AD5068 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateSymbolicLinkObject_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckObjectAttributes(a1[2], *a1);
    return ViZwCheckUnicodeString(a1[1], *a1);
  }
  return result;
}

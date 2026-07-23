/*
 * XREFs of sub_14029ED34 @ 0x14029ED34
 * Callers:
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall sub_14029ED34(PVOID Object, char a2, char a3)
{
  KPROCESSOR_MODE v6; // di
  BOOLEAN v7; // r9
  NTSTATUS result; // eax
  int v9; // eax

  v6 = a3 != 0 ? a2 : 0;
  while ( 1 )
  {
    v7 = a3 || a2 == 1;
    result = KeWaitForSingleObject(Object, Executive, v6, v7, 0LL);
    if ( result != 257 )
      break;
    v9 = *((_DWORD *)KeGetCurrentThread() + 344);
    if ( a3 )
      return (v9 & 1) != 0 ? -1073741749 : -1073741536;
    if ( (v9 & 1) != 0 )
      return -1073741749;
  }
  return result;
}

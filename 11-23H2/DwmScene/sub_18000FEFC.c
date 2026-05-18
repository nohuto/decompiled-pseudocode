/*
 * XREFs of sub_18000FEFC @ 0x18000FEFC
 * Callers:
 *     sub_18000DAD0 @ 0x18000DAD0 (sub_18000DAD0.c)
 *     sub_18000F050 @ 0x18000F050 (sub_18000F050.c)
 *     sub_18000F0D0 @ 0x18000F0D0 (sub_18000F0D0.c)
 * Callees:
 *     <none>
 */

HMODULE sub_18000FEFC()
{
  HMODULE result; // rax

  result = (HMODULE)qword_1801D3358;
  if ( !qword_1801D3358 )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    qword_1801D3358 = (__int64)result;
  }
  return result;
}

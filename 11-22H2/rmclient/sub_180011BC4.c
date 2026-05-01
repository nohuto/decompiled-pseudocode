/*
 * XREFs of sub_180011BC4 @ 0x180011BC4
 * Callers:
 *     sub_18000CEC0 @ 0x18000CEC0 (sub_18000CEC0.c)
 *     sub_18000DD30 @ 0x18000DD30 (sub_18000DD30.c)
 *     sub_180010420 @ 0x180010420 (sub_180010420.c)
 *     sub_1800104A0 @ 0x1800104A0 (sub_1800104A0.c)
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_180011DFC @ 0x180011DFC (sub_180011DFC.c)
 *     sub_180011F28 @ 0x180011F28 (sub_180011F28.c)
 *     sub_180012028 @ 0x180012028 (sub_180012028.c)
 *     sub_1800120BC @ 0x1800120BC (sub_1800120BC.c)
 *     sub_1800122B4 @ 0x1800122B4 (sub_1800122B4.c)
 * Callees:
 *     <none>
 */

HMODULE sub_180011BC4()
{
  HMODULE result; // rax

  result = (HMODULE)qword_1800329B8;
  if ( !qword_1800329B8 )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    qword_1800329B8 = (__int64)result;
  }
  return result;
}

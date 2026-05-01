/*
 * XREFs of sub_180011B8C @ 0x180011B8C
 * Callers:
 *     sub_18000F2D0 @ 0x18000F2D0 (sub_18000F2D0.c)
 *     sub_180011FB0 @ 0x180011FB0 (sub_180011FB0.c)
 * Callees:
 *     <none>
 */

HMODULE sub_180011B8C()
{
  HMODULE result; // rax

  result = (HMODULE)qword_180032980;
  if ( !qword_180032980 )
  {
    result = GetModuleHandleW(L"kernelbase.dll");
    qword_180032980 = (__int64)result;
  }
  return result;
}

/*
 * XREFs of _dynamic_atexit_destructor_for__g_uacIndicatorControlHost___0 @ 0x1802C82C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD dynamic_atexit_destructor_for__g_uacIndicatorControlHost___0()
{
  DWORD result; // eax

  if ( qword_1809904F8 )
  {
    PostThreadMessageW(idThread, 0x12u, 0LL, 0LL);
    result = WaitForSingleObject(qword_1809904F8, 0x1388u);
    qword_1809904F8 = 0LL;
  }
  return result;
}

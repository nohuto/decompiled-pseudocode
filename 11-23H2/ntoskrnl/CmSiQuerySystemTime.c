/*
 * XREFs of CmSiQuerySystemTime @ 0x14028F900
 * Callers:
 *     CmpReorganizeHive @ 0x140703020 (CmpReorganizeHive.c)
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1409A1C84 (SshpSessionManagerInterruptTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSiQuerySystemTime(_QWORD *a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000014];
  *a1 = MEMORY[0xFFFFF78000000014];
  return result;
}

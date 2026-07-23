/*
 * XREFs of sub_14085D4A0 @ 0x14085D4A0
 * Callers:
 *     sub_1403DA7E0 @ 0x1403DA7E0 (sub_1403DA7E0.c)
 * Callees:
 *     sub_14085D4CC @ 0x14085D4CC (sub_14085D4CC.c)
 */

__int64 sub_14085D4A0()
{
  __int64 result; // rax

  result = sub_14085D4CC(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\FileSystems\\NTFS");
  if ( (int)result < 0 )
    return sub_14085D4CC(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem");
  return result;
}

/*
 * XREFs of sub_180021300 @ 0x180021300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800013E0 @ 0x1800013E0 (sub_1800013E0.c)
 *     sub_1800211EC @ 0x1800211EC (sub_1800211EC.c)
 */

__int64 sub_180021300()
{
  __int64 result; // rax

  result = sub_1800211EC((__int64)&unk_1801D33BC);
  if ( !(_DWORD)result )
    return sub_1800013E0((ULONGLONG *)&dword_1801C8188);
  return result;
}

/*
 * XREFs of sub_1407DC9A8 @ 0x1407DC9A8
 * Callers:
 *     sub_1407DC6F4 @ 0x1407DC6F4 (sub_1407DC6F4.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 sub_1407DC9A8()
{
  __int64 v0; // rdx
  __int64 result; // rax

  v0 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1360LL);
  result = 0LL;
  if ( v0 )
  {
    if ( (*(_QWORD *)(v0 + 32) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    return *(_QWORD *)(v0 + 32);
  }
  return result;
}

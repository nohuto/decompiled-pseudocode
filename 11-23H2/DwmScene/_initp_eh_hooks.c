/*
 * XREFs of _initp_eh_hooks @ 0x1800037C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003BF94 @ 0x18003BF94 (sub_18003BF94.c)
 */

__int64 initp_eh_hooks()
{
  __int64 result; // rax

  result = sub_18003BF94(&unk_1801D3F40);
  qword_1801D3F60 = result;
  return result;
}

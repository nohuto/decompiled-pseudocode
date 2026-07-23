/*
 * XREFs of sub_14056C058 @ 0x14056C058
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_140932EB0 @ 0x140932EB0 (sub_140932EB0.c)
 */

__int64 __fastcall sub_14056C058(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = *((unsigned int *)CurrentThread + 199);
  *((_DWORD *)CurrentThread + 199) = 0;
  return sub_140932EB0(v3, a1);
}

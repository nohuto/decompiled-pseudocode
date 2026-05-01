/*
 * XREFs of sub_18000635C @ 0x18000635C
 * Callers:
 *     sub_1800061F0 @ 0x1800061F0 (sub_1800061F0.c)
 * Callees:
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 __fastcall sub_18000635C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  memset((void *)a4, 0, 0x48uLL);
  *(_QWORD *)(a4 + 48) = *a1;
  RtlInitializeSRWLock(a4 + 32);
  *(_DWORD *)(a4 + 64) &= ~1u;
  result = a4 + 16;
  *(_QWORD *)(a4 + 8) = a3;
  *(_QWORD *)(a4 + 40) = a2;
  *(_QWORD *)(a4 + 24) = a4 + 16;
  *(_QWORD *)(a4 + 16) = a4 + 16;
  return result;
}

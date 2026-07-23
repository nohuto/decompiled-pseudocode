/*
 * XREFs of sub_140932EB0 @ 0x140932EB0
 * Callers:
 *     sub_14056C058 @ 0x14056C058 (sub_14056C058.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140932EB0(int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = sub_140358A20(2u, 10, a1, (__int64)v7);
  KeLeaveCriticalRegion();
  result = v5;
  *a2 = v7[2];
  return result;
}

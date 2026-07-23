/*
 * XREFs of sub_140294A38 @ 0x140294A38
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_14029A86C @ 0x14029A86C (sub_14029A86C.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall sub_140294A38(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  _R8 = a1;
  if ( (*((_DWORD *)result + 29) & 0x100000) != 0 )
  {
    result = (struct _KTHREAD *)(__readmsr(0x6A7u) - 8);
    __asm { wrussq  qword ptr [rax], r8 }
    __writemsr(0x6A7u, (unsigned __int64)result);
  }
  return result;
}

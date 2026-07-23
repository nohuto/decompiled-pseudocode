/*
 * XREFs of sub_140348980 @ 0x140348980
 * Callers:
 *     sub_1403488C0 @ 0x1403488C0 (sub_1403488C0.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall sub_140348980(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax

  if ( a2 )
  {
    result = (struct _KTHREAD *)_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1592), a1);
  }
  else
  {
    result = KeGetCurrentThread();
    *((_QWORD *)result + 117) += a1;
  }
  __addgsqword(0x2EF8u, a1);
  return result;
}

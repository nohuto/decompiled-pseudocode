/*
 * XREFs of sub_14022B4B0 @ 0x14022B4B0
 * Callers:
 *     sub_1403488C0 @ 0x1403488C0 (sub_1403488C0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall sub_14022B4B0(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax

  if ( a2 )
  {
    result = (struct _KTHREAD *)_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1576), a1);
  }
  else
  {
    result = KeGetCurrentThread();
    *((_QWORD *)result + 115) += a1;
  }
  __addgsqword(0x2EE8u, a1);
  return result;
}

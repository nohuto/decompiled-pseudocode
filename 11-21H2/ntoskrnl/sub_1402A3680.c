/*
 * XREFs of sub_1402A3680 @ 0x1402A3680
 * Callers:
 *     sub_1403488C0 @ 0x1403488C0 (sub_1403488C0.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall sub_1402A3680(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax

  if ( a2 )
  {
    result = (struct _KTHREAD *)_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1584), a1);
  }
  else
  {
    result = KeGetCurrentThread();
    *((_QWORD *)result + 116) += a1;
  }
  __addgsqword(0x2EF0u, a1);
  return result;
}

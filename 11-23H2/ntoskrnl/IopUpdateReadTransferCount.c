/*
 * XREFs of IopUpdateReadTransferCount @ 0x14028C958
 * Callers:
 *     IopUpdateIrpTransferCount @ 0x14028C930 (IopUpdateIrpTransferCount.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IopUpdateReadTransferCount(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax

  if ( a2 )
  {
    result = (struct _KTHREAD *)_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1576), a1);
  }
  else
  {
    result = KeGetCurrentThread();
    result->ReadTransferCount += a1;
  }
  __addgsqword(0x2EE8u, a1);
  return result;
}

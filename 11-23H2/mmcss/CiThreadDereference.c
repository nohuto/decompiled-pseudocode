/*
 * XREFs of CiThreadDereference @ 0x1C000B830
 * Callers:
 *     CiThreadNotification @ 0x1C0001040 (CiThreadNotification.c)
 *     CiDispatchClose @ 0x1C000B7B0 (CiDispatchClose.c)
 *     CiThreadCreate @ 0x1C000C1B0 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiThreadDereference(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0x4873634Du);
  }
}

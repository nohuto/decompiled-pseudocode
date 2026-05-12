/*
 * XREFs of PmWmiCounterIoStart @ 0x1C0001E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall PmWmiCounterIoStart(__int64 a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned __int64 QpcTimeStamp; // [rsp+38h] [rbp+10h] BYREF

  QpcTimeStamp = 0LL;
  result = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  QpcTimeStamp = 1LL;
  *a2 = result;
  if ( !(unsigned int)_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 1uLL) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * HIDWORD(KeGetPcr()[1].LockArray));
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 80);
      if ( result > v6 )
      {
        result -= v6;
        *(_QWORD *)(v5 + 40) += result;
      }
    }
  }
  return result;
}

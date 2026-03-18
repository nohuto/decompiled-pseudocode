/*
 * XREFs of MiReturnCrossPartitionCharge @ 0x1405BF3F0
 * Callers:
 *     MiGetCrossPartitionCharges @ 0x1405BE6F4 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharge @ 0x1405BF3F0 (MiReturnCrossPartitionCharge.c)
 *     MiReturnCrossPartitionCharges @ 0x1405BF468 (MiReturnCrossPartitionCharges.c)
 * Callees:
 *     MiReturnCrossPartitionCharge @ 0x1405BF3F0 (MiReturnCrossPartitionCharge.c)
 */

__int64 __fastcall MiReturnCrossPartitionCharge(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r10
  _QWORD *i; // rcx

  v3 = 7LL;
  v4 = 32LL * a2;
  v5 = *(_QWORD *)(v4 + a1 + 2056) - a3;
  *(_QWORD *)(v4 + a1 + 2056) = v5;
  if ( a2 < 7 )
    return MiReturnCrossPartitionCharge(a1, (unsigned int)((a2 & 0xFFFFFFF9) != 0) + 7);
  if ( !v5 && (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    for ( i = (_QWORD *)(a1 + 2280); !*i; i += 4 )
    {
      if ( ++v3 >= 9 )
        return 1LL;
    }
  }
  return 0LL;
}

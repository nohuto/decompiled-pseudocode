/*
 * XREFs of PmEnumerateOverlaps @ 0x1C0004060
 * Callers:
 *     ?PartitionIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001590 (-PartitionIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PartitionIoctlVerify @ 0x1C000C72E (PartitionIoctlVerify.c)
 *     PartitionIoctlDsm @ 0x1C001D0A8 (PartitionIoctlDsm.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PmEnumerateOverlaps(
        _QWORD **a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 (__fastcall *a4)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64),
        __int64 a5)
{
  _QWORD *v5; // rsi
  _QWORD *v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 result; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // rsi

  v5 = *a1;
  while ( v5 != a1 )
  {
    v10 = v5;
    v5 = (_QWORD *)*v5;
    v11 = v10[2];
    if ( v11 > a2 )
    {
      v18 = v11 - a2;
      if ( v18 >= a3 )
        break;
      v19 = (unsigned int)v18;
      result = a4(1LL, 0LL, (unsigned int)v18, a2, a5);
      if ( (int)result < 0 )
        return result;
      a3 -= v19;
      a2 += v19;
    }
    if ( !a3 )
      return a4(4LL, 0LL, a3, a2, a5);
    v12 = v10[2];
    if ( v12 <= a2 )
    {
      v13 = a2 - v12;
      v14 = v10[4];
      if ( v13 < v14 )
      {
        v15 = v14 - v13;
        v16 = a3;
        if ( v15 < a3 )
          v16 = v15;
        result = a4(2LL, v10, v16, a2, a5);
        if ( (int)result < 0 )
          return result;
        a2 += v16;
        a3 -= v16;
        if ( !a3 )
          return a4(4LL, 0LL, a3, a2, a5);
      }
    }
  }
  if ( !a3 )
    return a4(4LL, 0LL, a3, a2, a5);
  v20 = a3;
  result = a4(3LL, 0LL, a3, a2, a5);
  if ( (int)result >= 0 )
  {
    a3 = 0LL;
    a2 += v20;
    return a4(4LL, 0LL, a3, a2, a5);
  }
  return result;
}

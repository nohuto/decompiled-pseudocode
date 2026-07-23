/*
 * XREFs of sub_1405DC298 @ 0x1405DC298
 * Callers:
 *     sub_1407EFD2C @ 0x1407EFD2C (sub_1407EFD2C.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 *     sub_14099CFAC @ 0x14099CFAC (sub_14099CFAC.c)
 *     sub_14099D0FC @ 0x14099D0FC (sub_14099D0FC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405DC3E8 @ 0x1405DC3E8 (sub_1405DC3E8.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_140989788 @ 0x140989788 (sub_140989788.c)
 *     sub_140994248 @ 0x140994248 (sub_140994248.c)
 */

__int64 sub_1405DC298()
{
  __int64 result; // rax
  char v1; // di
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  bool v5; // zf
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0;
  result = (__int64)memset(v6, 0, 0x4CuLL);
  if ( byte_140C5AC3C )
  {
    sub_1407628C0(&xmmword_140C23400, v6);
    result = sub_140989788(v6);
    v1 = 0;
    if ( (_BYTE)result )
    {
      result = sub_1405DC3E8(&v8, &v7);
      if ( (_BYTE)result )
      {
        v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F360);
        if ( !byte_140C22724 )
        {
          KeSetTimer2((__int64)&unk_140C1F2A0, v8, 0LL, 0LL);
          v1 = 1;
          dword_140C22728 = v7;
          byte_140C22724 = 1;
        }
        KeReleaseSpinLockFromDpcLevel(&qword_140C1F360);
        result = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v4 = *((_QWORD *)CurrentPrcb + 4375);
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
              v5 = ((unsigned int)result & *(_DWORD *)(v4 + 20)) == 0;
              *(_DWORD *)(v4 + 20) &= result;
              if ( v5 )
                result = sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v2);
        if ( v1 )
          return sub_140994248(v7, v8);
      }
    }
  }
  return result;
}

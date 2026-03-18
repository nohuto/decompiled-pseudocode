/*
 * XREFs of SmmIommuMapLogicalRange @ 0x1C006DDEC
 * Callers:
 *     SmmMapIommu @ 0x1C002FBA0 (SmmMapIommu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 SmmIommuMapLogicalRange(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v5[4]; // [rsp+48h] [rbp-20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( dword_1C0130A48 != 2 )
    return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0130A88)(a1, 3LL);
  v5[0] = 2LL;
  v4 = 0LL;
  v5[1] = a3 + 48;
  v5[2] = (unsigned __int64)*(unsigned int *)(a3 + 40) >> 12;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64 *, _QWORD, _QWORD, __int64 *))qword_1C0130A88)(
           a1,
           3LL,
           v5,
           (__int64 *)va,
           0LL,
           0LL,
           &v4);
}

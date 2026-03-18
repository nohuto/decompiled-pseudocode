/*
 * XREFs of HalpIommuAttachDeviceDomain @ 0x1405152FC
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x140518344 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x1405184B4 (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuAttachDeviceDomain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( HalpHvIommu )
    return 3221225659LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(a1 + 120))(*(_QWORD *)(a1 + 16), a2, a3, 0LL);
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = a3;
  return result;
}

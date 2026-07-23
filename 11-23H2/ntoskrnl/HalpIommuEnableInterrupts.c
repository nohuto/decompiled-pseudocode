/*
 * XREFs of HalpIommuEnableInterrupts @ 0x1403B59A4
 * Callers:
 *     HalpIommuInitSystem @ 0x140A89BC0 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpIommuEnableInterrupts()
{
  ULONG_PTR i; // rbx
  __int64 result; // rax

  if ( !HalpHvIommu )
  {
    for ( i = HalpIommuList; (ULONG_PTR *)i != &HalpIommuList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 304) )
        result = (*(__int64 (__fastcall **)(_QWORD))(i + 288))(*(_QWORD *)(i + 16));
    }
  }
  return result;
}

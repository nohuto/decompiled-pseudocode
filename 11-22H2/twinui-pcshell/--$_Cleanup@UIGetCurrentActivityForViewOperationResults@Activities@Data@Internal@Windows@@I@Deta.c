/*
 * XREFs of ??$_Cleanup@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@3@I@Z @ 0x18049A49C
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@3@PEAI@Z @ 0x18049A4EC (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVGetCurrentActivityForViewOperationRes.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@3@PEAI@Z @ 0x18049A5DC (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVGetCurrentActivityForViewOperationRes.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@3@PEAI@Z @ 0x18049A6D0 (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVGetCurrentActivityForViewOperationResults.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}

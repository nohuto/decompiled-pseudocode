/*
 * XREFs of ??$_Cleanup@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@3@I@Z @ 0x18008E7DC
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@3@PEAI@Z @ 0x18008E82C (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVTargetedContentTriggerInternal@Intern.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@3@PEAI@Z @ 0x18008E91C (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVTargetedContentTriggerInternal@Intern.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@3@PEAI@Z @ 0x18008EA10 (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVTargetedContentTriggerInternal@Internal@T.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,unsigned int>(
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

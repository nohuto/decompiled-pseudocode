/*
 * XREFs of ??$_Cleanup@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@3@I@Z @ 0x1800869B8
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@3@PEAI@Z @ 0x180086AAC (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVTargetedContentTriggerStateTransition.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@3@PEAI@Z @ 0x180086B9C (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVTargetedContentTriggerStateTransition.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@3@PEAI@Z @ 0x180086C90 (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVTargetedContentTriggerStateTransition@Int.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,unsigned int>(
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

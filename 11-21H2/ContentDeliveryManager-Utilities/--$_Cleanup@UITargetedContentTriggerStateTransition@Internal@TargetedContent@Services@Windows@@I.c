/*
 * XREFs of ??$_Cleanup@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@3@I@Z @ 0x180091AE4
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@4@PEAI@Z @ 0x180092DE0 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@Ta.c)
 *     ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@4@PEAI@Z @ 0x180092ED0 (-GetMany@-$IVectorView_impl@U-$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@.c)
 *     ?GetMany@?$IVector_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@4@PEAI@Z @ 0x180092FD0 (-GetMany@-$IVector_impl@U-$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@Targ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
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

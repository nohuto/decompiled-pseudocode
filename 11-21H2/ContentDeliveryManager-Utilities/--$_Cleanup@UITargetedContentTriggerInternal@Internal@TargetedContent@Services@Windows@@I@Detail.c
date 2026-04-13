/*
 * XREFs of ??$_Cleanup@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@3@I@Z @ 0x18009A414
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@4@PEAI@Z @ 0x18009D6C0 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedC.c)
 *     ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@4@PEAI@Z @ 0x18009D7B0 (-GetMany@-$IVectorView_impl@U-$AggregateType@PEAVTargetedContentTriggerInternal@Internal@Targete.c)
 *     ?GetMany@?$IVector_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@4@PEAI@Z @ 0x18009D8B0 (-GetMany@-$IVector_impl@U-$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedCon.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
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

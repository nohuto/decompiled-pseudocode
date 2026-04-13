/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@3@PEAI@Z @ 0x18008E87C
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerInternal@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@4@PEAI@Z @ 0x180091880 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVTargetedContentTriggerInternal@Internal@TargetedC.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??$_Cleanup@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@3@I@Z @ 0x18008E82C (--$_Cleanup@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@I@Detail.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *>,1>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
  {
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,unsigned int>(
      a3,
      *a4);
  }
  else
  {
    while ( v11 )
    {
      if ( (unsigned int)v8 < a2 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &a3[v8]);
        if ( v9 < 0 )
          goto LABEL_8;
        v8 = (unsigned int)(v8 + 1);
        v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
        if ( v9 >= 0 )
          continue;
      }
      if ( v9 < 0 )
        goto LABEL_8;
      break;
    }
    *a4 = v8;
  }
  return (unsigned int)v9;
}

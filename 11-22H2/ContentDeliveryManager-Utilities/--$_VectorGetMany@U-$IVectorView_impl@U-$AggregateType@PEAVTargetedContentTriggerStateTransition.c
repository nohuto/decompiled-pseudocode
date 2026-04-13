/*
 * XREFs of ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@3@PEAI@Z @ 0x180086BEC
 * Callers:
 *     ?GetMany@?$IVectorView_impl@U?$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAUITargetedContentTriggerStateTransition@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@4@PEAI@Z @ 0x180088220 (-GetMany@-$IVectorView_impl@U-$AggregateType@PEAVTargetedContentTriggerStateTransition@Internal@.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??$_Cleanup@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@3@I@Z @ 0x180086A08 (--$_Cleanup@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@I.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<Windows::Foundation::Internal::AggregateType<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition *>,1>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition *>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  unsigned int v9; // esi
  _DWORD *v10; // r12
  int v11; // edi
  unsigned int v12; // ecx
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0;
  v9 = 0;
  memset_0(a4, 0, 8LL * a3);
  v10 = a5;
  *a5 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, &v16);
  if ( v11 < 0 )
    goto LABEL_4;
  v12 = v16;
  if ( a2 > v16 )
  {
    v11 = -2147483637;
LABEL_4:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,unsigned int>(
      a4,
      v9);
    return (unsigned int)v11;
  }
  v14 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v15 = (unsigned int)v14 + a2;
      if ( (unsigned int)v15 >= v12 )
        break;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, v15, &a4[v14]);
      if ( v11 < 0 )
        goto LABEL_4;
      ++v9;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= a3 )
        break;
      v12 = v16;
    }
  }
  *v10 = v14;
  return (unsigned int)v11;
}

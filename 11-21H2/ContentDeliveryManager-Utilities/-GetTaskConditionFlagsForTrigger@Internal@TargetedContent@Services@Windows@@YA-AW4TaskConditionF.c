/*
 * XREFs of ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A54D0
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A5F50 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A61C0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(__int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 272LL))(a1, &v9);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      416LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v2,
      v7);
  v3 = &unk_18012FD90;
  v4 = 0;
  do
  {
    if ( (v9 & v3[1]) != 0 )
      v4 |= *v3;
    v3 += 2;
  }
  while ( v3 != (_DWORD *)&unk_18012FDB8 );
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 256LL))(a1, &v10);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      435LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5,
      v7);
  result = v4 | 0x10;
  if ( (v10 & 2) == 0 )
    return v4;
  return result;
}

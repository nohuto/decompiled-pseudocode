/*
 * XREFs of ??$AsWeak@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@YAJPEAUISubscriptionPriv@Internal@TargetedContent@ContentManagement@@PEAVWeakRef@01@@Z @ 0x180065DAC
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180069BA0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<ContentManagement::TargetedContent::Internal::ISubscriptionPriv>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = (**a1)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v12);
  if ( v3 < 0 )
  {
    v4 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return (unsigned int)v3;
  }
  v13 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  if ( v3 < 0 )
  {
    v6 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (unsigned int)v3;
  }
  v8 = v13;
  v9 = v13;
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v8 = v13;
  }
  v10 = *a2;
  *a2 = v9;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v8 = v13;
  }
  if ( v8 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v11 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}

/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072270
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x18006CBA0 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 *     ??1?$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18006E118 (--1-$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@.c)
 *     _lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator() @ 0x18006E8DC (_lambda_c4f33cd8951f7dbea74fc386c4e48681_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___::_scalar_deleting_destructor_ @ 0x18006EB50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___--_scala.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180072330 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISub_ea_180072330.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180072350 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISub_ea_180072350.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180072370 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISub_ea_180072370.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180072390 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  signed __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 8);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v2 = v1 - 1;
    v4 = _InterlockedCompareExchange64(a1 + 8, v1 - 1, v1);
    v3 = v1 == v4;
    v1 = v4;
    if ( v3 )
      goto LABEL_10;
  }
  do
    v5 = *(_DWORD *)(2 * v1 + 0x10);
  while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
  v2 = v5 - 1;
LABEL_10:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 64))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}

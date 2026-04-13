/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___::_scalar_deleting_destructor_ @ 0x18006EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___::_scalar_deleting_destructor_(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v4);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}

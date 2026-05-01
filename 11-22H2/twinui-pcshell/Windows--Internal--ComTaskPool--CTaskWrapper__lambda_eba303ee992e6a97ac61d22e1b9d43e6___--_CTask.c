/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___::_CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___ @ 0x1801E128C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___::_scalar_deleting_destructor_ @ 0x1801E14E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___--_scala.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___::_CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___(
        __int64 a1)
{
  volatile signed __int64 *v2; // rcx
  __int64 result; // rax

  v2 = *(volatile signed __int64 **)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}

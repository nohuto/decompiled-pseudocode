/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___::_CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___ @ 0x18019718C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___::_scalar_deleting_destructor_ @ 0x180197280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___--_scala.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFAA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___::_CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}

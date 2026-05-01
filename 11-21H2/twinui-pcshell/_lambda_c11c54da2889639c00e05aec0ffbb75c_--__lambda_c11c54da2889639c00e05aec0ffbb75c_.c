/*
 * XREFs of _lambda_c11c54da2889639c00e05aec0ffbb75c_::__lambda_c11c54da2889639c00e05aec0ffbb75c_ @ 0x180197168
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18000C880 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFAA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 */

__int64 __fastcall lambda_c11c54da2889639c00e05aec0ffbb75c_::__lambda_c11c54da2889639c00e05aec0ffbb75c_(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}

/*
 * XREFs of ??1?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001BD58
 * Callers:
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18001BF94 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x18001E850 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_18001DA60.c)
 */

__int64 __fastcall wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::~com_ptr_t<CDuckingManager,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(v1);
  return result;
}

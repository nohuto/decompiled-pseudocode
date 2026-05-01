/*
 * XREFs of ??1?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18054F40C
 * Callers:
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::__lambda_0ccf2911bb3556e965c79eb60c053427_ @ 0x1801B6774 (_lambda_0ccf2911bb3556e965c79eb60c053427_--__lambda_0ccf2911bb3556e965c79eb60c053427_.c)
 *     _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_ @ 0x1801B67C0 (_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)(v1 + 16));
  return result;
}

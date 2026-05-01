/*
 * XREFs of ??1?$ComPtr@VCClassicWindowExternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1803A8824
 * Callers:
 *     __lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator()_::_1_::dtor$0 @ 0x1802B73B2 (__lambda_9cd1b560a470dbb5c6e1d5da28bd3866_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017B6E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CClassicWindowExternal>::~ComPtr<CClassicWindowExternal>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}

/*
 * XREFs of wil::details::lambda_call__lambda_aae9143591c8bab91551e322b9127512___::_lambda_call__lambda_aae9143591c8bab91551e322b9127512___ @ 0x18015B52C
 * Callers:
 *     ?CreateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x18015B910 (-CreateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESO.c)
 * Callees:
 *     ?ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z @ 0x180058BA0 (-ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_aae9143591c8bab91551e322b9127512___::_lambda_call__lambda_aae9143591c8bab91551e322b9127512___(
        __int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = ***(_DWORD ***)a1;
    if ( v1 )
      DirectComposition::CDevice::ChannelReleaseResource(
        *(DirectComposition::CDevice **)(**(_QWORD **)(a1 + 8) + 456LL),
        v1);
  }
}

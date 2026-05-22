/*
 * XREFs of wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___ @ 0x1800ED794
 * Callers:
 *     ?CreateMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z @ 0x1800EFAB0 (-CreateMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z.c)
 *     ?CreateSharedMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x1800F0770 (-CreateSharedMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAU.c)
 *     ?DuplicateSharedMilResource@CDevice@DirectComposition@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPEAUIUnknown@@@Z @ 0x1800F1A60 (-DuplicateSharedMilResource@CDevice@DirectComposition@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPE.c)
 * Callees:
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___::_lambda_call__lambda_e7a42d53c5ce1a3e2e9ff6b7ee7ce3c1___(
        __int64 a1)
{
  _OWORD *v1; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = **(_OWORD ***)a1;
    if ( v1 )
      DirectComposition::CDevice::RemoveProxy(v1);
  }
}

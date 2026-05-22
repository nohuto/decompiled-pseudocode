/*
 * XREFs of wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___ @ 0x1800EC47C
 * Callers:
 *     ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808 (-Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z.c)
 *     ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8 (-Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV.c)
 *     ?Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID@@2PEAPEAV12@@Z @ 0x1800ECA70 (-Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID.c)
 *     ?CreateCrossContainerHostReadOnlySharedSectionProxy@CDevice@DirectComposition@@QEAAJ_KAEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedSectionProxy@2@@Z @ 0x1800EEEBC (-CreateCrossContainerHostReadOnlySharedSectionProxy@CDevice@DirectComposition@@QEAAJ_KAEBU_GUID@.c)
 * Callees:
 *     ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180021EF0 (-RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    DirectComposition::CDevice::RemoveNoRefProxy(**(void ***)(a1 + 8));
  }
}

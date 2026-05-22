/*
 * XREFs of wil::details::lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___::_lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___ @ 0x1800EC434
 * Callers:
 *     ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808 (-Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z.c)
 *     ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8 (-Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___::_lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___(
        __int64 a1)
{
  void *v1; // rbx
  HANDLE CurrentProcess; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = **(void ***)a1;
    if ( v1 )
    {
      CurrentProcess = GetCurrentProcess();
      NtUnmapViewOfSection(CurrentProcess, v1);
    }
  }
}

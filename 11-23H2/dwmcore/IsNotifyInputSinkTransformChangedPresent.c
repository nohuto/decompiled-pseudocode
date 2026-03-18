/*
 * XREFs of IsNotifyInputSinkTransformChangedPresent @ 0x180110404
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800672D0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180110E40 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNotifyInputSinkTransformChangedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1803E571C == 1 )
    return 1;
  if ( dword_1803E571C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_1803E571C = 2 - (v1 != 0);
  return result;
}

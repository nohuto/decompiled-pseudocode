/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1408470C0
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403A1214 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)ExAllocatePool2(256LL, 168LL, 1920232557LL);
  if ( !result )
    return 0LL;
  *result |= 0x400u;
  return result;
}

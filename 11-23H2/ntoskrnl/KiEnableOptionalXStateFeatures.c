/*
 * XREFs of KiEnableOptionalXStateFeatures @ 0x14057291C
 * Callers:
 *     KiPreprocessFault @ 0x14030DF74 (KiPreprocessFault.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x14026F8D0 (MmDeleteKernelStackEx.c)
 *     MmCreateKernelStack @ 0x1402716A0 (MmCreateKernelStack.c)
 *     KxEnableOptionalXStateFeatures @ 0x140572E54 (KxEnableOptionalXStateFeatures.c)
 */

__int64 __fastcall KiEnableOptionalXStateFeatures(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r8
  ULONG_PTR KernelStack; // rbx
  int v7; // esi
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v8 = 0;
  KernelStack = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) == 0 )
  {
    KernelStack = MmCreateKernelStack(
                    0x20u,
                    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL),
                    a1);
    if ( !KernelStack )
      return 3221225495LL;
    v2 = KernelStack - (unsigned int)KeDecoupledStateSaveAreaLength;
  }
  v7 = KxEnableOptionalXStateFeatures(a1, a2, v2, &v8);
  if ( v7 < 0 || !v8 )
  {
    if ( KernelStack )
      MmDeleteKernelStackEx(KernelStack, 8u, a1);
  }
  return (unsigned int)v7;
}

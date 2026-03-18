/*
 * XREFs of MiValidateKernelShadowStackPage @ 0x1405A5940
 * Callers:
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x1405A5628 (MiKernelShadowStackIdealForCaching.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x1405A5894 (MiUpdateKernelShadowStackOwnerData.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiValidateKernelShadowStackPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a2 + 32);
  if ( (_DWORD)result != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3505uLL,
      BugCheckParameter2,
      0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
      *(unsigned __int16 *)(a2 + 32));
  return result;
}

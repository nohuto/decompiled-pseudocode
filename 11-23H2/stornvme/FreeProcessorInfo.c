/*
 * XREFs of FreeProcessorInfo @ 0x1C0009B78
 * Callers:
 *     GetProcessorInformation @ 0x1C000A000 (GetProcessorInformation.c)
 *     NVMeControllerRemove @ 0x1C000E2F4 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000ED70 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 264);
  if ( v1 )
  {
    result = StorPortExtendedFunction(1LL, a1, v1);
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 272);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  return result;
}

/*
 * XREFs of FreeProcessorGroupInfo @ 0x1C0009B2C
 * Callers:
 *     GetProcessorGroupInformation @ 0x1C0009E70 (GetProcessorGroupInformation.c)
 *     NVMeControllerRemove @ 0x1C000E2F4 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorGroupInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 256);
  if ( v1 )
  {
    result = StorPortExtendedFunction(1LL, a1, v1);
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  *(_DWORD *)(a1 + 240) = 0;
  return result;
}

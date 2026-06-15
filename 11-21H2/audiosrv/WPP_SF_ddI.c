/*
 * XREFs of WPP_SF_ddI @ 0x18010E940
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18010AD60 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ddI(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_57553648dc9d3a5078fc664d84c702c1_Traceguids, 25LL, &v5);
}

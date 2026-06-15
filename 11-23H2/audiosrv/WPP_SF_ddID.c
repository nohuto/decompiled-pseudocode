/*
 * XREFs of WPP_SF_ddID @ 0x180102EF4
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x180014D6C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ddID(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_2b5f394d6942332cf81378c5e0b14847_Traceguids, 30LL, &v5);
}

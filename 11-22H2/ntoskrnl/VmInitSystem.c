/*
 * XREFs of VmInitSystem @ 0x140B5436C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x140222240 (ExInitializeLookasideListExInternal.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExRegisterHost @ 0x140823390 (ExRegisterHost.c)
 */

__int64 __fastcall VmInitSystem(int a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+58h] [rbp-30h]
  __int64 (__fastcall **v5)(int, int, int, int, __int64); // [rsp+60h] [rbp-28h]
  __int128 v6; // [rsp+68h] [rbp-20h]

  if ( a1 )
  {
    if ( a1 == 2 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(byte_140D1D598, 0LL, 0LL);
      VmpTraceLoggingProvider = (__int64)byte_140D1D598;
    }
  }
  else
  {
    v3[1] = 2;
    v4 = 512LL;
    v3[0] = 1441800;
    v6 = 0LL;
    v5 = &VmpHostInterface;
    result = ExRegisterHost(&VmpExtensionHost, a2, (unsigned __int16 *)v3);
    if ( (int)result < 0 )
      return result;
    ExInitializeLookasideListExInternal(&VmpLargeFaultBatchLookasideList, 0LL, 0LL, 512, 0, 0x8020uLL, 1649175894, 0, 0);
  }
  return 0LL;
}

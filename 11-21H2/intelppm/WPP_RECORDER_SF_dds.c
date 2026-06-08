/*
 * XREFs of WPP_RECORDER_SF_dds @ 0x1C00089E0
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C0026C74 (ValidatePerfDomainSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C0037A24 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C0037AE8 (ValidatePepPerformanceSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(a8 + v12) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
      a4,
      &a6,
      4LL,
      &a7);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids, v14, &a6);
}

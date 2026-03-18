/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x1C0014D18
 * Callers:
 *     ACPIBuildProcessDeviceFailure @ 0x1C000E680 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000E740 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000E8D0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C0012A90 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rsi
  __int64 v11; // rbx
  const char *v12; // rdi
  unsigned int v15; // ebp
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-78h]

  v10 = a9;
  v11 = -1LL;
  v12 = a10;
  v15 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
    }
    if ( a9 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a9[v17] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      a4,
      &a6,
      4LL,
      &a7);
  }
  if ( v12 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v12[v18] );
  }
  if ( !v12 )
    v12 = "NULL";
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
    v19 = v11 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  LOWORD(v21) = a4;
  return WppAutoLogTrace(
           a1,
           v15,
           6LL,
           &WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
           v21,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v10,
           v19,
           v12);
}

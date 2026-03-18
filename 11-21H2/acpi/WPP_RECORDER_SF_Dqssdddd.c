/*
 * XREFs of WPP_RECORDER_SF_Dqssdddd @ 0x1C0021818
 * Callers:
 *     ACPIThermalEvent @ 0x1C0060D00 (ACPIThermalEvent.c)
 *     ACPIThermalWorker @ 0x1C00959C0 (ACPIThermalWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Dqssdddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // [rsp+28h] [rbp-89h]

  v9 = a9;
  v10 = -1LL;
  v11 = a8;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(a9 + v16) );
    }
    if ( a8 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_BYTE *)(a8 + v17) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_bf1c19637c3439bdfb442f7739d79163_Traceguids,
      a4,
      &a6,
      4LL,
      &a7);
  }
  if ( v9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(v9 + v14) );
  }
  if ( v11 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(v11 + v10) );
  }
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, 16LL, &WPP_bf1c19637c3439bdfb442f7739d79163_Traceguids, v18, &a6, 4LL, &a7);
}

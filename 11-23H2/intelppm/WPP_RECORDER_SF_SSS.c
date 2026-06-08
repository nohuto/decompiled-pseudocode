/*
 * XREFs of WPP_RECORDER_SF_sss @ 0x1C000C108
 * Callers:
 *     AcpiParseCore @ 0x1C0029FD0 (AcpiParseCore.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        __int64 a7,
        __int64 a8)
{
  const char *v8; // rbp
  __int64 v9; // rbx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  const char *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-58h]

  v8 = a6;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_BYTE *)(a8 + v11) );
    }
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(a7 + v12) );
    }
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
    }
    WORD1(v14) = WORD1(a6);
    if ( !a6 )
      v14 = "NULL";
    HIWORD(v18) = WORD1(v14);
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
  }
  if ( a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(a8 + v15) );
  }
  if ( a7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(a7 + v16) );
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v18) = 70;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids, v18, v8);
}

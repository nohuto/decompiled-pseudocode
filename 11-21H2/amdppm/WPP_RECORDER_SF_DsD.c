/*
 * XREFs of WPP_RECORDER_SF_DsD @ 0x1C0007568
 * Callers:
 *     ValidateAcpi_PSD_TSD @ 0x1C002E028 (ValidateAcpi_PSD_TSD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DsD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        const char *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v11; // rdx
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-58h]

  v7 = (__int64)a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
      a4,
      &a6,
      4LL,
      v12);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids, v14, &a6);
}

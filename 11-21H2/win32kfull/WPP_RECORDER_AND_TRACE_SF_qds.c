/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qds @ 0x1C010E014
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC (-CreateForTopologyChange@CRecalcProp@@SA-AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]

  v11 = a11;
  v12 = -1LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      60LL,
      &a9,
      8LL,
      &a10,
      4LL,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      do
        ++v12;
      while ( v11[v12] );
    }
    if ( !v11 )
      v11 = "NULL";
    LOWORD(v19) = 60;
    WppAutoLogTrace(a4, 4LL, 23LL, &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids, v19, &a9, 8LL, &a10, 4LL, v11);
  }
}

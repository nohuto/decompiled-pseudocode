/*
 * XREFs of WPP_RECORDER_SF_sqss @ 0x1C0004B98
 * Callers:
 *     ACPIBuildProcessSynchronizationList @ 0x1C0004808 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002A088 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C002E5C4 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004B2C8 (ACPIBuildWakeEventDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        int a5,
        const char *a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  const char *v11; // rbp
  unsigned __int64 v13; // r14
  unsigned int v14; // r12d
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v23; // r11
  __int64 v24; // r9
  __int64 v25; // r9
  const char *v26; // r14
  __int64 v27; // r8
  const char *v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rdx
  const char *v31; // rcx
  int v32; // [rsp+20h] [rbp-88h]
  unsigned __int16 v34; // [rsp+C8h] [rbp+20h]

  v34 = a4;
  v9 = (__int64)a9;
  v10 = (__int64)a8;
  v11 = a6;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = a2;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 )
  {
    v23 = 10 * v13;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
    {
      if ( a9 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( a9[v24] );
        v25 = v24 + 1;
      }
      else
      {
        v25 = 5LL;
      }
      v26 = a9;
      if ( !a9 )
        v26 = "NULL";
      if ( a8 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( a8[v27] );
        v18 = v27 + 1;
      }
      v28 = a8;
      if ( !a8 )
        v28 = "NULL";
      if ( a6 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( a6[v29] );
        v30 = v29 + 1;
      }
      else
      {
        v30 = 5LL;
      }
      v31 = a6;
      if ( !a6 )
        v31 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, const ULONG_PTR *, _QWORD, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v23),
        43LL,
        &WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
        v34,
        v31,
        v30,
        &a7,
        8LL,
        v28,
        v18,
        v26,
        v25,
        0LL);
      a4 = v34;
    }
  }
  if ( v9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v9 + v19) );
  }
  if ( v10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v10 + v20) );
  }
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
    v21 = v15 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !a6 )
    v11 = "NULL";
  LOWORD(v32) = a4;
  return WppAutoLogTrace(a1, v14, a3, &WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids, v32, v11, v21, &a7);
}

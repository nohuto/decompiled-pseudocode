/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x1C00074DC
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0093BA0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ssssssqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        const char *a10,
        const char *a11,
        char a12,
        const char *a13,
        const char *a14)
{
  __int64 v14; // rbx
  const char *v15; // rdi
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  const char *v22; // r13
  bool v23; // zf
  __int64 v24; // rax
  const char *v25; // rdi
  __int64 v26; // rbx
  __int64 v28; // rbp
  __int64 v29; // rbp
  const char *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rsi
  const char *v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rdi
  const char *v36; // rax
  __int64 v37; // r11
  __int64 v38; // r11
  const char *v39; // r13
  __int64 v40; // r10
  __int64 v41; // r10
  const char *v42; // r12
  __int64 v43; // r9
  __int64 v44; // r9
  const char *v45; // r15
  __int64 v46; // r8
  __int64 v47; // r8
  const char *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rdx
  const char *v51; // rcx
  int v52; // [rsp+20h] [rbp-E8h]
  const char *v53; // [rsp+C0h] [rbp-48h]
  const char *v55; // [rsp+130h] [rbp+28h]

  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a14[v28] );
      v29 = v28 + 1;
    }
    else
    {
      v29 = 5LL;
    }
    v30 = a14;
    if ( !a14 )
      v30 = "NULL";
    v55 = v30;
    if ( a13 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( a13[v31] );
      v32 = v31 + 1;
    }
    else
    {
      v32 = 5LL;
    }
    v33 = a13;
    if ( !a13 )
      v33 = "NULL";
    v53 = v33;
    if ( a11 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( a11[v34] );
      v35 = v34 + 1;
    }
    else
    {
      v35 = 5LL;
    }
    v36 = a11;
    if ( !a11 )
      v36 = "NULL";
    if ( a10 )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( a10[v37] );
      v38 = v37 + 1;
    }
    else
    {
      v38 = 5LL;
    }
    v39 = a10;
    if ( !a10 )
      v39 = "NULL";
    if ( a9 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( a9[v40] );
      v41 = v40 + 1;
    }
    else
    {
      v41 = 5LL;
    }
    v42 = a9;
    if ( !a9 )
      v42 = "NULL";
    if ( a8 )
    {
      v43 = -1LL;
      do
        ++v43;
      while ( a8[v43] );
      v44 = v43 + 1;
    }
    else
    {
      v44 = 5LL;
    }
    v45 = a8;
    if ( !a8 )
      v45 = "NULL";
    if ( a7 )
    {
      v46 = -1LL;
      do
        ++v46;
      while ( a7[v46] );
      v47 = v46 + 1;
    }
    else
    {
      v47 = 5LL;
    }
    v48 = a7;
    if ( !a7 )
      v48 = "NULL";
    if ( a6 )
    {
      v49 = -1LL;
      do
        ++v49;
      while ( a6[v49] );
      v50 = v49 + 1;
    }
    else
    {
      v50 = 5LL;
    }
    v51 = a6;
    if ( !a6 )
      v51 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
      22LL,
      v51,
      v50,
      v48,
      v47,
      v45,
      v44,
      v42,
      v41,
      v39,
      v38,
      v36,
      v35,
      &a12,
      8LL,
      v53,
      v32,
      v55,
      v29,
      0LL);
  }
  v15 = a14;
  if ( a14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a14[v16] );
  }
  if ( !a14 )
    v15 = "NULL";
  a14 = v15;
  if ( a13 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a13[v17] );
  }
  if ( a11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a11[v18] );
  }
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a10[v19] );
  }
  if ( a9 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a9[v20] );
  }
  if ( a8 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a8[v21] );
  }
  v22 = a7;
  v23 = a7 == 0LL;
  if ( a7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a7[v24] );
    v23 = a7 == 0LL;
  }
  if ( v23 )
    v22 = "NULL";
  v25 = a6;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
    v26 = v14 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !a6 )
    v25 = "NULL";
  LOWORD(v52) = 22;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids, v52, v25, v26, v22);
}

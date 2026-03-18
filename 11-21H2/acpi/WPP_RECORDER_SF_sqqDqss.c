/*
 * XREFs of WPP_RECORDER_SF_sqqDqss @ 0x1C0002180
 * Callers:
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0002034 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C0049CC0 (ACPIBuildDiscoverDeviceCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqqDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rsi
  const char *v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v22; // r9
  __int64 v23; // r9
  const char *v24; // r11
  __int64 v25; // r8
  __int64 v26; // r8
  const char *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rdx
  const char *v30; // rcx
  int v31; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a12;
  v13 = -1LL;
  v14 = (__int64)a11;
  v16 = a6;
  v17 = a4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a12[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a12;
    if ( !a12 )
      v24 = "NULL";
    if ( a11 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a11[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a11;
    if ( !a11 )
      v27 = "NULL";
    if ( a6 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a6[v28] );
      v29 = v28 + 1;
    }
    else
    {
      v29 = 5LL;
    }
    v30 = a6;
    if ( !a6 )
      v30 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v17,
      v30,
      v29,
      &a7,
      8LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v27,
      v26,
      v24,
      v23,
      0LL);
  }
  if ( v12 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v12 + v18) );
  }
  if ( v14 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v14 + v19) );
  }
  if ( a6 )
  {
    do
      ++v13;
    while ( a6[v13] );
    v20 = v13 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !a6 )
    v16 = "NULL";
  LOWORD(v31) = v17;
  return WppAutoLogTrace(a1, 4LL, 6LL, a5, v31, v16, v20, &a7);
}

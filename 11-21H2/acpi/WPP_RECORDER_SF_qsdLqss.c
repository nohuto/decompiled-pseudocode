/*
 * XREFs of WPP_RECORDER_SF_qsdLqss @ 0x1C000859C
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0093F10 (ACPIBusIrpQueryId.c)
 *     ACPIDockIrpQueryID @ 0x1C00AACA0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
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
  unsigned int v17; // r15d
  unsigned int v18; // r12d
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // r9
  __int64 v24; // r9
  const char *v25; // r11
  __int64 v26; // r8
  const char *v27; // r10
  __int64 v28; // rcx
  __int64 v29; // rcx
  const char *v30; // rdx
  int v31; // [rsp+20h] [rbp-A8h]

  v12 = (__int64)a12;
  v13 = -1LL;
  v14 = (__int64)a11;
  v16 = a7;
  v17 = a2;
  v18 = a4;
  v19 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a12 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a12[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a12;
    if ( !a12 )
      v25 = "NULL";
    if ( a11 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a11[v26] );
      v19 = v26 + 1;
    }
    v27 = a11;
    if ( !a11 )
      v27 = "NULL";
    if ( a7 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a7[v28] );
      v29 = v28 + 1;
    }
    else
    {
      v29 = 5LL;
    }
    v30 = a7;
    if ( !a7 )
      v30 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v18,
      &a6,
      8LL,
      v30,
      v29,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v27,
      v19,
      v25,
      v24,
      0LL);
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v12 + v20) );
  }
  if ( v14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v14 + v21) );
  }
  if ( v16 )
  {
    do
      ++v13;
    while ( v16[v13] );
  }
  if ( !v16 )
    v16 = "NULL";
  LOWORD(v31) = v18;
  return WppAutoLogTrace(a1, v17, 5LL, a5, v31, &a6, 8LL, v16);
}

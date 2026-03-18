/*
 * XREFs of WPP_RECORDER_SF_sqSD @ 0x1C00529B0
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C00A0270 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, ...)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  const wchar_t *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  const wchar_t *v18; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, const wchar_t *);
  v6 = (__int64)v18;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v18 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v18[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = v18;
    v12 = -1LL;
    if ( !v18 )
      v11 = L"NULL";
    do
      ++v12;
    while ( aAcpiinternalno[v12] );
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
      21LL,
      "ACPIInternalNotifyAvailableDeviceObject",
      v12 + 1,
      (__int64 *)va,
      8LL,
      v11,
      v10,
      va1,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v6 + 2 * v13) );
  }
  do
    ++v7;
  while ( aAcpiinternalno[v7] );
  LOWORD(v15) = 21;
  return WppAutoLogTrace(
           a1,
           2LL,
           6LL,
           &WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
           v15,
           "ACPIInternalNotifyAvailableDeviceObject");
}

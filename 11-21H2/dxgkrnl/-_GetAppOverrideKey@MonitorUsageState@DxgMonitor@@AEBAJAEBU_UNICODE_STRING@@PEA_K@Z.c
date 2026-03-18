/*
 * XREFs of ?_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C03B9128
 * Callers:
 *     ?GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z @ 0x1C0217440 (-GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x1C03B8F5C (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsageState::_GetAppOverrideKey(
        __int64 **this,
        const struct _UNICODE_STRING *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  WCHAR *v7; // rbx
  NTSTATUS v8; // esi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  WCHAR *v11; // rdi
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64 *, __int64, _QWORD, WCHAR *); // rax
  NTSTATUS appended; // edi
  unsigned int Length; // edi
  unsigned __int64 v16; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 HashValue; // [rsp+88h] [rbp+48h] BYREF

  v7 = 0LL;
  v8 = -1073741789;
  v9 = 130;
  while ( 1 )
  {
    v9 *= 2;
    v10 = 2LL * v9;
    v11 = v7;
    if ( !is_mul_ok(v9, 2uLL) )
      v10 = -1LL;
    v7 = (WCHAR *)operator new[](v10, 0x4D677844u, 256LL, a4);
    if ( v11 )
      operator delete[](v11);
    if ( !v7 )
      break;
    v12 = **this;
    v13 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, WCHAR *))(v12 + 72);
    LOBYTE(v12) = 1;
    appended = v13(*this, v12, v9, v7);
    if ( appended >= 0 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v7);
      DestinationString.MaximumLength = 2 * v9 - 2;
      appended = RtlAppendUnicodeStringToString(&DestinationString, a2);
    }
    if ( appended != -2147483643 && appended != -1073741789 )
    {
      if ( appended < 0 )
      {
        WdLogSingleEntry2(2LL, this, appended);
LABEL_23:
        operator delete[](v7);
        return (unsigned int)appended;
      }
      HashValue = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v7);
      Length = DestinationString.Length;
      DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
      v8 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
      if ( v8 < 0 )
        WdLogSingleEntry0(1LL);
      if ( Length <= 2 )
      {
        if ( v8 >= 0 )
          goto LABEL_21;
      }
      else
      {
        DestinationString.MaximumLength -= DestinationString.Length;
        v16 = (unsigned __int64)DestinationString.Length >> 1;
        DestinationString.Length = Length - DestinationString.Length;
        DestinationString.Buffer = &v7[v16];
        v8 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue + 1);
        appended = v8;
        if ( v8 < 0 )
        {
          WdLogSingleEntry0(1LL);
          goto LABEL_23;
        }
LABEL_21:
        *a3 = HashValue;
      }
LABEL_22:
      appended = v8;
      goto LABEL_23;
    }
    if ( v9 >= 0x410 )
      goto LABEL_22;
  }
  WdLogSingleEntry0(6LL);
  return (unsigned int)-1073741801;
}

/*
 * XREFs of ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01D698C
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01D642C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA47C (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA574 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C01D6A40 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01D6B10 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 */

__int64 __fastcall DpiPersistence::AllocateMonitorSetIdFromAdapterSource(
        struct _LUID *this,
        const struct _LUID *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  int v8; // eax
  struct _UNICODE_STRING *v9; // rdx
  __int64 v10; // rdi
  int appended; // eax
  bool *v13; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING v14; // [rsp+80h] [rbp+18h] BYREF

  v5 = (unsigned int)a2;
  a3->Length = 0;
  v7 = operator new[](0x8002uLL, 0x63644356u, 256LL, (__int64)a4);
  a3->Buffer = (wchar_t *)v7;
  if ( v7 )
  {
    a3->MaximumLength = -32766;
    LOBYTE(v14.Length) = 0;
    v8 = DpiPersistence::CreateMonitorSetId(this, (const struct _LUID *)v5, (unsigned int)a3, &v14, v13);
    v10 = v8;
    if ( LOBYTE(v14.Length) )
    {
      return 3221225659LL;
    }
    else
    {
      if ( v8 < 0 || (appended = DpiPersistence::SortMonitorSetIdAndAppendHash(a3, v9), v10 = appended, appended < 0) )
      {
        WdLogSingleEntry1(2LL, v10);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to get Monitor ID String to write to registry (Status = 0x%I64x)",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return (unsigned int)v10;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 32770LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create o_pMonitorSetId->Buffer of size 0x%I64x",
      32770LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}

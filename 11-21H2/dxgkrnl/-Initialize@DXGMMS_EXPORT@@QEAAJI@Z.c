/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C0218360
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C02181B8 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C02184B8 (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  char *v2; // rbx
  const WCHAR *v5; // rdx
  unsigned int i; // esi
  NTSTATUS v7; // ecx
  void *ExportAddress; // r14
  void *v9; // rax
  __int64 v10; // r9
  void *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // rax
  __int64 v17; // rbx
  const wchar_t *v18; // r9
  int v19; // edx

  v2 = (char *)this + 8;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v17 = -1073741811LL;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v18 = L"Unsupported DXGMMS version requested, returning 0x%I64x";
      goto LABEL_28;
    }
    v5 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v5 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 8), v5);
  for ( i = 0; ; ++i )
  {
    v7 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v2, 0x38uLL);
    if ( v7 >= 0 || v7 == -1073741554 )
      break;
    if ( i >= 0xA )
    {
      WdLogSingleEntry5(0LL, 275LL, 27LL, v7, i, 0LL);
    }
    else
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "An attempt to load dxgmms1.sys failed with NTSTATUS 0x%x.\n"
        "We broke into the  debugger to allow a chance for debugging this issue.\n"
        "Another attempt to load it will be made now.\n",
        v7);
      __debugbreak();
    }
  }
  *(_BYTE *)this = 1;
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, "VidMmInterface", 0xFu);
  v9 = DXGMMS_EXPORT::FindExportAddress(this, "VidSchInterface", 0x10u);
  v11 = v9;
  if ( !ExportAddress || !v9 )
  {
    v17 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v18 = L"Required export can't be found in dxgmms.sys, returning 0x%I64x";
LABEL_28:
    v19 = 0x40000;
    goto LABEL_29;
  }
  v12 = operator new[](0x10uLL, 0x4B677844u, 64LL, v10);
  v14 = a2 + 1;
  if ( v12 )
  {
    *(_DWORD *)v12 = v14;
    *(_QWORD *)(v12 + 8) = ExportAddress;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 9) = v12;
  if ( v12 )
  {
    v15 = operator new[](0x10uLL, 0x4B677844u, 64LL, v13);
    if ( v15 )
    {
      *(_DWORD *)v15 = v14;
      *(_QWORD *)(v15 + 8) = v11;
    }
    else
    {
      v15 = 0LL;
    }
    *((_QWORD *)this + 8) = v15;
    if ( *((_QWORD *)this + 9) )
      return 0LL;
    v17 = -1073741801LL;
    WdLogSingleEntry1(6LL, -1073741801LL);
    v18 = L"Failed to allocate VIDSCH_EXPORT returning 0x%I64x";
  }
  else
  {
    v17 = -1073741801LL;
    WdLogSingleEntry1(6LL, -1073741801LL);
    v18 = L"Failed to allocate VIDMM_EXPORT returning 0x%I64x";
  }
  v19 = 262145;
LABEL_29:
  DxgkLogInternalTriageEvent(0LL, v19, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v17;
}

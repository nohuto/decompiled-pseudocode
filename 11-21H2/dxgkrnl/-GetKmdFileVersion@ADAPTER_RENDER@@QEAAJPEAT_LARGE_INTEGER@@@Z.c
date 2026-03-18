/*
 * XREFs of ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01E6C1C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDriverFullPath @ 0x1C01FD0D4 (DpiGetDriverFullPath.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C0215344 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetKmdFileVersion(ADAPTER_RENDER *this, union _LARGE_INTEGER *a2)
{
  union _LARGE_INTEGER *v2; // rsi
  bool v3; // zf
  unsigned int v6; // ebx
  int DriverFullPath; // eax
  int FileVersion; // eax
  __int64 v10; // rsi
  const wchar_t *v11; // r9
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-18h] BYREF

  v2 = (union _LARGE_INTEGER *)((char *)this + 616);
  v3 = *((_QWORD *)this + 77) == -1LL;
  v12 = 0LL;
  if ( !v3 )
  {
    v6 = 0;
LABEL_3:
    *a2 = *v2;
    goto LABEL_4;
  }
  DriverFullPath = DpiGetDriverFullPath(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL), &v12);
  v6 = DriverFullPath;
  if ( DriverFullPath < 0 )
  {
    v10 = DriverFullPath;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), DriverFullPath);
    v11 = L"DpiGetDriverFullPath failed on adapter %I64d (ntStatus = %I64d).";
  }
  else
  {
    FileVersion = DxgkpGetFileVersion(&v12, v2, 0LL);
    v6 = FileVersion;
    if ( FileVersion >= 0 )
      goto LABEL_3;
    v10 = FileVersion;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), FileVersion);
    v11 = L"Failed to get kernel mode driver DLL version on adapter %I64d (ntStatus = %I64d).";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, *((_QWORD *)this + 2), v10, 0LL, 0LL, 0LL);
LABEL_4:
  if ( v12.Buffer )
    ExFreePoolWithTag(v12.Buffer, 0);
  return v6;
}

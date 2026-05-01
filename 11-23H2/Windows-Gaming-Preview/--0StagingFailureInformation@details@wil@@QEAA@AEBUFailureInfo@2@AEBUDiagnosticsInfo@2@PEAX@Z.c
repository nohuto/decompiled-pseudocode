/*
 * XREFs of ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800125D8
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800127D8 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800026A0 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     memset_0 @ 0x18004C634 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
wil::details::StagingFailureInformation *__fastcall wil::details::StagingFailureInformation::StagingFailureInformation(
        wil::details::StagingFailureInformation *this,
        const struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3,
        void *a4)
{
  DWORD LastError; // ebp
  _BYTE *v8; // rsi
  __int64 (__fastcall *v9)(__int64, _DWORD *, char *, __int64); // r11
  char v10; // al
  _BYTE *v11; // rsi
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  const char *v15; // r9
  _BYTE *v16; // rbx
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  char v19; // al

  LastError = GetLastError();
  memset_0(this, 0, 0x68uLL);
  *(_DWORD *)this = *((_DWORD *)a2 + 2);
  *((_WORD *)this + 2) = *((_WORD *)a2 + 32);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 7);
  v8 = (char *)this + 104;
  if ( this != (wil::details::StagingFailureInformation *)-104LL )
    *v8 = 0;
  v9 = (__int64 (__fastcall *)(__int64, _DWORD *, char *, __int64))wil::details::g_pfnGetModuleInformation;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *, __int64))wil::details::g_pfnGetModuleInformation)(
            0LL,
            0LL,
            (char *)this + 104,
            64LL);
    v9 = (__int64 (__fastcall *)(__int64, _DWORD *, char *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
    *((_QWORD *)this + 2) = v8;
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 16);
  v11 = (char *)this + 168;
  v12 = (_DWORD *)((char *)this + 32);
  v13 = *((_QWORD *)a2 + 18);
  if ( this != (wil::details::StagingFailureInformation *)-168LL )
    *v11 = 0;
  if ( this != (wil::details::StagingFailureInformation *)-32LL )
    *v12 = 0;
  if ( v9 )
  {
    v14 = v9(v13, v12, (char *)this + 168, 64LL);
    v9 = (__int64 (__fastcall *)(__int64, _DWORD *, char *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  else
  {
    v14 = 0;
  }
  if ( v14 )
    *((_QWORD *)this + 5) = v11;
  v15 = (const char *)*((_QWORD *)a2 + 3);
  if ( v15 && *(_WORD *)v15 )
  {
    wil::details::StringCchPrintfA(
      (wil::details::StagingFailureInformation *)((char *)this + 296),
      (char *)0x60,
      "%ws",
      v15);
    *((_QWORD *)this + 6) = (char *)this + 296;
    v9 = (__int64 (__fastcall *)(__int64, _DWORD *, char *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  *((_WORD *)this + 28) = a3[3].cost;
  *((struct DiagnosticsInfo *)this + 8) = a3[1];
  if ( wil::details::g_pfnGetModuleName )
  {
    *((_QWORD *)this + 9) = wil::details::g_pfnGetModuleName(v13);
    v9 = (__int64 (__fastcall *)(__int64, _DWORD *, char *, __int64))wil::details::g_pfnGetModuleInformation;
  }
  v16 = (char *)this + 232;
  v17 = (_DWORD *)((char *)this + 80);
  v18 = (__int64)*a3;
  if ( this != (wil::details::StagingFailureInformation *)-232LL )
    *v16 = 0;
  if ( this != (wil::details::StagingFailureInformation *)-80LL )
    *v17 = 0;
  if ( v9 )
    v19 = v9(v18, v17, (char *)this + 232, 64LL);
  else
    v19 = 0;
  if ( v19 )
    *((_QWORD *)this + 11) = v16;
  *((struct DiagnosticsInfo *)this + 12) = a3[2];
  SetLastError(LastError);
  return this;
}

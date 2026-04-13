/*
 * XREFs of ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18002B230
 * Callers:
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18003B644 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002C874 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180035F64 (-GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x180040BD0 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct DiagnosticsInfo *__fastcall wil::details::StagingFailureInformation::StagingFailureInformation(
        struct DiagnosticsInfo *this,
        const struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3,
        void *a4)
{
  char *v7; // r9
  char *v8; // r9
  char *v9; // r9
  unsigned __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]
  unsigned __int64 v13; // [rsp+20h] [rbp-18h]
  void *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = a4;
  LOBYTE(v14) = 0;
  HIDWORD(v14) = GetLastError();
  memset_0(this, 0, 0x68uLL);
  this->cost = *((_DWORD *)a2 + 2);
  LOWORD(this->flags) = *((_WORD *)a2 + 32);
  this[1] = *(struct DiagnosticsInfo *)((char *)a2 + 56);
  if ( wil::details::GetModuleInformationFromAddress(0LL, 0LL, (unsigned int *)&this[13], v7, v11) )
    this[2] = (struct DiagnosticsInfo)&this[13];
  this[3] = *(struct DiagnosticsInfo *)((char *)a2 + 128);
  if ( wil::details::GetModuleInformationFromAddress(
         *((wil::details **)a2 + 18),
         &this[4],
         (unsigned int *)&this[21],
         v8,
         v12) )
  {
    this[5] = (struct DiagnosticsInfo)&this[21];
  }
  v9 = (char *)*((_QWORD *)a2 + 3);
  if ( v9 && *(_WORD *)v9 )
  {
    wil::details::StringCchPrintfA((wil::details *)&this[37], (char *)0x60, (unsigned __int64)"%ws", v9);
    this[6] = (struct DiagnosticsInfo)&this[37];
  }
  LOWORD(this[7].cost) = a3[3].cost;
  this[8] = a3[1];
  if ( wil::details::g_pfnGetModuleName )
    this[9] = (struct DiagnosticsInfo)wil::details::g_pfnGetModuleName();
  if ( wil::details::GetModuleInformationFromAddress(
         *(wil::details **)a3,
         &this[10],
         (unsigned int *)&this[29],
         v9,
         v13) )
  {
    this[11] = (struct DiagnosticsInfo)&this[29];
  }
  this[12] = a3[2];
  wil::last_error_context::~last_error_context((wil::last_error_context *)&v14);
  return this;
}

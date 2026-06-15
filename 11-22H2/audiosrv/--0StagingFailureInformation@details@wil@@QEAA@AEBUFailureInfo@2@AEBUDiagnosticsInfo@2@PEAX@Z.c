/*
 * XREFs of ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18011C4B8
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x18011EEC8 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 * Callees:
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800CC504 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800CC71C (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800CD8A8 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x18011DF6C (-GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
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
  __int64 v9; // rcx
  char *v10; // r9
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]
  unsigned __int64 v13; // [rsp+20h] [rbp-18h]
  unsigned __int64 v14; // [rsp+20h] [rbp-18h]
  void *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  wil::last_error_context::last_error_context((wil::last_error_context *)&v15);
  memset_0(this, 0, 0x68uLL);
  this->cost = *((_DWORD *)a2 + 2);
  LOWORD(this->flags) = *((_WORD *)a2 + 32);
  this[1] = *(struct DiagnosticsInfo *)((char *)a2 + 56);
  if ( wil::details::GetModuleInformationFromAddress(0LL, 0LL, (unsigned int *)&this[13], v7, v12) )
    this[2] = (struct DiagnosticsInfo)&this[13];
  this[3] = *(struct DiagnosticsInfo *)((char *)a2 + 128);
  if ( wil::details::GetModuleInformationFromAddress(
         *((wil::details **)a2 + 18),
         &this[4],
         (unsigned int *)&this[21],
         v8,
         v13) )
  {
    this[5] = (struct DiagnosticsInfo)&this[21];
  }
  v10 = (char *)*((_QWORD *)a2 + 3);
  if ( v10 && *(_WORD *)v10 )
  {
    wil::details::StringCchPrintfA((wil::details *)&this[37], (char *)0x60, "%ws", v10);
    this[6] = (struct DiagnosticsInfo)&this[37];
  }
  LOWORD(this[7].cost) = a3[3].cost;
  this[8] = a3[1];
  if ( wil::details::g_pfnGetModuleName )
    this[9] = (struct DiagnosticsInfo)wil::details::g_pfnGetModuleName(v9);
  if ( wil::details::GetModuleInformationFromAddress(
         *(wil::details **)a3,
         &this[10],
         (unsigned int *)&this[29],
         v10,
         v14) )
  {
    this[11] = (struct DiagnosticsInfo)&this[29];
  }
  this[12] = a3[2];
  wil::last_error_context::~last_error_context((wil::last_error_context *)&v15);
  return this;
}

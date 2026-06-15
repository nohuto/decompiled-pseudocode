/*
 * XREFs of ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140023474
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140038B10 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z @ 0x140023514 (-GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z @ 0x1400235A8 (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioPump::AttachToMMCSS(CAudioPump *this)
{
  unsigned int v2; // ebx
  int RTThreadManagerInstance; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // edx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CRTThreadManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  RTThreadManagerInstance = CRTThreadManager::GetRTThreadManagerInstance(&v8);
  v4 = retaddr;
  if ( RTThreadManagerInstance < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x538,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)RTThreadManagerInstance,
      v6);
  if ( v8 )
  {
    v5 = *((_DWORD *)v8 + 4);
    if ( v5 )
    {
      if ( (unsigned int)(v5 - 1) < 2 )
      {
        v4 = (wil::details::in1diag3 *)*((_QWORD *)v8 + 4);
        v2 = *((_DWORD *)v4 + 5);
      }
    }
    else
    {
      v2 = *((_DWORD *)v8 + 5);
    }
  }
  SetEngineThreadPriority(v4, v2, (char *)this + 224);
  *((_QWORD *)this + 29) = AvThreadOpenTaskIndex(*((_QWORD *)this + 28));
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v8);
}

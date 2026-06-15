/*
 * XREFs of ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140028D5C
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14006B550 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z @ 0x140028DFC (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@KPEAPEAX@Z.c)
 *     ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z @ 0x140028E98 (-GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioPump::AttachToMMCSS(CAudioPump *this)
{
  unsigned int v2; // ebx
  int RTThreadManagerInstance; // eax
  unsigned __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CRTThreadManager *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v6 = 0LL;
  RTThreadManagerInstance = CRTThreadManager::GetRTThreadManagerInstance(&v6);
  v4 = (unsigned __int64)retaddr;
  if ( RTThreadManagerInstance < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x538,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)RTThreadManagerInstance);
  if ( v6 )
  {
    v4 = *((unsigned int *)v6 + 4);
    if ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      if ( (unsigned int)v4 <= 1 )
      {
        v4 = *((_QWORD *)v6 + 4);
        v2 = *(_DWORD *)(v4 + 20);
      }
    }
    else
    {
      v2 = *((_DWORD *)v6 + 5);
    }
  }
  SetEngineThreadPriority(v4, v2, (char *)this + 224);
  *((_QWORD *)this + 29) = AvThreadOpenTaskIndex(*((_QWORD *)this + 28));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v6);
}

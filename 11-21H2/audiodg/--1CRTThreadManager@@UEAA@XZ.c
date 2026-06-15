/*
 * XREFs of ??1CRTThreadManager@@UEAA@XZ @ 0x14006C138
 * Callers:
 *     ??_GCRTThreadManager@@UEAAPEAXI@Z @ 0x14006C2E0 (--_GCRTThreadManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CRTThreadManager::~CRTThreadManager(struct _RTL_CRITICAL_SECTION *this)
{
  DWORD LockSemaphore; // ecx
  HRESULT v3; // eax
  HRESULT v4; // eax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CRTThreadManager::`vftable';
  LockSemaphore = (DWORD)this->LockSemaphore;
  if ( LockSemaphore )
  {
    v3 = RtwqUnlockWorkQueue(LockSemaphore);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5A,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v3);
  }
  if ( LOBYTE(this[2].OwningThread) )
  {
    v4 = RtwqShutdown();
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v4);
  }
  DebugInfo = this[2].DebugInfo;
  DebugInfo->CriticalSection->DebugInfo = 0LL;
  v6 = *(_QWORD **)&DebugInfo->Type;
  if ( *(_QWORD *)&DebugInfo->Type )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v6 + 2);
      std::_Deallocate<16,0>(v6, 0x18uLL);
      v6 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(this[2].DebugInfo, 0x18uLL);
  DeleteCriticalSection(this + 1);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&this->SpinCount);
  this->RecursionCount = -1073741823;
}

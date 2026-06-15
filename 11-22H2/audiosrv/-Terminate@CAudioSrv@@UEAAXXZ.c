/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0560
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180043210 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x1800CF114 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1CAudioDGProcess@@QEAA@XZ @ 0x1800EEE78 (--1CAudioDGProcess@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800F0CC4 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x180110698 (-MME_ServiceStop@@YAXXZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A6C (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?KsNotifications_ServiceStop@@YAXXZ @ 0x180132E18 (-KsNotifications_ServiceStop@@YAXXZ.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015407C (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015DC58 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  CPowerReferenceManager *v2; // rbx
  CAudioDGProcess *v3; // rcx
  void *v4; // rdx
  LPCRITICAL_SECTION v5; // rbx
  AtmosCheck *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  Microsoft::WRL::ComPtr<AtmosCheck>::operator=(&v6);
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( v6 )
    AtmosCheck::Uninitialize(v6);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v6);
  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  v2 = g_powerReferenceManager;
  g_powerReferenceManager = 0LL;
  if ( v2 )
  {
    CPowerReferenceManager::~CPowerReferenceManager(v2);
    operator delete(v2);
  }
  MME_ServiceStop();
  if ( g_ADGProcess )
  {
    CAudioDGProcess::TerminateADG(v3);
    v5 = g_ADGProcess;
    if ( g_ADGProcess )
    {
      CAudioDGProcess::~CAudioDGProcess((CAudioDGProcess *)g_ADGProcess, v4);
      operator delete(v5);
    }
    g_ADGProcess = 0LL;
  }
  KsNotifications_ServiceStop();
  if ( (char *)g_hCanAcceptMMCClientEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_hCanAcceptMMCClientEvent);
    g_hCanAcceptMMCClientEvent = 0LL;
  }
}

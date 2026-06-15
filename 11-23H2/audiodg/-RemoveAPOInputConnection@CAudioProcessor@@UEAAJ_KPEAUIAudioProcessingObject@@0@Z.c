/*
 * XREFs of ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E770
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x14000FDBC (-FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140010354 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?FindConnectionIndex@CAudioProcessor@@AEAAJAEBV?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@PEBVCConnectionNode@@AEA_K@Z @ 0x14001039C (-FindConnectionIndex@CAudioProcessor@@AEAAJAEBV-$CAtlArray@PEAVCConnectionNode@@VCConnectionNode.c)
 *     ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x1400103E0 (-FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x140011BFC (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140070B50 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14007A930 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioProcessor::RemoveAPOInputConnection(
        CAudioProcessor *this,
        unsigned __int64 a2,
        struct IAudioProcessingObject *a3,
        unsigned __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 APOInList; // rsi
  __int64 v13; // r8
  struct CConnectionNode *ConnectionInObjectCache; // rax
  __int64 v15; // rcx
  struct CConnectionNode *v16; // rbx
  int ConnectionIndex; // eax
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-30h]
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  LPCRITICAL_SECTION v26; // [rsp+40h] [rbp-10h] BYREF
  char v27; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp+30h] BYREF

  if ( !a3 )
  {
    v9 = -2147467261;
    v21 = 2496LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v23);
    return v9;
  }
  if ( ((a4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v9 = -2147024890;
    v21 = 2497LL;
    goto LABEL_17;
  }
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v9 = -2147024890;
    v21 = 2498LL;
    goto LABEL_17;
  }
  v27 = 0;
  v26 = (LPCRITICAL_SECTION)((char *)this + 88);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v26);
  v8 = CAudioProcessor::ValidateTransactionState(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C7,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v8,
      v23);
LABEL_18:
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v26);
    return v9;
  }
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, __int64 *, _QWORD))(**((_QWORD **)this + 99) + 24LL))(
    *((_QWORD *)this + 99),
    &lpCriticalSection,
    &v25,
    0LL);
  APOInList = CAudioProcessor::FindAPOInList(v10, v25, a3, &v24);
  if ( !APOInList )
  {
    APOInList = CAudioProcessor::FindAPOInList(v11, (char *)this + 176, v13, &v24);
    if ( !APOInList )
    {
      v22 = 2516LL;
LABEL_24:
      v9 = -2005139430;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ALL,
        v23);
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&lpCriticalSection);
      goto LABEL_18;
    }
  }
  ConnectionInObjectCache = CAudioProcessor::FindConnectionInObjectCache(this, a4);
  v16 = ConnectionInObjectCache;
  if ( !ConnectionInObjectCache )
  {
    v22 = 2519LL;
    goto LABEL_24;
  }
  ConnectionIndex = CAudioProcessor::FindConnectionIndex(v15, APOInList + 128, ConnectionInObjectCache, &v24);
  v18 = ConnectionIndex;
  if ( ConnectionIndex < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9DB,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)ConnectionIndex,
      v23);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&lpCriticalSection);
    v9 = v18;
    goto LABEL_18;
  }
  ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(APOInList + 128, v24);
  ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(APOInList + 256, v24);
  --*((_DWORD *)v16 + 3);
  v19 = CAudioProcessor::EvaluateConnectionOwnership(this, v16);
  v9 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E2,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v19,
      v23);
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    goto LABEL_18;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v27 )
    LeaveCriticalSection(v26);
  return 0LL;
}

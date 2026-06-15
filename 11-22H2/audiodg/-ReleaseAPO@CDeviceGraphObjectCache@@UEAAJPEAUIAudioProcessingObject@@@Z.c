/*
 * XREFs of ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14001FED0
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709F8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14000DE20 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000EC34 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140015B08 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@@@Z @ 0x14001FFFC (-GetNext@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@AEAPEAU__POSITION@.c)
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x140022050 (--_ECAPONode@@UEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ @ 0x140070930 (--1-$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140070BA0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CommitAttachCount@CConnectionNode@@QEAAXXZ @ 0x14008E9EC (-CommitAttachCount@CConnectionNode@@QEAAXXZ.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::ReleaseAPO(
        CDeviceGraphObjectCache *this,
        struct IAudioProcessingObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rcx
  struct IAudioProcessingObject *v6; // rbx
  __int64 Next; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  CConnectionNode *v13; // rbx
  CConnectionNode *v14; // rbx
  struct IAudioProcessingObject *v15; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+70h] [rbp+40h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v6 = (struct IAudioProcessingObject *)*((_QWORD *)this + 13);
  v15 = v6;
  v16 = v2;
  while ( 1 )
  {
    if ( !v6 )
    {
      v15 = 0LL;
LABEL_19:
      ATL::CAutoPtr<CAPONode>::~CAutoPtr<CAPONode>(&v15);
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v16);
      return 2289827866LL;
    }
    Next = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetNext(v5, &v15);
    v10 = *(_QWORD *)Next;
    if ( *(struct IAudioProcessingObject **)(*(_QWORD *)Next + 8LL) == a2 )
      break;
    v6 = v15;
  }
  v15 = *(struct IAudioProcessingObject **)Next;
  if ( !v10 )
    goto LABEL_19;
  if ( *(_QWORD *)(v10 + 32) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 48) + 32LL))(
      *(_QWORD *)(v10 + 48),
      *(_QWORD *)(v10 + 8));
  v11 = (_DWORD *)*((_QWORD *)this + 40);
  if ( *v11 > 4u )
  {
    v15 = a2;
    v16 = (struct _RTL_CRITICAL_SECTION *)(v10 + 320);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
      (int)v11,
      (int)&unk_1400B3B10,
      v8,
      v9,
      &v16,
      (__int64)&v15);
  }
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt((_QWORD *)this + 13, v6);
  while ( *(_QWORD *)(v10 + 136) )
  {
    v13 = **(CConnectionNode ***)(v10 + 128);
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt((_QWORD *)(v10 + 128), 0LL);
    --*((_DWORD *)v13 + 3);
    CConnectionNode::CommitAttachCount(v13);
  }
  while ( *(_QWORD *)(v10 + 168) )
  {
    v14 = **(CConnectionNode ***)(v10 + 160);
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt((_QWORD *)(v10 + 160), 0LL);
    --*((_DWORD *)v14 + 3);
    CConnectionNode::CommitAttachCount(v14);
  }
  CoDisconnectObject(*(LPUNKNOWN *)(v10 + 8), 0);
  CAPONode::`vector deleting destructor'((CAPONode *)v10, 1u);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}

/*
 * XREFs of ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C0045DB4
 * Callers:
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C0046204 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0016B54 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

void __fastcall FxTagTracker::FxTagTracker(
        FxTagTracker *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTagTrackerType Type,
        unsigned __int8 CaptureStack,
        FxObject *Owner)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rbx
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v9; // al
  _LIST_ENTRY *p_AllocatedTagTrackersListHead; // rbx
  _LIST_ENTRY *p_m_TrackerEntry; // rcx
  _LIST_ENTRY *Blink; // rdx
  ULONG Tag; // ecx
  void *v14; // rax
  FxTagTrackingBlock *v15; // rax
  __m128i v16; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  this->m_Globals = FxDriverGlobals;
  this->m_TrackerType = Type;
  this->m_FailedCount = 0;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_CaptureStack = CaptureStack;
  this->m_Next = 0LL;
  this->m_OwningObject = Owner;
  `vector constructor iterator'(
    (char *)this->m_TagHistory,
    0x30uLL,
    0x19uLL,
    (void *(__fastcall *)(void *))FxTagHistory::FxTagHistory);
  this->m_CurRefHistory = 0;
  memset(this->m_TagHistory, 0, sizeof(this->m_TagHistory));
  if ( this->m_TrackerType == FxTagTrackerTypeHandle )
  {
    DebugExtension = this->m_Globals->DebugExtension;
    p_m_Lock = &DebugExtension->AllocatedTagTrackersLock.m_Lock;
    v9 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedTagTrackersLock.m_Lock);
    p_AllocatedTagTrackersListHead = &DebugExtension->AllocatedTagTrackersListHead;
    p_m_TrackerEntry = &this->m_TrackerEntry;
    Blink = p_AllocatedTagTrackersListHead->Blink;
    if ( Blink->Flink != p_AllocatedTagTrackersListHead )
      __fastfail(3u);
    this->m_TrackerEntry.Blink = Blink;
    p_m_TrackerEntry->Flink = p_AllocatedTagTrackersListHead;
    Blink->Flink = p_m_TrackerEntry;
    p_AllocatedTagTrackersListHead->Blink = p_m_TrackerEntry;
    KeReleaseSpinLock(p_m_Lock, v9);
    Tag = FxDriverGlobals->Tag;
    v14 = retaddr;
    v16.m128i_i64[0] = 0LL;
    v16.m128i_i64[1] = 64LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v14 = 0LL;
    v15 = (FxTagTrackingBlock *)FxPoolAllocator(
                                  FxDriverGlobals,
                                  &FxDriverGlobals->FxPoolFrameworks,
                                  &v16,
                                  0x30uLL,
                                  Tag,
                                  v14);
    if ( v15 )
    {
      v15->Next = 0LL;
      v15->Tag = 0LL;
      v15->File = 0LL;
      v15->Line = 0;
      v15->StackFrames = 0LL;
      v15->TimeLocked.QuadPart = MEMORY[0xFFFFF78000000320];
      this->m_Next = v15;
    }
    else
    {
      this->m_Next = 0LL;
      this->m_FailedCount = 1;
    }
  }
}

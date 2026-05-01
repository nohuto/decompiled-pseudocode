/*
 * XREFs of ??1CQueryKnownGameList@@UEAA@XZ @ 0x180045348
 * Callers:
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x180045310 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CQueryKnownGameList::~CQueryKnownGameList(struct _RTL_CRITICAL_SECTION *this)
{
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx
  char *v4; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CQueryKnownGameList::`vftable';
  DeleteCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    this[18].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  LockSemaphore = this[18].LockSemaphore;
  if ( LockSemaphore )
    operator delete[](LockSemaphore);
  v4 = (char *)this->LockSemaphore;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  operator delete[](this->OwningThread);
  this->RecursionCount = -1073741823;
}

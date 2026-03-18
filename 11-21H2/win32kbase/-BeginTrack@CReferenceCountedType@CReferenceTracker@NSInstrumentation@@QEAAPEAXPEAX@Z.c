/*
 * XREFs of ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C017A6C4
 * Callers:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C008B7F4 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ @ 0x1C01798B0 (-Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C017ADD8 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 */

_QWORD *__fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(
        NSInstrumentation::CPointerHashTable **this,
        void *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rbx
  struct _KEVENT *v6; // rax
  void *v7; // rcx
  void *v9; // rcx

  Pool2 = ExAllocatePool2(262LL, 4096LL);
  v5 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 40) = -1LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_QWORD *)(Pool2 + 16) = NSInstrumentation::CPlatformSignal::Create();
    v6 = NSInstrumentation::CPlatformSignal::Create();
    v7 = (void *)v5[2];
    v5[3] = v6;
    if ( v7 )
    {
      if ( v6 )
      {
        NSInstrumentation::CPointerHashTable::Insert(this[3], v5, a2);
        return v5;
      }
      ExFreePoolWithTag(v7, 0);
    }
    v9 = (void *)v5[3];
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}

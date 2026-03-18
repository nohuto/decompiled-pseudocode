/*
 * XREFs of ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C00478B4
 * Callers:
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C0047A04 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C00A7F48 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C00C0900 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 * Callees:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C016EAFC (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

char __fastcall AcquireReferenceCountedObjectHandle(__int64 a1, void *a2, _QWORD *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rcx
  void *v6; // rax

  v5 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(SGDGetSessionState(a1) + 24)
                                                                       + 16LL * (unsigned int)a1
                                                                       + 8040);
  if ( !v5 )
  {
    *a3 = 0LL;
LABEL_5:
    LOBYTE(v6) = 1;
    return (char)v6;
  }
  v6 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v5, a2);
  if ( v6 )
  {
    *a3 = v6;
    goto LABEL_5;
  }
  return (char)v6;
}

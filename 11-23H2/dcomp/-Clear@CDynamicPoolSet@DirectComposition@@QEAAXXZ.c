/*
 * XREFs of ?Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x18001923C
 * Callers:
 *     ??_ECDynamicPoolSet@DirectComposition@@EEAAPEAXI@Z @ 0x1800192D0 (--_ECDynamicPoolSet@DirectComposition@@EEAAPEAXI@Z.c)
 *     ?Clear@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x18001BD40 (-Clear@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?PopFirst@?$CLinkTargetedDoubleLinkedList@VCDynamicPool@DirectComposition@@$0BA@$0BA@@@QEAAPEAVCDynamicPool@DirectComposition@@XZ @ 0x18001927C (-PopFirst@-$CLinkTargetedDoubleLinkedList@VCDynamicPool@DirectComposition@@$0BA@$0BA@@@QEAAPEAVC.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CDynamicPoolSet::Clear(DirectComposition::CDynamicPoolSet *this)
{
  char *i; // rcx
  __int64 v3; // rax

  for ( i = (char *)this + 24; ; i = (char *)this + 24 )
  {
    v3 = CLinkTargetedDoubleLinkedList<DirectComposition::CDynamicPool,16,16>::PopFirst(i);
    if ( !v3 )
      break;
    CMILRefCountBaseT<IUnknown>::InternalRelease(v3);
  }
  *((_QWORD *)this + 6) = 0LL;
}

/*
 * XREFs of ??1?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAA@XZ @ 0x180059668
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A923C (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<SessionMonitor *>::~unique_ptr<SessionMonitor *>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}

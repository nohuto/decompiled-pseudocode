/*
 * XREFs of ??1?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAA@XZ @ 0x18005825C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x18009697C (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<SessionMonitor *>::~unique_ptr<SessionMonitor *>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}

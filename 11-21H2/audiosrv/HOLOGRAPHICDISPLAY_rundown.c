/*
 * XREFs of HOLOGRAPHICDISPLAY_rundown @ 0x18010EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x18010EA24 (--1CHMDManager@@QEAA@XZ.c)
 */

void __fastcall HOLOGRAPHICDISPLAY_rundown(CHMDManager *a1)
{
  if ( a1 )
  {
    CHMDManager::~CHMDManager(a1);
    operator delete(a1);
  }
}

/*
 * XREFs of VPOCONTEXT_rundown @ 0x18010FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x18010F5D8 (--1CHMDManager@@QEAA@XZ.c)
 */

void __fastcall VPOCONTEXT_rundown(CHMDManager *a1)
{
  if ( a1 )
  {
    CHMDManager::~CHMDManager(a1);
    operator delete(a1);
  }
}

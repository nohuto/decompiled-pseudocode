/*
 * XREFs of s_DestroyHolographicDisplay @ 0x18010F030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x18010EA24 (--1CHMDManager@@QEAA@XZ.c)
 */

__int64 __fastcall s_DestroyHolographicDisplay(CHMDManager **a1)
{
  CHMDManager *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    CHMDManager::~CHMDManager(v1);
    operator delete(v1);
  }
  return 0LL;
}

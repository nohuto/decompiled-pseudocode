/*
 * XREFs of ??1?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@QEAA@XZ @ 0x1800FE9D4
 * Callers:
 *     _CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::dtor$1 @ 0x1800793E6 (_CConstraintModelResourceManager--AddWorkItemToQueue_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<ReacquireResourceWorkItem>::~CAutoPtr<ReacquireResourceWorkItem>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2);
  *a1 = 0LL;
}

/*
 * XREFs of ?GetViewDataNew@CAppLayoutOperationItem@@UEAAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1801C5AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppLayoutOperationItem::GetViewDataNew(
        CAppLayoutOperationItem *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 68);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 84);
  *((_QWORD *)a2 + 4) = *(_QWORD *)((char *)this + 100);
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 27);
}

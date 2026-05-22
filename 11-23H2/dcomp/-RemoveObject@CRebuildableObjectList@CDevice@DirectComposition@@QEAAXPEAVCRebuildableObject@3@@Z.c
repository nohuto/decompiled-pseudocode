/*
 * XREFs of ?RemoveObject@CRebuildableObjectList@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@3@@Z @ 0x180009504
 * Callers:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CDevice::CRebuildableObjectList::RemoveObject(
        struct DirectComposition::CRebuildableObject **this,
        struct DirectComposition::CRebuildableObject *a2)
{
  struct DirectComposition::CRebuildableObject *v2; // r8
  struct DirectComposition::CRebuildableObject *i; // rax

  v2 = *this;
  if ( *this == a2 )
  {
    *this = (struct DirectComposition::CRebuildableObject *)*((_QWORD *)a2 + 1);
  }
  else
  {
    for ( i = (struct DirectComposition::CRebuildableObject *)*((_QWORD *)v2 + 1);
          i != a2 && i;
          i = (struct DirectComposition::CRebuildableObject *)*((_QWORD *)i + 1) )
    {
      v2 = i;
    }
    *((_QWORD *)v2 + 1) = *((_QWORD *)a2 + 1);
  }
  *((_QWORD *)a2 + 1) = 0LL;
}

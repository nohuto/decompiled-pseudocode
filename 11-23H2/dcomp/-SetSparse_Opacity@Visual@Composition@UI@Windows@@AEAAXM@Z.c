/*
 * XREFs of ?SetSparse_Opacity@Visual@Composition@UI@Windows@@AEAAXM@Z @ 0x18005D830
 * Callers:
 *     <none>
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18005B3B4 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetSparse_Opacity(Windows::UI::Composition::Visual *this, float a2)
{
  char *v2; // rbx
  struct CSparseStorage::DataInfo *SlotForData; // rax

  v2 = (char *)this + 112;
  if ( LODWORD(a2) == `Windows::UI::Composition::Visual::SetSparse_Opacity'::`2'::sc_defaultValue )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x8000000u;
  }
  else
  {
    SlotForData = CSparseStorage::FindSlotForData((Windows::UI::Composition::Visual *)((char *)this + 112), 5, 4u);
    *((float *)SlotForData + 1) = a2;
    *(_DWORD *)SlotForData &= 0x85FFFFFF;
    *(_DWORD *)SlotForData |= 0x5000000u;
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) |= 0x8000000u;
  }
}

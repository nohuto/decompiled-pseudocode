/*
 * XREFs of ??1?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@QEAA@XZ @ 0x1801B23E0
 * Callers:
 *     _VirtualHotKeyTracker::OnInput_::_1_::dtor$0 @ 0x1801B39EB (_VirtualHotKeyTracker--OnInput_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>::~pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>(
        __int64 a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = *(_QWORD ***)(a1 + 16);
  *v1[1] = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x30uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 16), 0x30uLL);
}
